object Form1: TForm1
  Left = 382
  Top = 288
  Width = 1305
  Height = 669
  Caption = 'CanReader 2018 by Z.Buda'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object MsgList: TListView
    Left = 0
    Top = 0
    Width = 1289
    Height = 610
    Align = alClient
    Color = clMenuText
    Columns = <
      item
        Caption = 'ID'
        Width = 75
      end
      item
        Caption = 'Wiadomo'#347#263
        Width = 300
      end
      item
        Caption = 'Poprzednia wiadomo'#347#263
        Width = 300
      end
      item
        Caption = 'Licznik'
        Width = 200
      end
      item
        Caption = 'Czas'
        Width = 150
      end
      item
        Caption = 'Opis'
        Width = 150
      end>
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindow
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    ViewStyle = vsReport
    OnColumnClick = MsgListColumnClick
    OnDblClick = MsgListDblClick
  end
  object SaveBox1: TListBox
    Left = 1256
    Top = 584
    Width = 121
    Height = 97
    Color = clInfoBk
    ItemHeight = 13
    TabOrder = 1
    Visible = False
  end
  object MainMenu1: TMainMenu
    Left = 1224
    Top = 56
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Wyczy1: TMenuItem
        Caption = '&Wyczy'#347#263
        OnClick = Wyczy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Zapisz1: TMenuItem
        Caption = '&Zapisz'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Zapisz &jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Za&ko'#324'cz'
        OnClick = Zakocz1Click
      end
    end
    object Widok1: TMenuItem
      Caption = '&Widok'
      object Menager1: TMenuItem
        Caption = 'Menager wiadomo'#347'ci'
        OnClick = Menager1Click
      end
    end
    object Narzdzia1: TMenuItem
      Caption = '&Narz'#281'dzia'
      object PortCOM1: TMenuItem
        Caption = 'Port COM'
        OnClick = PortCOM1Click
      end
      object Pocz1: TMenuItem
        Caption = 'Po'#322#261'cz'
        OnClick = Pocz1Click
      end
      object Rozcz1: TMenuItem
        Caption = 'Roz'#322#261'cz'
        Enabled = False
        OnClick = Rozcz1Click
      end
    end
    object Modu1: TMenuItem
      Caption = '&Modu'#322
      object PrdkoCAN1: TMenuItem
        Caption = 'Pr'#281'dko'#347#263' CAN '
        OnClick = PrdkoCAN1Click
      end
      object Zmianalinii1: TMenuItem
        Caption = 'Zmiana linii '
        OnClick = Zmianalinii1Click
      end
    end
    object Logi1: TMenuItem
      Caption = 'Logi'
      OnClick = Logi1Click
    end
    object Znajd1: TMenuItem
      Caption = '&Znajd'#378' Id'
      OnClick = Znajd1Click
    end
    object Oprogramie1: TMenuItem
      Caption = '&O programie'
      OnClick = Oprogramie1Click
    end
  end
  object ComPort1: TComPort
    BaudRate = br115200
    Port = 'COM5'
    Parity.Bits = prNone
    StopBits = sbOneStopBit
    DataBits = dbEight
    Events = [evRxChar, evTxEmpty, evRxFlag, evRing, evBreak, evCTS, evDSR, evError, evRLSD, evRx80Full]
    FlowControl.OutCTSFlow = False
    FlowControl.OutDSRFlow = False
    FlowControl.ControlDTR = dtrEnable
    FlowControl.ControlRTS = rtsEnable
    FlowControl.XonXoffOut = False
    FlowControl.XonXoffIn = False
    Timeouts.ReadInterval = 100
    Timeouts.WriteTotalConstant = 0
    Left = 1192
    Top = 56
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Plik tekstowy|*.txt|Wszystkie pliki|*.*'
    Left = 1224
    Top = 16
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = '.txt'
    Filter = 'Plik tekstowy|*.txt|Wszystkie pliki|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 1192
    Top = 16
  end
  object ComDataPacket1: TComDataPacket
    ComPort = ComPort1
    StartString = '<'
    StopString = '>'
    OnPacket = ComDataPacket1Packet
    Left = 1256
    Top = 16
  end
  object SaveDialog2: TSaveDialog
    DefaultExt = '.txt'
    Filter = 'Plik tekstowy|*.txt'
    Left = 1256
    Top = 56
  end
end
