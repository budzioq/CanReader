//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Can.h"
#include "Menager.h"
#include "vector.h"
#include "cstdio.h"
#include <Clipbrd.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int selectedM=0,selectedI=0;
String selM,selID;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button1Click(TObject *Sender)
{



try
{
  selectedI=ListBox1->ItemIndex;
  if (selectedI!=-1) {selID=ListBox1->Items->Strings[selectedI];}
  selectedM=ListBox2->ItemIndex;
  if (selectedM!=-1)selM=ListBox2->Items->Strings[selectedM];
}
catch (...)
{
 ShowMessage("Zaznacz wpis !");
}

if (selectedI!=-1 && selectedM!=-1)

        for (unsigned int i=0;i<Mng.size();i++)
        {
                if (Mng[i][0]==selID)
                {
                   for (unsigned int a=1;a<Mng[i].size();a++)
                    {
                    if (Mng[i][a]==selM)
                    {
                     Mng[i].erase(Mng[i].begin()+a);
                     ListBox2->Items->Delete(selectedM);
                     }

                }
        }//for
}//if
else if  (selectedI!=-1 && selectedM==-1)
{
          for (unsigned int i=0;i<Mng.size();i++)
        {
              if (Mng[i][0]==selID)
              {
              Mng.erase(Mng.begin()+i);
              ListBox1->Items->Delete(selectedI);
              ListBox2->Clear();
              }
        }      

}

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
 int index=0;
AnsiString test;

   for (unsigned int i=0;i<Mng.size();i++)
{

if (!Mng.empty())
 {

 index=ListBox1->Items->IndexOf(Mng[i][0]);
 if (index!=-1) {break;}
 else if (index==-1)

   {
   ListBox1->Items->Add(Mng[i][0]);
   }

 }
}




}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
Timer1->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ListBox1Click(TObject *Sender)
{
int nr;
String itIndex;
int temp;

nr=ListBox1->ItemIndex;
itIndex=ListBox1->Items->Strings[nr];

for (unsigned int i=0;i<Mng.size();i++)
{
 if (Mng[i][0]==itIndex)
 {
 ListBox2->Items->Clear();
        for (unsigned int a=1;a<Mng[i].size();a++)
        {

         ListBox2->Items->Add(Mng[i][a]);
        }

 }


}
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button3Click(TObject *Sender)
{
String toClipboard;


selectedI=ListBox1->ItemIndex;
  if (selectedI!=-1) {selID=ListBox1->Items->Strings[selectedI];}
  selectedM=ListBox2->ItemIndex;
  if (selectedM!=-1)selM=ListBox2->Items->Strings[selectedM];


toClipboard=selID + "  " + selM;

Clipboard()->SetTextBuf(toClipboard.c_str());

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
ListBox1->Clear();
ListBox2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
String &SaveId=selID;


 selectedI=ListBox1->ItemIndex;
  if (selectedI!=-1) {selID=ListBox1->Items->Strings[selectedI];}

  for (unsigned int i=0;i<Mng.size();i++)
{
 if (Mng[i][0]==selID)
 {
 ListBox3->Items->Add("ID: " + Mng[i][0]);
 //ListBox3->Items->Add("Description: "+ Mng[i][1]);
         for (unsigned int a=1;a<Mng[i].size();a++)
        {

         ListBox3->Items->Add(Mng[i][a]);
        }

 }
}
     SaveDialog1->FileName=SaveId;
 if (SaveDialog1->Execute())
     {
     try
     {
     
     ListBox3->Items->SaveToFile(SaveDialog1->FileName);

     }
     catch (...)
     {
     ShowMessage("Brak pliku");
     }
  }


}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
String Value;
int index1,index2;
Value=Edit1->Text;

index1=ListBox1->Items->IndexOf(Value);
index2=ListBox2->Items->IndexOf(Value);

if (index1!=-1)
{
        try
        {
        ListBox1->Selected[index1]=true;
        }
        catch (...) {ShowMessage("Nie znaleziono");}
}//if
else if (index2!=-1)
{
        try
        {
        ListBox2->Selected[index2]=true;
        }
        catch (...) {ShowMessage("Nie znaleziono");}
}//elseif
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit1KeyPress(TObject *Sender, char &Key)
{
 if (Key==VK_RETURN)
 {
 Button5Click(NULL);
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ListBox2DblClick(TObject *Sender)
{
    /*    SaveOp.clear();
   for (unsigned int i=0;i<Mng.size();i++)
{
  {
 SaveOp.push_back(Mng[i][0]);
         for (unsigned int a=1;a<Mng[i].size();a++)
        {

         SaveOp.push_back(Mng[i][a]);
        }


  selectedI=ListBox1->ItemIndex;
  if (selectedI!=-1) {selID=ListBox1->Items->Strings[selectedI];}
  selectedM=ListBox2->ItemIndex;
  if (selectedM!=-1)selM=ListBox2->Items->Strings[selectedM];

      */
}         
//---------------------------------------------------------------------------


