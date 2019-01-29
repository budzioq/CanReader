object Form7: TForm7
  Left = 842
  Top = 382
  BorderIcons = [biSystemMenu]
  BorderStyle = bsToolWindow
  Caption = 'Dodaj Opis'
  ClientHeight = 68
  ClientWidth = 303
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
    Left = 8
    Top = 8
    Width = 281
    Height = 21
    TabOrder = 0
    Text = 'Dodaj Opis'
    OnKeyPress = Edit1KeyPress
  end
  object Button1: TButton
    Left = 112
    Top = 32
    Width = 75
    Height = 25
    Caption = 'Ok'
    TabOrder = 1
    OnClick = Button1Click
  end
end
