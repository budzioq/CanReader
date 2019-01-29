//---------------------------------------------------------------------------

#ifndef CanH
#define CanH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include "CPort.hpp"
#include <Grids.hpp>
#include <CheckLst.hpp>
#include <Dialogs.hpp>
#include <OleServer.hpp>
#include <ValEdit.hpp>
#include <ComCtrls.hpp>
#include "vector.h"
#include "cstdio.h"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Widok1;
        TMenuItem *Znajd1;
        TMenuItem *Narzdzia1;
        TMenuItem *Modu1;
        TMenuItem *Oprogramie1;
        TMenuItem *Wyczy1;
        TMenuItem *N1;
        TMenuItem *Zapisz1;
        TMenuItem *Zapiszjako1;
        TMenuItem *N2;
        TMenuItem *Zakocz1;
        TMenuItem *N3;
        TComPort *ComPort1;
        TMenuItem *Menager1;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TMenuItem *PortCOM1;
        TMenuItem *Pocz1;
        TMenuItem *Rozcz1;
        TMenuItem *PrdkoCAN1;
        TMenuItem *Zmianalinii1;
        TComDataPacket *ComDataPacket1;
        TListView *MsgList;
        TListBox *SaveBox1;
        TMenuItem *Logi1;
        TSaveDialog *SaveDialog2;
        void __fastcall Otwrz1Click(TObject *Sender);
        void __fastcall Zapisz1Click(TObject *Sender);
        void __fastcall Zapiszjako1Click(TObject *Sender);
        void __fastcall Zakocz1Click(TObject *Sender);
        void __fastcall Wyczy1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall PortCOM1Click(TObject *Sender);
        void __fastcall Pocz1Click(TObject *Sender);
        void __fastcall Rozcz1Click(TObject *Sender);
        void __fastcall Menager1Click(TObject *Sender);
        void __fastcall ComDataPacket1Packet(TObject *Sender,
          const AnsiString Str);
        void __fastcall MsgListColumnClick(TObject *Sender,
          TListColumn *Column);
        void __fastcall Znajd1Click(TObject *Sender);
        void __fastcall PrdkoCAN1Click(TObject *Sender);
        void __fastcall Zmianalinii1Click(TObject *Sender);
        void __fastcall Oprogramie1Click(TObject *Sender);
        void __fastcall MsgListDblClick(TObject *Sender);
        void __fastcall Logi1Click(TObject *Sender);
private:
       	// User declarations
public:

		// User declarations
        __fastcall TForm1(TComponent* Owner);
        int  LogStart();
        void  LogStop(String Name);
        void ClearMainTab();

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
