unit Unit8_DateTime;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.ScrollBox, FMX.Objects,
  FMX.Memo, FMX.Controls.Presentation, FMX.StdCtrls, Winsoft.Android.UsbSer,
  Androidapi.JNIBridge, Winsoft.Android.Usb, FMX.ListBox, FMX.Memo.Types, FMX.Platform,
  Androidapi.JNI, Androidapi.JNI.Java.Net, Androidapi.JNI.JavaTypes, Androidapi.Helpers,
  Androidapi.JNI.App, Androidapi.JNI.Os, FMX.Helpers.Android, FMX.Edit, FMX.EditBox, FMX.SpinBox,
  FMX.DateTimeCtrls;

type
  TForm8 = class(TForm)
    DateEdit: TDateEdit;
    ServerPasswordEdit: TEdit;
    Label2: TLabel;
    Label3: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    ServerDateEdit: TLabel;
    ServerTimeEdit: TLabel;
    Rec1: TRectangle;
    Rec2: TRectangle;
    Rectangle1: TRectangle;
    Rectangle2: TRectangle;
    Rectangle3: TRectangle;
    Rectangle4: TRectangle;
    btn_back: TRectangle;
    Label1: TLabel;
    btn_home: TRectangle;
    Label10: TLabel;
    Btn_SVRead: TRectangle;
    Btn_SVSave: TRectangle;
    SecondSpinBox: TSpinBox;
    MinuteSpinBox: TSpinBox;
    HourSpinBox: TSpinBox;
    Label4: TLabel;
    Label8: TLabel;
    Label9: TLabel;
    DataReadTimer: TTimer;
    procedure btn_backClick(Sender: TObject);
    procedure btn_homeClick(Sender: TObject);
    procedure Btn_SVReadClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure Btn_SVSaveClick(Sender: TObject);

    procedure ResizedRec(ARectangle : TRectangle);
    procedure ResizedEdit(AEdit : TEdit);
    procedure ResizedLabel(ALabel : TLabel);
    procedure FormCreate(Sender: TObject);
    procedure ServerPasswordEditApplyStyleLookup(Sender: TObject);
    procedure DataReadTimerTimer(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form8: TForm8;

implementation

{$R *.fmx}

uses Unit1_Login, Unit3_System, Unit2_Main, Handler;

procedure TForm8.btn_backClick(Sender: TObject);
begin
  Form8.Close;
  Form3.Show;
end;

procedure TForm8.btn_homeClick(Sender: TObject);
begin
  Form8.Close;
  Form2.Show;
end;

procedure TForm8.Btn_SVReadClick(Sender: TObject);
begin
  if not (ServerPasswordEdit.Text = '1111111111') then
    begin
      ShowMessage('비밀번호가 틀립니다. 다시 입력하세요...');
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

  CaseNum := 10;
  cmd := '{"cmd":"r","type":"esp_dt"}';      // DateTime Read
  data := TEncoding.UTF8.GetBytes(cmd);
  UsbSerial.Write(data, 1000);
  Form1.AppendText('SEND : ' + cmd);

  DataReadTimer.Enabled := TRUE;
end;

procedure TForm8.Btn_SVSaveClick(Sender: TObject);
var
  sTR1, sTR2, sTR3, sTR4, sTR5, sTR6, sTR7 : String;
  i, j : Integer;
  LOC : Array[0..1] of Integer;
begin
  if not (ServerPasswordEdit.Text = '1111111111') then
    begin
      ShowMessage('비밀번호가 틀립니다. 다시 입력하세요...');
      exit;
    end;

  var cmd : String;
  var data : TArray<Byte>;

  CaseNum := 11;
  sTR1 := DateEdit.Text;

  j := 0;

  for i := 1 to Length(sTR1) do
    begin
      if Copy(sTR1, i, 1) = '/' then
        begin
          LOC[j] := i;
          j := j + 1;
        end;
    end;

  sTR2 := '20' + Copy(sTR1, 1, LOC[0] - 1);                // 20 + 25
  sTR3 := Copy(sTR1, LOC[0] + 1, LOC[1] - LOC[0] - 1);     // Month
  if Length(sTR3) = 1 then sTR3 := '0' + sTR3;

  sTR4 := Copy(sTR1, LOC[1] + 1, Length(sTR1) - LOC[1]);   // Date
  if Length(sTR4) = 1 then sTR4 := '0' + sTR4;

  sTR5 := HourSpinBox.Value.ToString;
  if Length(sTR5) = 1 then sTR5 := '0' + sTR5;

  sTR6 := MinuteSpinBox.Value.ToString;
  if Length(sTR6) = 1 then sTR6 := '0' + sTR6;

  sTR7 := SecondSpinBox.Value.ToString;
  if Length(sTR7) = 1 then sTR7 := '0' + sTR7;

  sTR7 := sTR2 + sTR3 + sTR4 + sTR5 + sTR6 + sTR7;
  sTR1 := ServerPasswordEdit.Text;

  cmd := '{"cmd":"w","pw":"' + sTR1 + '","datetime":"' + sTR7 + '"}';
  data := TEncoding.UTF8.GetBytes(cmd);
  UsbSerial.Write(data, 1000);
  Form1.AppendText('SEND : ' + cmd);

  DataReadTimer.Enabled := TRUE;
end;

procedure TForm8.DataReadTimerTimer(Sender: TObject);
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

procedure TForm8.FormCreate(Sender: TObject);
begin
  ScaleWidth := self.ClientWidth  /  411;
  ScaleHeight := self.ClientHeight  / 765;

  ResizedRec(btn_back);
  ResizedRec(btn_home);
  ResizedRec(Btn_SVRead);
  ResizedRec(Btn_SVSave);
  ResizedRec(Rec1);
  ResizedRec(Rec2);
  ResizedRec(Rectangle1);
  ResizedRec(Rectangle2);
  ResizedRec(Rectangle3);
  ResizedRec(Rectangle4);

  ResizedLabel(Label1);
  ResizedLabel(Label2);
  ResizedLabel(Label3);
  ResizedLabel(Label4);
  ResizedLabel(Label5);
  ResizedLabel(Label6);
  ResizedLabel(Label7);
  ResizedLabel(Label8);
  ResizedLabel(Label9);
  ResizedLabel(Label10);
  ResizedLabel(ServerDateEdit);
  ResizedLabel(ServerTimeEdit);

  DateEdit.Width := DateEdit.Width * ScaleWidth;
  DateEdit.Height := DateEdit.Height * ScaleHeight;
  DateEdit.Position.X := DateEdit.Position.X * ScaleWidth;
  DateEdit.Position.Y := DateEdit.Position.Y * ScaleHeight;

  HourSpinBox.Width := HourSpinBox.Width * ScaleWidth;
  HourSpinBox.Height := HourSpinBox.Height * ScaleHeight;
  HourSpinBox.Position.X := HourSpinBox.Position.X * ScaleWidth;
  HourSpinBox.Position.Y := HourSpinBox.Position.Y * ScaleHeight;

  MinuteSpinBox.Width := MinuteSpinBox.Width * ScaleWidth;
  MinuteSpinBox.Height := MinuteSpinBox.Height * ScaleHeight;
  MinuteSpinBox.Position.X := MinuteSpinBox.Position.X * ScaleWidth;
  MinuteSpinBox.Position.Y := MinuteSpinBox.Position.Y * ScaleHeight;

  SecondSpinBox.Width := SecondSpinBox.Width * ScaleWidth;
  SecondSpinBox.Height := SecondSpinBox.Height * ScaleHeight;
  SecondSpinBox.Position.X := SecondSpinBox.Position.X * ScaleWidth;
  SecondSpinBox.Position.Y := SecondSpinBox.Position.Y * ScaleHeight;

  ServerPasswordEdit.Width := ServerPasswordEdit.Width * ScaleWidth;
  ServerPasswordEdit.Height := ServerPasswordEdit.Height * ScaleHeight;
  ServerPasswordEdit.Position.X := ServerPasswordEdit.Position.X * ScaleWidth;
  ServerPasswordEdit.Position.Y := ServerPasswordEdit.Position.Y * ScaleHeight;
end;

procedure TForm8.FormShow(Sender: TObject);
begin
  HourSpinBox.Value := 0;
  MinuteSpinBox.Value := 0;
  SecondSpinBox.Value := 0;

  ServerDateEdit.Text := '';
  ServerTimeEdit.Text := '';
end;

procedure TForm8.ResizedLabel(ALabel : TLabel);
begin
  ALabel.Width := ALabel.Width * ScaleWidth;
  ALabel.Height := ALabel.Height * ScaleHeight;
  ALabel.Position.X := ALabel.Position.X * ScaleWidth;
  ALabel.Position.Y := ALabel.Position.Y * ScaleHeight;
end;
procedure TForm8.ResizedEdit(AEdit : TEdit);
begin
  AEdit.Width := AEdit.Width * ScaleWidth;
  AEdit.Height := AEdit.Height * ScaleHeight;
  AEdit.Position.X := AEdit.Position.X * ScaleWidth;
  AEdit.Position.Y := AEdit.Position.Y * ScaleHeight;
end;
procedure TForm8.ResizedRec(ARectangle : TRectangle);
begin
  ARectangle.Width := ARectangle.Width * ScaleWidth;
  ARectangle.Height := ARectangle.Height * ScaleHeight;
  ARectangle.Position.X := ARectangle.Position.X * ScaleWidth;
  ARectangle.Position.Y := ARectangle.Position.Y * ScaleHeight;
end;

procedure TForm8.ServerPasswordEditApplyStyleLookup(Sender: TObject);
begin
  EditSet(ServerPasswordEdit);
end;

end.
