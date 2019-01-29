object Form8: TForm8
  Left = 973
  Top = 253
  BorderIcons = [biSystemMenu]
  BorderStyle = bsToolWindow
  Caption = 'Nowe zdarzenie'
  ClientHeight = 57
  ClientWidth = 358
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object Edit1: TEdit
    Left = 8
    Top = 8
    Width = 337
    Height = 21
    TabOrder = 0
    Text = 'Nazwa zdarzenia'
    OnKeyPress = Edit1KeyPress
  end
  object Button1: TButton
    Left = 144
    Top = 32
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 64
    Top = 8
    Width = 241
    Height = 41
    Caption = 'Zako'#324'cz'
    TabOrder = 2
    Visible = False
    OnClick = Button2Click
  end
end
