//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CanSpeedSelect.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{

Spd=ComboBox1->ItemIndex;
Form4->Close();
}
//---------------------------------------------------------------------------
