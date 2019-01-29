object Form2: TForm2
  Left = 499
  Top = 356
  BorderStyle = bsToolWindow
  Caption = 'Menager wiadomo'#347'ci'
  ClientHeight = 502
  ClientWidth = 787
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object ListBox1: TListBox
    Left = 0
    Top = 0
    Width = 209
    Height = 497
    Align = alCustom
    Color = clMenuText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindow
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemHeight = 13
    ParentFont = False
    TabOrder = 0
    OnClick = ListBox1Click
  end
  object Button1: TButton
    Left = 664
    Top = 8
    Width = 113
    Height = 49
    Caption = 'Usu'#324' wpis'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 664
    Top = 136
    Width = 113
    Height = 49
    Caption = 'Zapisz do txt'
    TabOrder = 2
    OnClick = Button2Click
  end
  object ListBox2: TListBox
    Left = 216
    Top = 0
    Width = 433
    Height = 497
    Color = clMenuText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindow
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemHeight = 13
    ParentFont = False
    TabOrder = 3
    OnDblClick = ListBox2DblClick
  end
  object Button3: TButton
    Left = 664
    Top = 72
    Width = 113
    Height = 49
    Caption = 'Kopiuj wartosc'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 664
    Top = 448
    Width = 113
    Height = 49
    Caption = 'Wyczy'#347#263
    TabOrder = 5
    OnClick = Button4Click
  end
  object ListBox3: TListBox
    Left = 16
    Top = 664
    Width = 57
    Height = 49
    ItemHeight = 13
    TabOrder = 6
    Visible = False
  end
  object Edit1: TEdit
    Left = 664
    Top = 256
    Width = 113
    Height = 21
    TabOrder = 7
    OnKeyPress = Edit1KeyPress
  end
  object Button5: TButton
    Left = 664
    Top = 304
    Width = 113
    Height = 33
    Caption = 'Znajd'#378
    TabOrder = 8
    OnClick = Button5Click
    OnEnter = Button5Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer1Timer
    Left = 704
    Top = 504
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'txt'
    Filter = 'Plik tekstowy|*.*'
    Left = 672
    Top = 504
  end
end
