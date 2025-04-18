unit Unit11_BoardOpt;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.ScrollBox, FMX.Objects,
  FMX.Memo, FMX.Controls.Presentation, FMX.StdCtrls, Winsoft.Android.UsbSer,
  Androidapi.JNIBridge, Winsoft.Android.Usb, FMX.ListBox, FMX.Memo.Types, FMX.Platform,
  Androidapi.JNI, Androidapi.JNI.Java.Net, Androidapi.JNI.JavaTypes, Androidapi.Helpers,
  Androidapi.JNI.App, Androidapi.JNI.Os, FMX.Helpers.Android, FMX.Edit;
type
  TForm11 = class(TForm)
    a_ch: TComboBox;
    SensorCodeEdit: TEdit;
    SensorInstallNoEdit: TEdit;
    SensorCodeCBox: TComboBox;
    SensorStatusCBox: TComboBox;
    SensorItemCBox: TComboBox;
    btn_read: TRectangle;
    btn_save: TRectangle;
    ChimneyProEdit4: TEdit;
    ChimneyProEdit1: TEdit;
    ChimneyProEdit2: TEdit;
    ChimneyProEdit3: TEdit;
    Label10: TLabel;
    Label11: TLabel;
    Label12: TLabel;
    Label13: TLabel;
    Label14: TLabel;
    Label15: TLabel;
    Label16: TLabel;
    Label17: TLabel;
    Label18: TLabel;
    Label19: TLabel;
    Label20: TLabel;
    Label21: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    Label8: TLabel;
    Label9: TLabel;
    Line1: TLine;
    Rec1: TRectangle;
    Rec2: TRectangle;
    Rectangle10: TRectangle;
    Rectangle11: TRectangle;
    Rectangle12: TRectangle;
    Rectangle13: TRectangle;
    Rectangle6: TRectangle;
    Rectangle7: TRectangle;
    Rectangle8: TRectangle;
    Rectangle9: TRectangle;
    ChimneyProCBox1: TComboBox;
    ChimneyProCBox2: TComboBox;
    ChimneyProCBox3: TComboBox;
    ChimneyProCBox4: TComboBox;
    ChimneyUseCBox1: TComboBox;
    ChimneyUseCBox2: TComboBox;
    ChimneyUseCBox3: TComboBox;
    ChimneyUseCBox4: TComboBox;
    StyleBook1: TStyleBook;
    btn_back: TRectangle;
    Label1: TLabel;
    btn_home: TRectangle;
    SensorMinEdit: TEdit;
    SensorRefEdit: TEdit;
    SensorMaxEdit: TEdit;
    SensorRangeEdit: TEdit;
    BoardNumLabel: TLabel;
    DataReadTimer: TTimer;
    SensorPWEdit: TEdit;
    procedure btn_backClick(Sender: TObject);
    procedure btn_homeClick(Sender: TObject);
    procedure btn_readClick(Sender: TObject);
    procedure btn_saveClick(Sender: TObject);

    procedure ResizedRec(ARectangle : TRectangle);
    procedure ResizedEdit(AEdit : TEdit);
    procedure ResizedLabel(ALabel : TLabel);
    procedure ResizedBox(AComboBox : TComboBox);
    procedure FormCreate(Sender: TObject);
    procedure a_chChange(Sender: TObject);
    procedure SensorItemCBoxChange(Sender: TObject);
    procedure SensorStatusCBoxChange(Sender: TObject);
    procedure SensorCodeCBoxChange(Sender: TObject);
    procedure SensorCodeEditApplyStyleLookup(Sender: TObject);
    procedure SensorInstallNoEditApplyStyleLookup(Sender: TObject);
    procedure ChimneyUseCBox1Change(Sender: TObject);
    procedure ChimneyUseCBox2Change(Sender: TObject);
    procedure ChimneyUseCBox3Change(Sender: TObject);
    procedure ChimneyUseCBox4Change(Sender: TObject);
    procedure ChimneyProCBox1Change(Sender: TObject);
    procedure ChimneyProCBox2Change(Sender: TObject);
    procedure ChimneyProCBox3Change(Sender: TObject);
    procedure ChimneyProCBox4Change(Sender: TObject);
    procedure ChimneyProEdit1ApplyStyleLookup(Sender: TObject);
    procedure ChimneyProEdit2ApplyStyleLookup(Sender: TObject);
    procedure ChimneyProEdit3ApplyStyleLookup(Sender: TObject);
    procedure ChimneyProEdit4ApplyStyleLookup(Sender: TObject);
    procedure SensorPWEditApplyStyleLookup(Sender: TObject);
    procedure DataReadTimerTimer(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form11: TForm11;

implementation

{$R *.fmx}

uses Unit1_Login, Unit2_Main, Unit9_Board0, Handler;

procedure TForm11.a_chChange(Sender: TObject);
begin
  BoxSet2(a_ch);
end;

procedure TForm11.btn_backClick(Sender: TObject);
begin
  Form11.Close;
  Form9.Show;
end;

procedure TForm11.btn_homeClick(Sender: TObject);
begin
  Form11.Close;
  Form2.Show;
end;


procedure TForm11.btn_readClick(Sender: TObject);
var
  sTR1, sTR2 : String;
begin
  if a_ch.ItemIndex = -1 then
    begin
      ShowMessage('채널을 선택하세요...');
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
  except
    ShowMessage('연결된 USB 가 없습니다...');
    exit;
  end;

  var cmd : String;
  var data : TArray<Byte>;

  UsbSerial.Open(TRUE);
  UsbSerial.BaudRate := 115200;
  UsbSerial.Parity := TParity.None;
  UsbSerial.FlowControl := TFlowControl.Off;
  UsbSerial.DataBits := TDataBits._8;
  UsbSerial.StopBits := TStopBits._1;

  sTR1 := SensorBoardNum;
  sTR2 := (a_ch.ItemIndex).ToString;

  CaseNum := 14;
  cmd := '{"cmd":"r","s_bd":"' + sTR1 + '","type":"adc' + sTR2 + '"}';
  data := TEncoding.UTF8.GetBytes(cmd);
  UsbSerial.Write(data, 1000);
  Form1.AppendText('SEND : ' + cmd);

  DataReadTimer.Enabled := TRUE;
end;

procedure TForm11.btn_saveClick(Sender: TObject);
var
  sTR1, sTR2, sTR3, sTR4, sTR5, sTR6, sTR7, sTR8, sTR9, sTR10, sTR11, sTR12, sTR13,
  sTR14, sTR15, sTR16, sTR17, sTR18, sTR19: String;
begin
  if a_ch.ItemIndex = -1 then
    begin
      ShowMessage('채널을 선택하세요...');
      exit;
    end;

  if (SensorCodeCBox.ItemIndex = 1) or (SensorCodeCBox.ItemIndex = 2) or (SensorCodeCBox.ItemIndex = 3) then
    begin
      if SensorCodeEdit.Text = '' then
        begin
          ShowMessage('코드값을 입력하세요...');
          exit;
        end;

      if SensorInstallNoEdit.Text = '' then
        begin
          ShowMessage('시설번호를 입력하세요...');
          exit;
        end;
    end;

  if not (SensorPWEdit.Text = '1111111111') then
    begin
      ShowMessage('비밀번호가 틀립니다. 다시 입력하세요...');
      exit;
    end;

  var cmd : String;
  var data : TArray<Byte>;

  sTR1 := SensorBoardNum;
  sTR2 := (a_ch.ItemIndex).ToString;


  if Form11.SensorItemCBox.ItemIndex = 0 then sTR1 := 'null';
  if Form11.SensorItemCBox.ItemIndex = 1 then sTR1 := 'A';
  if Form11.SensorItemCBox.ItemIndex = 2 then sTR1 := 'a';
  if Form11.SensorItemCBox.ItemIndex = 3 then sTR1 := 'b';
  if Form11.SensorItemCBox.ItemIndex = 4 then sTR1 := 'c';
  if Form11.SensorItemCBox.ItemIndex = 5 then sTR1 := 'd';
  if Form11.SensorItemCBox.ItemIndex = 6 then sTR1 := 'e';
  if Form11.SensorItemCBox.ItemIndex = 7 then sTR1 := 'f';
  if Form11.SensorItemCBox.ItemIndex = 8 then sTR1 := 'D';
  if Form11.SensorItemCBox.ItemIndex = 9 then sTR1 := 'd';
  if Form11.SensorItemCBox.ItemIndex = 10 then sTR1 := 'H';
  if Form11.SensorItemCBox.ItemIndex = 11 then sTR1 := 'h';
  if Form11.SensorItemCBox.ItemIndex = 12 then sTR1 := 'T';
  if Form11.SensorItemCBox.ItemIndex = 13 then sTR1 := 't';

  if Form11.SensorStatusCBox.ItemIndex = 2 then sTR2 := 'null';
  if Form11.SensorStatusCBox.ItemIndex = 0 then sTR2 := 'use';
  if Form11.SensorStatusCBox.ItemIndex = 1 then sTR2 := 'chk';

  if Form11.SensorCodeCBox.ItemIndex = 0 then sTR3 := 'null';
  if Form11.SensorCodeCBox.ItemIndex = 1 then sTR3 := 'E' + Form11.SensorCodeEdit.Text;
  if Form11.SensorCodeCBox.ItemIndex = 2 then sTR3 := 'P' + Form11.SensorCodeEdit.Text;
  if Form11.SensorCodeCBox.ItemIndex = 3 then sTR3 := 'F' + Form11.SensorCodeEdit.Text;

  sTR4 := Form11.SensorInstallNoEdit.Text;
  sTR5 := Form11.SensorMinEdit.Text;
  sTR6 := Form11.SensorRefEdit.Text;
  sTR7 := Form11.SensorMaxEdit.Text;
  sTR8 := Form11.SensorRangeEdit.Text;

  if Form11.ChimneyUseCBox1.ItemIndex = 0 then sTR9 := 'u';
  if Form11.ChimneyUseCBox1.ItemIndex = 1 then sTR9 := 'n';
  if Form11.ChimneyUseCBox2.ItemIndex = 0 then sTR10 := 'u';
  if Form11.ChimneyUseCBox2.ItemIndex = 1 then sTR10 := 'n';
  if Form11.ChimneyUseCBox3.ItemIndex = 0 then sTR11 := 'u';
  if Form11.ChimneyUseCBox3.ItemIndex = 1 then sTR11 := 'n';
  if Form11.ChimneyUseCBox4.ItemIndex = 0 then sTR12 := 'u';
  if Form11.ChimneyUseCBox4.ItemIndex = 1 then sTR12 := 'n';

  if Form11.ChimneyProCBox1.ItemIndex = 0 then sTR13 := 'N';
  if Form11.ChimneyProCBox1.ItemIndex = 1 then sTR13 := 'P' + Form11.ChimneyProEdit1.Text;
  if Form11.ChimneyProCBox1.ItemIndex = 2 then sTR13 := 'F' + Form11.ChimneyProEdit1.Text;
;
  if Form11.ChimneyProCBox2.ItemIndex = 0 then sTR14 := 'N';
  if Form11.ChimneyProCBox2.ItemIndex = 1 then sTR14 := 'P' + Form11.ChimneyProEdit2.Text;
  if Form11.ChimneyProCBox2.ItemIndex = 2 then sTR14 := 'F' + Form11.ChimneyProEdit2.Text;

  if Form11.ChimneyProCBox3.ItemIndex = 0 then sTR15 := 'N';
  if Form11.ChimneyProCBox3.ItemIndex = 1 then sTR15 := 'P' + Form11.ChimneyProEdit3.Text;
  if Form11.ChimneyProCBox3.ItemIndex = 2 then sTR15 := 'F' + Form11.ChimneyProEdit3.Text;

  if Form11.ChimneyProCBox4.ItemIndex = 0 then sTR16 := 'N';
  if Form11.ChimneyProCBox4.ItemIndex = 1 then sTR16 := 'P' + Form11.ChimneyProEdit4.Text;
  if Form11.ChimneyProCBox4.ItemIndex = 2 then sTR16 := 'F' + Form11.ChimneyProEdit4.Text;

  sTR17 := SensorPWEdit.Text;
  sTR18 := SensorBoardNum;
  sTR19 := (a_ch.ItemIndex).ToString;

  CaseNum := 15;
  cmd := '{"cmd":"w","s_bd":"'+sTR18+'","a_ch":"'+sTR19+'","a_faci":"'+sTR3+'","ssc1":"'+sTR13+'","ssc2":"'+sTR14+'","ssc3":"'+
         sTR15+'","ssc4":"'+sTR16+'","a_type":"'+sTR1+'","a_sts":"'+sTR2+'","a_min":"'+sTR5+'","a_ref":"'+sTR6+'","a_max":"'+
         sTR7+'","a_opt":"'+sTR8+'","a_faciN":"'+sTR4+'","ssu1":"'+sTR9+'","ssu2":"'+sTR10+'","ssu3":"'+
         sTR11+'","ssu4":"'+sTR12+'","pw":"'+sTR17+'"}';
  data := TEncoding.UTF8.GetBytes(cmd);
  UsbSerial.Write(data, 1000);
  Form1.AppendText('SEND : ' + cmd);

  DataReadTimer.Enabled := TRUE;
end;

procedure TForm11.ChimneyProCBox1Change(Sender: TObject);
begin
  BoxSet(ChimneyProCBox1);
end;

procedure TForm11.ChimneyProCBox2Change(Sender: TObject);
begin
  BoxSet(ChimneyProCBox2);
end;

procedure TForm11.ChimneyProCBox3Change(Sender: TObject);
begin
  BoxSet(ChimneyProCBox3);
end;

procedure TForm11.ChimneyProCBox4Change(Sender: TObject);
begin
  BoxSet(ChimneyProCBox4);
end;

procedure TForm11.ChimneyProEdit1ApplyStyleLookup(Sender: TObject);
begin
  EditSet(ChimneyProEdit1);
end;

procedure TForm11.ChimneyProEdit2ApplyStyleLookup(Sender: TObject);
begin
  EditSet(ChimneyProEdit2);
end;

procedure TForm11.ChimneyProEdit3ApplyStyleLookup(Sender: TObject);
begin
  EditSet(ChimneyProEdit3);
end;

procedure TForm11.ChimneyProEdit4ApplyStyleLookup(Sender: TObject);
begin
  EditSet(ChimneyProEdit4);
end;

procedure TForm11.ChimneyUseCBox1Change(Sender: TObject);
begin
  BoxSet(ChimneyUseCBox1);
end;

procedure TForm11.ChimneyUseCBox2Change(Sender: TObject);
begin
  BoxSet(ChimneyUseCBox2);
end;

procedure TForm11.ChimneyUseCBox3Change(Sender: TObject);
begin
  BoxSet(ChimneyUseCBox3);
end;

procedure TForm11.ChimneyUseCBox4Change(Sender: TObject);
begin
  BoxSet(ChimneyUseCBox4);
end;

procedure TForm11.DataReadTimerTimer(Sender: TObject);
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
      Form1.AppendText('RECV : ' + sTR1);
      Form1.AnalyzingMessage(sTR1);
      DataReadTimer.Enabled := FALSE;
    end;
end;

procedure TForm11.FormCreate(Sender: TObject);
var
  I : Integer;
  aLabel: TLabel;
begin
  ScaleWidth := self.ClientWidth  /  411;
  ScaleHeight := self.ClientHeight  / 765;
  for i := 1 to 21 do
  begin
    aLabel := TLabel(FindComponent('Label' + IntToStr(i)));
    if Assigned(aLabel) then ResizedLabel(aLabel);
  end;
  ResizedLabel(BoardNumLabel);

  ResizedRec(btn_back);
  ResizedRec(btn_home);
  ResizedRec(btn_read);
  ResizedRec(btn_save);
  ResizedRec(Rec1);
  ResizedRec(Rec2);
  ResizedRec(Rectangle10);
  ResizedRec(Rectangle9);
  ResizedRec(Rectangle8);
  ResizedRec(Rectangle7);
  ResizedRec(Rectangle6);
  ResizedRec(Rectangle11);
  ResizedRec(Rectangle12);
  ResizedRec(Rectangle13);

  ResizedBox(a_ch);
  ResizedBox(ChimneyProCBox1);
  ResizedBox(ChimneyProCBox2);
  ResizedBox(ChimneyProCBox3);
  ResizedBox(ChimneyProCBox4);
  ResizedBox(ChimneyUseCBox1);
  ResizedBox(ChimneyUseCBox2);
  ResizedBox(ChimneyUseCBox3);
  ResizedBox(ChimneyUseCBox4);
  ResizedBox(SensorCodeCBox);
  ResizedBox(SensorItemCBox);
  ResizedBox(SensorStatusCBox);

  ResizedEdit(ChimneyProEdit1);
  ResizedEdit(ChimneyProEdit2);
  ResizedEdit(ChimneyProEdit3);
  ResizedEdit(ChimneyProEdit4);
  ResizedEdit(SensorCodeEdit);
  ResizedEdit(SensorInstallNoEdit);
  ResizedEdit(SensorMaxEdit);
  ResizedEdit(SensorMinEdit);
  ResizedEdit(SensorPWEdit);
  ResizedEdit(SensorRangeEdit);
  ResizedEdit(SensorRefEdit);

  Line1.Width := Line1.Width * ScaleWidth;
  Line1.Height := Line1.Height * ScaleHeight;
  Line1.Position.X := Line1.Position.X * ScaleWidth;
  Line1.Position.Y := Line1.Position.Y * ScaleHeight;
end;

procedure TForm11.FormShow(Sender: TObject);
begin
  a_ch.ItemIndex := -1;
  SensorItemCBox.ItemIndex := -1;
  SensorStatusCBox.ItemIndex := -1;
  SensorCodeCBox.ItemIndex := -1;
  ChimneyUseCBox1.ItemIndex := -1;
  ChimneyUseCBox2.ItemIndex := -1;
  ChimneyUseCBox3.ItemIndex := -1;
  ChimneyUseCBox4.ItemIndex := -1;
  ChimneyProCBox1.ItemIndex := -1;
  ChimneyProCBox2.ItemIndex := -1;
  ChimneyProCBox3.ItemIndex := -1;
  ChimneyProCBox4.ItemIndex := -1;

  SensorMinEdit.Text := '';
  SensorRefEdit.Text := '';
  SensorMaxEdit.Text := '';
  SensorRangeEdit.Text := '';
  SensorCodeEdit.Text := '';
  SensorInstallNoEdit.Text := '';
  ChimneyProEdit1.Text := '';
  ChimneyProEdit2.Text := '';
  ChimneyProEdit3.Text := '';
  ChimneyProEdit4.Text := '';
end;

procedure TForm11.ResizedLabel(ALabel : TLabel);
begin
  ALabel.Width := ALabel.Width * ScaleWidth;
  ALabel.Height := ALabel.Height * ScaleHeight;
  ALabel.Position.X := ALabel.Position.X * ScaleWidth;
  ALabel.Position.Y := ALabel.Position.Y * ScaleHeight;
end;
procedure TForm11.ResizedEdit(AEdit : TEdit);
begin
  AEdit.Width := AEdit.Width * ScaleWidth;
  AEdit.Height := AEdit.Height * ScaleHeight;
  AEdit.Position.X := AEdit.Position.X * ScaleWidth;
  AEdit.Position.Y := AEdit.Position.Y * ScaleHeight;
end;
procedure TForm11.ResizedBox(AComboBox : TComboBox);
begin
  AComboBox.Width := AComboBox.Width * ScaleWidth;
  AComboBox.Height := AComboBox.Height * ScaleHeight;
  AComboBox.Position.X := AComboBox.Position.X * ScaleWidth;
  AComboBox.Position.Y := AComboBox.Position.Y * ScaleHeight;
end;
procedure TForm11.ResizedRec(ARectangle : TRectangle);
begin
  ARectangle.Width := ARectangle.Width * ScaleWidth;
  ARectangle.Height := ARectangle.Height * ScaleHeight;
  ARectangle.Position.X := ARectangle.Position.X * ScaleWidth;
  ARectangle.Position.Y := ARectangle.Position.Y * ScaleHeight;
end;
procedure TForm11.SensorCodeCBoxChange(Sender: TObject);
begin
  BoxSet2(SensorCodeCBox);
end;

procedure TForm11.SensorCodeEditApplyStyleLookup(Sender: TObject);
begin
  EditSet(SensorCodeEdit);
end;

procedure TForm11.SensorInstallNoEditApplyStyleLookup(Sender: TObject);
begin
  EditSet(SensorInstallNoEdit);
end;

procedure TForm11.SensorItemCBoxChange(Sender: TObject);
begin
  BoxSet2(SensorItemCBox);
end;

procedure TForm11.SensorPWEditApplyStyleLookup(Sender: TObject);
begin
  EditSet(SensorPWEdit);
end;

procedure TForm11.SensorStatusCBoxChange(Sender: TObject);
begin
  BoxSet(SensorStatusCBox);
end;

end.
