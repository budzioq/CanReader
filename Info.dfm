object Form6: TForm6
  Left = 1009
  Top = 285
  BorderIcons = [biSystemMenu]
  BorderStyle = bsToolWindow
  Caption = 'O programie'
  ClientHeight = 255
  ClientWidth = 513
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 16
  object Informacje: TGroupBox
    Left = 0
    Top = 0
    Width = 513
    Height = 345
    Caption = 'Informacje'
    TabOrder = 0
    object Info: TMemo
      Left = 0
      Top = 24
      Width = 513
      Height = 233
      Color = clBtnFace
      Enabled = False
      Lines.Strings = (
        ''
        ''
        '                                     CanReader 2018 v1.0 Beta'
        ''
        
          '      Program umo'#380'liwia zczytywanie danych w pojazdach wyposa'#380'on' +
          'ych w sie'#263' CAN.'
        
          'Wsp'#243#322'dzia'#322'a z adapterami CAN->COM w kt'#243'rych przesy'#322'ane wiadomo'#347'c' +
          'i s'#261' w '
        
          'formacie <ID,x,x,x,...>. Zmiana pr'#281'dko'#347'ci transmisji realizowana' +
          ' jest przez wys'#322'anie '
        
          'wiadomo'#347'ci '#8222'CSR _[pr'#281'dko'#347#263']'#8221' i musi by'#263' obs'#322'ugiwana przez adapte' +
          'r. Sytuacja '
        
          'analogiczna wyst'#281'puje w przypadku zmiany linii transmisji, przy ' +
          'czym wiadomo'#347#263' ma '
        'format '#8222'CLR_[linia]'#8221'. '
        ''
        'Wersja rozwojowa'
        'Autor - Zbigniew  Buda '
        'budzioq@gmail.com')
      TabOrder = 0
      OnDblClick = InfoDblClick
    end
  end
end
