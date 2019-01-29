object Form4: TForm4
  Left = 1190
  Top = 278
  BorderIcons = []
  BorderStyle = bsToolWindow
  Caption = 'Pr'#281'dko'#347#263' CAN '
  ClientHeight = 53
  ClientWidth = 277
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
    Left = 16
    Top = 8
    Width = 145
    Height = 21
    ItemHeight = 13
    TabOrder = 0
    Text = 'Wybierz pr'#281'dko'#347#263' '
    Items.Strings = (
      '1Mb/s'
      '500kB/s'
      '250kB/s'
      '200kB/s'
      '125kB/s'
      '100kB/s'
      '92kB/s'
      '80kB/s'
      '50kB/s'
      '40kB/s'
      '33kB/s'
      '31kB/s'
      '20kB/s'
      '10kB/s'
      '5kB/s')
  end
  object Button1: TButton
    Left = 184
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Ok'
    TabOrder = 1
    OnClick = Button1Click
  end
end
