object Form3: TForm3
  Left = 1230
  Top = 269
  BorderIcons = []
  BorderStyle = bsToolWindow
  Caption = 'Podaj Id'
  ClientHeight = 82
  ClientWidth = 248
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Edit1: TEdit
    Left = 32
    Top = 8
    Width = 185
    Height = 21
    TabOrder = 0
    OnKeyPress = Edit1KeyPress
  end
  object Button1: TButton
    Left = 88
    Top = 40
    Width = 75
    Height = 33
    Caption = 'Ok'
    TabOrder = 1
    OnClick = Button1Click
    OnEnter = Button1Click
  end
end
