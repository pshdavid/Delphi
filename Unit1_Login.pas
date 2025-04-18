unit Unit1_Login;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.ScrollBox, FMX.Objects,
  FMX.Memo, FMX.Controls.Presentation, FMX.StdCtrls, Winsoft.Android.UsbSer,
  Androidapi.JNIBridge, Winsoft.Android.Usb, FMX.ListBox, FMX.Memo.Types, FMX.Platform,
  Androidapi.JNI, Androidapi.JNI.Java.Net, Androidapi.JNI.JavaTypes, Androidapi.Helpers,
  Androidapi.JNI.App, Androidapi.JNI.Os, FMX.Helpers.Android, FMX.Edit;
type
  TForm1 = class(TForm)
    Memo1: TMemo;
    Rectangle3: TRectangle;
    Rectangle4: TRectangle;
    Label4: TLabel;
    Edit_ID: TEdit;
    Label3: TLabel;
    Edit_PW: TEdit;
    Btn_Enter: TRectangle;
    Label1: TLabel;
    DataReadTimer: TTimer;


    procedure FormCreate(Sender: TObject);
    procedure AppendText(const NewText: string);
    procedure DataReadTimerTimer(Sender: TObject);
    procedure Btn_EnterClick(Sender: TObject);
    procedure AnalyzingMessage(sTR1 : String);
    procedure SplitCommand(sTR1: string);
    procedure FormShow(Sender: TObject);
    procedure Edit_IDApplyStyleLookup(Sender: TObject);
    procedure Edit_PWApplyStyleLookup(Sender: TObject);

    procedure ResizedForm(AForm : TForm);
    procedure ResizedRec(ARectangle : TRectangle);
    procedure ResizedEdit(AEdit : TEdit);
    procedure ResizedLabel(ALabel : TLabel);
    procedure ResizedBox(AComboBox : TComboBox);

  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

  ScaleWidth, ScaleHeight : Double;

  UsbDevices: TArray<JUsbDevice>;
  UsbSerial: TUsbSerial;

  CommandList : Array[0..49] of String;
  CaseNum : Integer;

  ReadString : String;
  SensorBoardNum : String;


implementation

{$R *.fmx}

uses Handler, Unit2_Main, Unit3_System, Unit4_Gateway, Unit5_Network,
  Unit6_Server, Unit7_Chimney, Unit8_DateTime, Unit9_Board0, Unit10_BoardMM,
  Unit11_BoardOpt;

procedure TForm1.Btn_EnterClick(Sender: TObject);
begin
  if not ((Edit_ID.Text = 'admin') and (Edit_PW.Text = '1234')) then
    begin
      ShowMessage('입력한 아이디와 비밀번호가 틀립니다...');
      exit;
    end;

  try
    UsbDevices := UsbSerial.UsbDevices;
    const Device = UsbDevices[0];

    if not UsbSerial.IsSupported(Device) then
      raise Exception.Create('Unsupported device');

    if not UsbSerial.HasPermission(Device) then
      begin
        UsbSerial.RequestPermission(Device);
        Exit;
      end;

    UsbSerial.Connect(Device);
    AppendText(JStringToString(Device.getManufacturerName) + ' ' + JStringToString(Device.getProductName));
  except
    ShowMessage('연결된 USB 가 없습니다...');
    exit;
  end;

  UsbSerial.Open(TRUE);
  UsbSerial.BaudRate := 115200;
  UsbSerial.Parity := TParity.None;
  UsbSerial.FlowControl := TFlowControl.Off;
  UsbSerial.DataBits := TDataBits._8;
  UsbSerial.StopBits := TStopBits._1;

  DataReadTimer.Enabled := TRUE;

  var cmd : String;
  var data : TArray<Byte>;

  CaseNum := 1;
  cmd := '{"cmd":"r","type":"esp_gw"}';      // Gateway Read
  data := TEncoding.ANSI.GetBytes(cmd);
  UsbSerial.Write(data, 0);
  AppendText('SEND : ' + cmd);

  Form2.Show;
end;

procedure TForm1.FormCreate(Sender: TObject);
var
  ScreenService: IFMXScreenService;
  OrientSet: TScreenOrientations;
begin
  ScaleWidth := Screen.DesktopWidth /  411;
  ScaleHeight := Screen.DesktopHeight / 765;

  if TPlatformServices.Current.SupportsPlatformService(IFMXScreenService, IInterface(ScreenService)) then   // 화면이 돌아가는 것을 방지
    begin
      OrientSet := [TScreenOrientation.Portrait];
      ScreenService.SetSupportedScreenOrientations(OrientSet);
    end;

  Form1.Width := Round(Form1.Width * ScaleWidth);
  Form1.Height := Round(Form1.Height * ScaleHeight);
  Label1.Width := Label1.Width * ScaleWidth;
  Label1.Height := Label1.Height * ScaleHeight;
  Label1.Position.X := Label1.Position.X * ScaleWidth;
  Label1.Position.Y := Label1.Position.Y * ScaleHeight;
  Label3.Width := Label3.Width * ScaleWidth;
  Label3.Height := Label3.Height * ScaleHeight;
  Label3.Position.X := Label3.Position.X * ScaleWidth;
  Label3.Position.Y := Label3.Position.Y * ScaleHeight;
  Label4.Width := Label4.Width * ScaleWidth;
  Label4.Height := Label4.Height * ScaleHeight;
  Label4.Position.X := Label4.Position.X * ScaleWidth;
  Label4.Position.Y := Label4.Position.Y * ScaleHeight;

  Rectangle3.Width := Rectangle3.Width * ScaleWidth;
  Rectangle3.Height := Rectangle3.Height * ScaleHeight;
  Rectangle3.Position.X := Rectangle3.Position.X * ScaleWidth;
  Rectangle3.Position.Y := Rectangle3.Position.Y * ScaleHeight;
  Rectangle4.Width := Rectangle4.Width * ScaleWidth;
  Rectangle4.Height := Rectangle4.Height * ScaleHeight;
  Rectangle4.Position.X := Rectangle4.Position.X * ScaleWidth;
  Rectangle4.Position.Y := Rectangle4.Position.Y * ScaleHeight;

  Btn_Enter.Width := Btn_Enter.Width * ScaleWidth;
  Btn_Enter.Height := Btn_Enter.Height * ScaleHeight;
  Btn_Enter.Position.X := Btn_Enter.Position.X * ScaleWidth;
  Btn_Enter.Position.Y := Btn_Enter.Position.Y * ScaleHeight;

  ResizedEdit(Edit_ID);
  ResizedEdit(Edit_PW);

  UsbSerial := TUsbSerial.Create;
end;

function ByteArrayToString(Data: TJavaArray<Byte>): string;
begin
  Result := '';
  try
    Result := TEncoding.ANSI.GetString(TJavaArrayToTBytes(Data));
  except
    on E: Exception do
      ShowMessage(E.Message);
  end;
end;

procedure TForm1.DataReadTimerTimer(Sender: TObject);
var
  sTR1 : String;
begin
  var Buffer: TArray<Byte>;

  SetLength(Buffer, 1000);
  const Size = UsbSerial.Read(Buffer, 1000);

  if Size >= 1 then
    begin
      SetLength(Buffer, Size);
      sTR1 := TEncoding.UTF8.GetString(Buffer);

      //ReadString := ReadString + sTR1;
      AppendText('RECV : ' + sTR1);
      AnalyzingMessage(sTR1);
      DataReadTimer.Enabled := FALSE;
    end;
end;

procedure TForm1.Edit_IDApplyStyleLookup(Sender: TObject);
begin
  EditSet(Edit_ID);
end;

procedure TForm1.Edit_PWApplyStyleLookup(Sender: TObject);
begin
  EditSet(Edit_PW);
end;

procedure TForm1.AppendText(const NewText: string);
begin
  if NewText = '' then
    Exit;

  //Form2.Memo1.Lines.Add(NewText);
  //Form2.Memo1.SelStart := Length(Memo1.Text);
  //Form2.Memo1.SelLength := 0;
end;

procedure TForm1.AnalyzingMessage(sTR1: string);
var
  sTR2, sTR3, sTR4, sTR5, sTR6, sTR7, sTR8, sTR9, sTR10 : String;
  cH1, cH2 : String;
  i, startPoint, Cnt : Integer;
  j: Integer;
  k: Integer;
  CC0, CC1, CC2, CC3, SS0, SS1, SS2, SS3 : Boolean;
  CV0, CV1, CV2, CV3, SV0, SV1, SV2, SV3 : String;
  CCV0, CCV1, CCV2, CCV3, SSV0, SSV1, SSV2, SSV3 : String;
begin
  for i := 0 to 49 do
    begin
      CommandList[i] := '';
    end;

  sTR2 := Copy(sTR1, 2, Length(sTR1) - 2);
  SplitCommand(sTR2);

  if CaseNum = 1 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      if i = 0 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          Form2.lb_Model.Text := sTR4;
                          Form3.lb_Model.Text := sTR4;

                          break;
                        end;

                      if i = 1 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          Form2.lb_Version.Text := sTR4;
                          Form3.lb_Version.Text := sTR4;
                          break;
                        end;

                      if i > 2 then
                        break;
                    end;
                end;
            end
          else break;
        end;
    end;

  if CaseNum = 2 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      if i = 0 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          Form4.lb_Model.Text := sTR4;
                          break;
                        end;

                      if i = 1 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          Form4.lb_Version.Text := sTR4;
                          break;
                        end;

                      if i = 2 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          cH2 := Copy(sTR4, 2, 1);

                          if cH2 = '0' then begin Form4.GWTypeCBox.ItemIndex := 0; end;
                          if cH2 = '1' then begin Form4.GWTypeCBox.ItemIndex := 1; end;
                          if cH2 = '2' then begin Form4.GWTypeCBox.ItemIndex := 2; end;

                          break;
                        end;

                      if i > 3 then
                        break;
                    end;
                end;
            end
          else break;
        end;
    end;

  if CaseNum = 3 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);

                      if sTR4 = 'success' then
                        begin
                          Form4.Close;
                          Form3.Show;
                        end;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 4 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      if i = 0 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          if sTR4 = 'enable' then begin Form5.NetworkDHCPCBox.ItemIndex := 0; end;
                          if sTR4 = 'disable' then begin Form5.NetworkDHCPCBox.ItemIndex := 1; end;
                          break;
                        end;

                      if i = 1 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          Form5.NetworkGWEdit.Text := sTR4;
                          break;
                        end;

                      if i = 2 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          Form5.NetworkIPEdit.Text := sTR4;
                          break;
                        end;

                      if i = 3 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          Form5.NetworkMaskEdit.Text := sTR4;
                          break;
                        end;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 5 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);

                      if sTR4 = 'success' then
                        begin
                          Form5.Close;
                          Form3.Show;
                        end;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 6 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      if i = 0 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          Form6.ServerIPEdit.Text := sTR4;
                          break;
                        end;

                      if i = 1 then
                        begin
                          sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);
                          Form6.ServerPortEdit.Text := sTR4;
                          break;
                        end;

                      if i > 2 then
                        break;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 7 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);

                      if sTR4 = 'success' then
                        begin
                          Form6.Close;
                          Form3.Show;
                        end;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 8 then
    begin
      CC0 := FALSE; CC1 := FALSE; CC2 := FALSE; CC2 := FALSE;
      SS0 := FALSE; SS1 := FALSE; SS2 := FALSE; SS3 := FALSE;
      CV0 := ''; CV1 := ''; CV2 := ''; CV3 := '';
      SV0 := ''; SV1 := ''; SV2 := ''; SV3 := '';
      CCV0 := '0'; CCV1 := '0'; CCV2 := '0'; CCV3 := '0';
      SSV0 := '0'; SSV1 := '0'; SSV2 := '0'; SSV3 := '0';

      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, 2, j-3);
                      sTR5 := Copy(sTR3, j+2, Length(sTR3)-j-2);

                      if sTR4 = 'cc0' then begin CC0 := TRUE; CCV0 := sTR4; CV0 := sTR5; end;
                      if sTR4 = 'cc1' then begin CC1 := TRUE; CCV1 := sTR4; CV1 := sTR5; end;
                      if sTR4 = 'cc2' then begin CC2 := TRUE; CCV2 := sTR4; CV2 := sTR5; end;
                      if sTR4 = 'cc3' then begin CC3 := TRUE; CCV3 := sTR4; CV3 := sTR5; end;

                      if sTR4 = 'ss0' then begin SS0 := TRUE; SSV0 := sTR4; SV0 := sTR5; end;
                      if sTR4 = 'ss1' then begin SS1 := TRUE; SSV0 := sTR4; SV1 := sTR5; end;
                      if sTR4 = 'ss2' then begin SS2 := TRUE; SSV0 := sTR4; SV2 := sTR5; end;
                      if sTR4 = 'ss3' then begin SS3 := TRUE; SSV0 := sTR4; SV3 := sTR5; end;
                    end;
                end;
            end
          else break;
        end;

      if CC0 then
        begin
          if Length(CV0) = 1 then Form7.PlaceCodeEdit0.Text := '000000' + CV0;
          if Length(CV0) = 2 then Form7.PlaceCodeEdit0.Text := '00000' + CV0;
          if Length(CV0) = 3 then Form7.PlaceCodeEdit0.Text := '0000' + CV0;
          if Length(CV0) = 4 then Form7.PlaceCodeEdit0.Text := '000' + CV0;
          if Length(CV0) = 5 then Form7.PlaceCodeEdit0.Text := '00' + CV0;
          if Length(CV0) = 6 then Form7.PlaceCodeEdit0.Text := '0' + CV0;
          if Length(CV0) = 7 then Form7.PlaceCodeEdit0.Text := CV0;
        end
      else Form7.PlaceCodeEdit0.Text := '';

      if SS0 then
        begin
          if Length(SV0) = 1 then Form7.ChimneyCodeEdit0.Text := '00' + SV0;
          if Length(SV0) = 2 then Form7.ChimneyCodeEdit0.Text := '0' + SV0;
          if Length(SV0) = 3 then Form7.ChimneyCodeEdit0.Text := SV0;
        end
      else Form7.ChimneyCodeEdit0.Text := '';

      if CC1 then
        begin
          if Length(CV1) = 1 then Form7.PlaceCodeEdit1.Text := '000000' + CV1;
          if Length(CV1) = 2 then Form7.PlaceCodeEdit1.Text := '00000' + CV1;
          if Length(CV1) = 3 then Form7.PlaceCodeEdit1.Text := '0000' + CV1;
          if Length(CV1) = 4 then Form7.PlaceCodeEdit1.Text := '000' + CV1;
          if Length(CV1) = 5 then Form7.PlaceCodeEdit1.Text := '00' + CV1;
          if Length(CV1) = 6 then Form7.PlaceCodeEdit1.Text := '0' + CV1;
          if Length(CV1) = 7 then Form7.PlaceCodeEdit1.Text := CV1;
        end
      else Form7.PlaceCodeEdit1.Text := '';

      if SS1 then
        begin
          if Length(SV1) = 1 then Form7.ChimneyCodeEdit1.Text := '00' + SV1;
          if Length(SV1) = 2 then Form7.ChimneyCodeEdit1.Text := '0' + SV1;
          if Length(SV1) = 3 then Form7.ChimneyCodeEdit1.Text := SV1;
        end
      else Form7.ChimneyCodeEdit1.Text := '';

      if SS2 then
        begin
          if Length(SV2) = 1 then Form7.ChimneyCodeEdit2.Text := '00' + SV2;
          if Length(SV2) = 2 then Form7.ChimneyCodeEdit2.Text := '0' + SV2;
          if Length(SV2) = 3 then Form7.ChimneyCodeEdit2.Text := SV2;
        end
      else Form7.ChimneyCodeEdit2.Text := '';

      if CC3 then
        begin
          if Length(CV3) = 1 then Form7.PlaceCodeEdit3.Text := '000000' + CV3;
          if Length(CV3) = 2 then Form7.PlaceCodeEdit3.Text := '00000' + CV3;
          if Length(CV3) = 3 then Form7.PlaceCodeEdit3.Text := '0000' + CV3;
          if Length(CV3) = 4 then Form7.PlaceCodeEdit3.Text := '000' + CV3;
          if Length(CV3) = 5 then Form7.PlaceCodeEdit3.Text := '00' + CV3;
          if Length(CV3) = 6 then Form7.PlaceCodeEdit3.Text := '0' + CV3;
          if Length(CV3) = 7 then Form7.PlaceCodeEdit3.Text := CV3;
        end
      else Form7.PlaceCodeEdit3.Text := '';

      if SS3 then
        begin
          if Length(SV3) = 1 then Form7.ChimneyCodeEdit3.Text := '00' + SV3;
          if Length(SV3) = 2 then Form7.ChimneyCodeEdit3.Text := '0' + SV3;
          if Length(SV3) = 3 then Form7.ChimneyCodeEdit3.Text := SV3;
        end
      else Form7.ChimneyCodeEdit3.Text := '';
    end;

    if CaseNum = 9 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);

                      if sTR4 = 'success' then
                        begin
                          Form7.Close;
                          Form3.Show;
                        end;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 10 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);

                      Form8.ServerDateEdit.Text := Copy(sTR4, 1, 4) + '-' + Copy(sTR4, 5, 2) + '-' + Copy(sTR4, 7, 2);
                      Form8.ServerTimeEdit.Text := Copy(sTR4, 9, 2) + ':' + Copy(sTR4, 11, 2) + ':00';
                      Form8.HourSpinBox.Value := StrToFloat(Copy(sTR4, 9, 2));
                      Form8.MinuteSpinBox.Value := StrToFloat(Copy(sTR4, 11, 2));
                      Form8.SecondSpinBox.Value := 0;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 11 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);

                      if sTR4 = 'success' then
                        begin
                          Form8.Close;
                          Form3.Show;
                        end;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 14 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];
          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, 2, j-3);
                      sTR5 := Copy(sTR3, j+2, Length(sTR3)-j-2);

                      if sTR4 = 'a_type' then
                        begin
                          if sTR5 = 'null' then Form11.SensorItemCBox.ItemIndex := 0;
                          if sTR5 = 'A' then Form11.SensorItemCBox.ItemIndex := 1;
                          if sTR5 = 'a' then Form11.SensorItemCBox.ItemIndex := 2;
                          if sTR5 = 'b' then Form11.SensorItemCBox.ItemIndex := 3;
                          if sTR5 = 'c' then Form11.SensorItemCBox.ItemIndex := 4;
                          if sTR5 = 'd' then Form11.SensorItemCBox.ItemIndex := 5;
                          if sTR5 = 'e' then Form11.SensorItemCBox.ItemIndex := 6;
                          if sTR5 = 'f' then Form11.SensorItemCBox.ItemIndex := 7;
                          if sTR5 = 'D' then Form11.SensorItemCBox.ItemIndex := 8;
                          if sTR5 = 'd' then Form11.SensorItemCBox.ItemIndex := 9;
                          if sTR5 = 'H' then Form11.SensorItemCBox.ItemIndex := 10;
                          if sTR5 = 'h' then Form11.SensorItemCBox.ItemIndex := 11;
                          if sTR5 = 'T' then Form11.SensorItemCBox.ItemIndex := 12;
                          if sTR5 = 't' then Form11.SensorItemCBox.ItemIndex := 13;
                        end;

                      if sTR4 = 'a_sts' then
                        begin
                          if sTR5 = 'null' then Form11.SensorStatusCBox.ItemIndex := -1;
                          if sTR5 = 'use' then Form11.SensorStatusCBox.ItemIndex := 0;
                          if sTR5 = 'chk' then Form11.SensorStatusCBox.ItemIndex := 1;
                        end;

                      if sTR4 = 'a_min' then Form11.SensorMinEdit.Text := sTR5;
                      if sTR4 = 'a_ref' then Form11.SensorRefEdit.Text := sTR5;
                      if sTR4 = 'a_max' then Form11.SensorMaxEdit.Text := sTR5;
                      if sTR4 = 'a_opt' then Form11.SensorRangeEdit.Text := sTR5;

                      if sTR4 = 'a_faci' then
                        begin
                          sTR6 := Copy(sTR5, 1, 1);
                          sTR7 := Copy(sTR5, 2, 4);

                          if sTR6 = 'null' then
                            begin
                              Form11.SensorCodeEdit.Text := '';
                              Form11.SensorCodeCBox.ItemIndex := -1;
                            end;

                          if sTR6 = 'E' then
                            begin
                              Form11.SensorCodeEdit.Text := sTR7;
                              Form11.SensorCodeCBox.ItemIndex := 0;
                            end;

                          if sTR6 = 'P' then
                            begin
                              Form11.SensorCodeEdit.Text := sTR7;
                              Form11.SensorCodeCBox.ItemIndex := 1;
                            end;

                          if sTR6 = 'F' then
                            begin
                              Form11.SensorCodeEdit.Text := sTR7;
                              Form11.SensorCodeCBox.ItemIndex := 2;
                            end;
                        end;

                      if sTR4 = 'a_faciN' then
                        begin
                          if sTR5 = 'null' then Form11.SensorInstallNoEdit.Text := ''
                          else Form11.SensorInstallNoEdit.Text := sTR5;
                        end;

                      if sTR4 = 'ssu1' then
                        begin
                          if sTR5 = 'u' then Form11.ChimneyUseCBox1.ItemIndex := 0;
                          if sTR5 = 'n' then Form11.ChimneyUseCBox1.ItemIndex := 1;
                        end;
                      if sTR4 = 'ssu2' then
                        begin
                          if sTR5 = 'u' then Form11.ChimneyUseCBox2.ItemIndex := 0;
                          if sTR5 = 'n' then Form11.ChimneyUseCBox2.ItemIndex := 1;
                        end;
                      if sTR4 = 'ssu3' then
                        begin
                          if sTR5 = 'u' then Form11.ChimneyUseCBox3.ItemIndex := 0;
                          if sTR5 = 'n' then Form11.ChimneyUseCBox3.ItemIndex := 1;
                        end;
                      if sTR4 = 'ssu4' then
                        begin
                          if sTR5 = 'u' then Form11.ChimneyUseCBox4.ItemIndex := 0;
                          if sTR5 = 'n' then Form11.ChimneyUseCBox4.ItemIndex := 1;
                        end;

                      if sTR4 = 'ssc1' then
                        begin
                          sTR6 := Copy(sTR5, 1, 1);

                          if sTR6 = 'N' then
                            begin
                              Form11.ChimneyProCBox1.ItemIndex := 0;
                              Form11.ChimneyProEdit1.Text := '';
                            end;

                          if sTR6 = 'P' then
                            begin
                              sTR7 := Copy(sTR5, 2, 4);
                              Form11.ChimneyProCBox1.ItemIndex := 1;
                              Form11.ChimneyProEdit1.Text := sTR7;
                            end;

                          if sTR6 = 'F' then
                            begin
                              sTR7 := Copy(sTR5, 2, 4);
                              Form11.ChimneyProCBox1.ItemIndex := 2;
                              Form11.ChimneyProEdit1.Text := sTR7;
                            end;
                        end;

                      if sTR4 = 'ssc2' then
                        begin
                          sTR6 := Copy(sTR5, 1, 1);

                          if sTR6 = 'N' then
                            begin
                              Form11.ChimneyProCBox2.ItemIndex := 0;
                              Form11.ChimneyProEdit2.Text := '';
                            end;

                          if sTR6 = 'P' then
                            begin
                              sTR7 := Copy(sTR5, 2, 4);
                              Form11.ChimneyProCBox2.ItemIndex := 1;
                              Form11.ChimneyProEdit2.Text := sTR7;
                            end;

                          if sTR6 = 'F' then
                            begin
                              sTR7 := Copy(sTR5, 2, 4);
                              Form11.ChimneyProCBox2.ItemIndex := 2;
                              Form11.ChimneyProEdit2.Text := sTR7;
                            end;
                        end;

                      if sTR4 = 'ssc3' then
                        begin
                          sTR6 := Copy(sTR5, 1, 1);

                          if sTR6 = 'N' then
                            begin
                              Form11.ChimneyProCBox3.ItemIndex := 0;
                              Form11.ChimneyProEdit3.Text := '';
                            end;

                          if sTR6 = 'P' then
                            begin
                              sTR7 := Copy(sTR5, 2, 4);
                              Form11.ChimneyProCBox3.ItemIndex := 1;
                              Form11.ChimneyProEdit3.Text := sTR7;
                            end;

                          if sTR6 = 'F' then
                            begin
                              sTR7 := Copy(sTR5, 2, 4);
                              Form11.ChimneyProCBox3.ItemIndex := 2;
                              Form11.ChimneyProEdit3.Text := sTR7;
                            end;
                        end;

                      if sTR4 = 'ssc4' then
                        begin
                          sTR6 := Copy(sTR5, 1, 1);

                          if sTR6 = 'N' then
                            begin
                              Form11.ChimneyProCBox4.ItemIndex := 0;
                              Form11.ChimneyProEdit4.Text := '';
                            end;

                          if sTR6 = 'P' then
                            begin
                              sTR7 := Copy(sTR5, 2, 4);
                              Form11.ChimneyProCBox4.ItemIndex := 1;
                              Form11.ChimneyProEdit4.Text := sTR7;
                            end;

                          if sTR6 = 'F' then
                            begin
                              sTR7 := Copy(sTR5, 2, 4);
                              Form11.ChimneyProCBox4.ItemIndex := 2;
                              Form11.ChimneyProEdit4.Text := sTR7;
                            end;
                        end;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 15 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, j+2, Length(sTR3) - j - 2);

                      if sTR4 = 'success' then
                        begin
                          Form11.Close;
                        end;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 17 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, 2, j-3);
                      sTR5 := Copy(sTR3, j+2, Length(sTR3)-j-2);

                      if sTR4 = 'status' then Form10.StatusLabel.Text := sTR5;
                      if sTR4 = 'datetime' then Form10.DateTimeLabel.Text := Copy(sTR5, 1, 4) + '-' + Copy(sTR5, 5, 2) + '-' + Copy(sTR5, 7, 2)
                                                                             + ' ' + Copy(sTR5, 9, 2) + ':' + Copy(sTR5, 11, 2);

                      if (sTR4 = 'value0') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit0.Text := sTR5;
                      if (sTR4 = 'value1') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit1.Text := sTR5;
                      if (sTR4 = 'value2') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit2.Text := sTR5;
                      if (sTR4 = 'value3') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit3.Text := sTR5;
                      if (sTR4 = 'value4') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit4.Text := sTR5;
                      if (sTR4 = 'value5') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit5.Text := sTR5;
                      if (sTR4 = 'value6') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit6.Text := sTR5;
                      if (sTR4 = 'value7') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit7.Text := sTR5;
                      if (sTR4 = 'value8') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit8.Text := sTR5;
                      if (sTR4 = 'value9') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit9.Text := sTR5;
                      if (sTR4 = 'value10') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit10.Text := sTR5;
                      if (sTR4 = 'value11') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit11.Text := sTR5;
                      if (sTR4 = 'value12') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit12.Text := sTR5;
                      if (sTR4 = 'value13') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit13.Text := sTR5;
                      if (sTR4 = 'value14') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit14.Text := sTR5;
                      if (sTR4 = 'value15') and not ((sTR5 = '') or (sTR5 = 'null')) then Form10.SensorValueEdit15.Text := sTR5;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

    if CaseNum = 18 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, 2, j-3);
                      sTR5 := Copy(sTR3, j+2, Length(sTR3)-j-2);

                      if (sTR4 = 'a_type0') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_0.Text := sTR5;
                      if (sTR4 = 'a_type1') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_1.Text := sTR5;
                      if (sTR4 = 'a_type2') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_2.Text := sTR5;
                      if (sTR4 = 'a_type3') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_3.Text := sTR5;
                      if (sTR4 = 'a_type4') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_4.Text := sTR5;
                      if (sTR4 = 'a_type5') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_5.Text := sTR5;
                      if (sTR4 = 'a_type6') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_6.Text := sTR5;
                      if (sTR4 = 'a_type7') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_7.Text := sTR5;
                      if (sTR4 = 'a_type8') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_8.Text := sTR5;
                      if (sTR4 = 'a_type9') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_9.Text := sTR5;
                      if (sTR4 = 'a_type10') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_10.Text := sTR5;
                      if (sTR4 = 'a_type11') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_11.Text := sTR5;
                      if (sTR4 = 'a_type12') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_12.Text := sTR5;
                      if (sTR4 = 'a_type13') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_13.Text := sTR5;
                      if (sTR4 = 'a_type14') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_14.Text := sTR5;
                      if (sTR4 = 'a_type15') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ValueLabel0_15.Text := sTR5;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

  if CaseNum = 19 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, 2, j-3);
                      sTR5 := Copy(sTR3, j+2, Length(sTR3)-j-2);

                      if (sTR4 = 'a_faci0') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_0.Text := sTR5;
                      if (sTR4 = 'a_faci1') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_1.Text := sTR5;
                      if (sTR4 = 'a_faci2') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_2.Text := sTR5;
                      if (sTR4 = 'a_faci3') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_3.Text := sTR5;
                      if (sTR4 = 'a_faci4') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_4.Text := sTR5;
                      if (sTR4 = 'a_faci5') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_5.Text := sTR5;
                      if (sTR4 = 'a_faci6') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_6.Text := sTR5;
                      if (sTR4 = 'a_faci7') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_7.Text := sTR5;
                      if (sTR4 = 'a_faci8') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_8.Text := sTR5;
                      if (sTR4 = 'a_faci9') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_9.Text := sTR5;
                      if (sTR4 = 'a_faci10') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_10.Text := sTR5;
                      if (sTR4 = 'a_faci11') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_11.Text := sTR5;
                      if (sTR4 = 'a_faci12') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_12.Text := sTR5;
                      if (sTR4 = 'a_faci13') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_13.Text := sTR5;
                      if (sTR4 = 'a_faci14') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_14.Text := sTR5;
                      if (sTR4 = 'a_faci15') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.CodeLabel0_15.Text := sTR5;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

  if CaseNum = 20 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, 2, j-3);
                      sTR5 := Copy(sTR3, j+2, Length(sTR3)-j-2);

                      if (sTR4 = 'a_sts0') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_0.Text := sTR5;
                      if (sTR4 = 'a_sts1') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_1.Text := sTR5;
                      if (sTR4 = 'a_sts2') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_2.Text := sTR5;
                      if (sTR4 = 'a_sts3') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_3.Text := sTR5;
                      if (sTR4 = 'a_sts4') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_4.Text := sTR5;
                      if (sTR4 = 'a_sts5') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_5.Text := sTR5;
                      if (sTR4 = 'a_sts6') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_6.Text := sTR5;
                      if (sTR4 = 'a_sts7') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_7.Text := sTR5;
                      if (sTR4 = 'a_sts8') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_8.Text := sTR5;
                      if (sTR4 = 'a_sts9') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_9.Text := sTR5;
                      if (sTR4 = 'a_sts10') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_10.Text := sTR5;
                      if (sTR4 = 'a_sts11') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_11.Text := sTR5;
                      if (sTR4 = 'a_sts12') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_12.Text := sTR5;
                      if (sTR4 = 'a_sts13') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_13.Text := sTR5;
                      if (sTR4 = 'a_sts14') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_14.Text := sTR5;
                      if (sTR4 = 'a_sts15') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.StatusLabel0_15.Text := sTR5;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

  if CaseNum = 21 then
    begin
      for i := 0 to 49 do
        begin
          sTR3 := CommandList[i];

          if sTR3 <> '' then
            begin
              for j := 1 to Length(sTR3) do
                begin
                  if Copy(sTR3, j, 1) = ':' then
                    begin
                      sTR4 := Copy(sTR3, 2, j-3);
                      sTR5 := Copy(sTR3, j+2, Length(sTR3)-j-2);

                      if sTR5 = 'nnnn' then sTR6 := '';
                      if sTR5 = 'nnnu' then sTR6 := '4';
                      if sTR5 = 'nnun' then sTR6 := '3';
                      if sTR5 = 'nnuu' then sTR6 := '3,4';
                      if sTR5 = 'nunn' then sTR6 := '2';
                      if sTR5 = 'nunu' then sTR6 := '2,4';
                      if sTR5 = 'nuun' then sTR6 := '2,3';
                      if sTR5 = 'nuuu' then sTR6 := '2,3,4';
                      if sTR5 = 'unnn' then sTR6 := '1';
                      if sTR5 = 'unnu' then sTR6 := '1,4';
                      if sTR5 = 'unun' then sTR6 := '1,3';
                      if sTR5 = 'unuu' then sTR6 := '1,3,4';
                      if sTR5 = 'uunn' then sTR6 := '1,2';
                      if sTR5 = 'uunu' then sTR6 := '1,2,4';
                      if sTR5 = 'uuun' then sTR6 := '1,2,3';
                      if sTR5 = 'uuuu' then sTR6 := '1,2,3,4';

                      if (sTR4 = 'a_chim0') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_0.Text := sTR6;
                      if (sTR4 = 'a_chim1') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_1.Text := sTR6;
                      if (sTR4 = 'a_chim2') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_2.Text := sTR6;
                      if (sTR4 = 'a_chim3') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_3.Text := sTR6;
                      if (sTR4 = 'a_chim4') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_4.Text := sTR6;
                      if (sTR4 = 'a_chim5') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_5.Text := sTR6;
                      if (sTR4 = 'a_chim6') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_6.Text := sTR6;
                      if (sTR4 = 'a_chim7') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_7.Text := sTR6;
                      if (sTR4 = 'a_chim8') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_8.Text := sTR6;
                      if (sTR4 = 'a_chim9') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_9.Text := sTR6;
                      if (sTR4 = 'a_chim10') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_10.Text := sTR6;
                      if (sTR4 = 'a_chim11') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_11.Text := sTR6;
                      if (sTR4 = 'a_chim12') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_12.Text := sTR6;
                      if (sTR4 = 'a_chim13') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_13.Text := sTR6;
                      if (sTR4 = 'a_chim14') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_14.Text := sTR6;
                      if (sTR4 = 'a_chim15') and not ((sTR5 = '') or (sTR5 = 'null')) then Form9.ChimneyLabel0_15.Text := sTR6;

                      break;
                    end;
                end;
            end
          else break;
        end;
    end;

end;


procedure TForm1.SplitCommand(sTR1: string);
var
  sTR3, cH : String;
  Cnt, i, startPoint : Integer;
  Done : Boolean;
begin
  sTR3 := '';
  Cnt := 0;
  Done := FALSE;

  for i := 1 to Length(sTR1) do
    begin
      cH := Copy(sTR1, i, 1);

      if cH = ',' then
        begin
          CommandList[Cnt] := sTR3;

          Done := TRUE;
          Cnt := Cnt + 1;
          startPoint := i + 1;
          sTR3 := '';
        end
      else sTR3 := sTR3 + cH;
    end;

  if not Done then CommandList[Cnt] := sTR3
  else
    begin
      sTR3 := '';

      for i := startPoint to Length(sTR1) do
        begin
          cH := Copy(sTR1, i, 1);
          sTR3 := sTR3 + cH;
        end;

      CommandList[Cnt] := sTR3;
    end;
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  ReadString := '';
  SensorBoardNum := '';
end;

procedure TForm1.ResizedForm(AForm : TForm);
begin
  AForm.Width := Trunc(AForm.Width * ScaleWidth);
  AForm.Height := Trunc(AForm.Height * ScaleHeight);
  AForm.Left := Trunc(AForm.Left * ScaleWidth);
  AForm.Top := Trunc(AForm.Top * ScaleHeight);
end;
procedure TForm1.ResizedLabel(ALabel : TLabel);
begin
  ALabel.Width := ALabel.Width * ScaleWidth;
  ALabel.Height := ALabel.Height * ScaleHeight;
  ALabel.Position.X := ALabel.Position.X * ScaleWidth;
  ALabel.Position.Y := ALabel.Position.Y * ScaleHeight;
end;
procedure TForm1.ResizedEdit(AEdit : TEdit);
begin
  AEdit.Width := AEdit.Width * ScaleWidth;
  AEdit.Height := AEdit.Height * ScaleHeight;
  AEdit.Position.X := AEdit.Position.X * ScaleWidth;
  AEdit.Position.Y := AEdit.Position.Y * ScaleHeight;
end;
procedure TForm1.ResizedBox(AComboBox : TComboBox);
begin
  AComboBox.Width := AComboBox.Width * ScaleWidth;
  AComboBox.Height := AComboBox.Height * ScaleHeight;
  AComboBox.Position.X := AComboBox.Position.X * ScaleWidth;
  AComboBox.Position.Y := AComboBox.Position.Y * ScaleHeight;
end;
procedure TForm1.ResizedRec(ARectangle : TRectangle);
begin
  ARectangle.Width := ARectangle.Width * ScaleWidth;
  ARectangle.Height := ARectangle.Height * ScaleHeight;
  ARectangle.Position.X := ARectangle.Position.X * ScaleWidth;
  ARectangle.Position.Y := ARectangle.Position.Y * ScaleHeight;
end;

end.
