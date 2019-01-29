//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddDes.h"
#include "Can.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
 Des=Edit1->Text;
 Form7->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Edit1KeyPress(TObject *Sender, char &Key)
{
 if (Key==VK_RETURN)
 {
 Button1Click(NULL);
}
}
//---------------------------------------------------------------------------
