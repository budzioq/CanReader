object Form5: TForm5
  Left = 765
  Top = 372
  BorderStyle = bsToolWindow
  Caption = 'Wyb'#243'r lini'
  ClientHeight = 77
  ClientWidth = 283
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ComboBox1: TComboBox
    Left = 24
    Top = 24
    Width = 145
    Height = 21
    ItemHeight = 13
    TabOrder = 0
    Text = 'Wybierz linie'
    Items.Strings = (
      'Linia 1'
      'Linia 2'
      'Linia 3')
  end
  object Button1: TButton
    Left = 184
    Top = 24
    Width = 75
    Height = 25
    Caption = 'Ok'
    TabOrder = 1
    OnClick = Button1Click
  end
end
