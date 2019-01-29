//---------------------------------------------------------------------------

#ifndef MenagerH
#define MenagerH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "vector.h"
#include "cstdio.h"
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>

//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBox1;
        TButton *Button1;
        TButton *Button2;
        TListBox *ListBox2;
        TTimer *Timer1;
        TButton *Button3;
        TButton *Button4;
        TListBox *ListBox3;
        TSaveDialog *SaveDialog1;
        TEdit *Edit1;
        TButton *Button5;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall ListBox1Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
        void __fastcall ListBox2DblClick(TObject *Sender);

private:    // User declarations
vector<vector<String> > Mng;
vector<String> SaveOp;
public:
        	// User declarations
        __fastcall TForm2(TComponent* Owner);
        vector<vector<String> > & GetV(){ return Mng;}
        void SendV(vector<vector<String> > & _Mng) {Mng=_Mng;}
        void ClearV(){Mng.clear();}
        vector<String> SaveLine() {return SaveOp;}
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
