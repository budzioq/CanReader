//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "IdFind.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{

Id=Edit1->Text;
Form3->Close();


}
//---------------------------------------------------------------------------
void __fastcall TForm3::Edit1KeyPress(TObject *Sender, char &Key)
{
 if (Key==VK_RETURN)
 {
  Button1Click(NULL);
 }
}
//---------------------------------------------------------------------------


