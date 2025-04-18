program IOTGateway;

uses
  System.StartUpCopy,
  FMX.Forms,
  Unit1_Login in 'Unit1_Login.pas' {Form1},
  Unit2_Main in 'Unit2_Main.pas' {Form2},
  Unit3_System in 'Unit3_System.pas' {Form3},
  Unit4_Gateway in 'Unit4_Gateway.pas' {Form4},
  Handler in 'Handler.pas',
  Unit5_Network in 'Unit5_Network.pas' {Form5},
  Unit6_Server in 'Unit6_Server.pas' {Form6},
  Unit7_Chimney in 'Unit7_Chimney.pas' {Form7},
  Unit8_DateTime in 'Unit8_DateTime.pas' {Form8},
  Unit9_Board0 in 'Unit9_Board0.pas' {Form9},
  Unit10_BoardMM in 'Unit10_BoardMM.pas' {Form10},
  Unit11_BoardOpt in 'Unit11_BoardOpt.pas' {Form11};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TForm2, Form2);
  Application.CreateForm(TForm3, Form3);
  Application.CreateForm(TForm4, Form4);
  Application.CreateForm(TForm5, Form5);
  Application.CreateForm(TForm6, Form6);
  Application.CreateForm(TForm7, Form7);
  Application.CreateForm(TForm8, Form8);
  Application.CreateForm(TForm9, Form9);
  Application.CreateForm(TForm10, Form10);
  Application.CreateForm(TForm11, Form11);
  Application.Run;
end.
