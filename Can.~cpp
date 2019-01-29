//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//#pragma comment(lib, "libcpmt.lib")

#include "Can.h"
#include "Menager.h"
#include "IdFind.h"
#include "CanSpeedSelect.h"
#include "LineSelection.h"
#include "Info.h"
#include "AddDes.h"
#include "Logi.h"
#include "vector.h"
#include "cstdio.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CPort"
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString nazwaPliku=" ";
String MainTab[100][6];
AnsiString ComTemp=" ";
static vector<vector<String> >  MoV;
vector<String> Msg;
bool LogPause;

 //---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
LogPause=false;
ClearMainTab();


}
//---------------------------------------------------------------------------




void __fastcall TForm1::Otwrz1Click(TObject *Sender)
{
if (OpenDialog1->Execute())
{
try
{
   //MsgList->Items->LoadFromFile(OpenDialog1->FileName);
   nazwaPliku=OpenDialog1->FileName;
   }

   catch (...)
   {
   ShowMessage("Nie ma pliku");
   }
}
}
//---------------------------------------------------------------------------
void TForm1::ClearMainTab()
{
 for(int l=0;l<6;l++)
        {
                for (int i=0;i<100;i++)
                 {
                        if (l==3)
                        {
                        MainTab[i][3]="0";
                        }
                        else
                        {
                        MainTab[i][l]=" ";
                        }
                 }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zapisz1Click(TObject *Sender)
{
        
   MoV=Form2->GetV();
   SaveBox1->Clear();
 for (unsigned int i=0;i<MoV.size();i++)
{
         Form1->SaveBox1->Items->Add(" ID: " + MoV[i][0] + " " + MainTab[i][5]);
         for (unsigned int a=1;a<MoV[i].size();a++)
        {

         Form1->SaveBox1->Items->Add(MoV[i][a]);
        }
}



        if (nazwaPliku!=" ")
     {
       try
     {
     SaveBox1->Items->SaveToFile(nazwaPliku);
     }
     catch (...)
     {
     ShowMessage("Brak pliku");
     }
     }
     else
     {
          Form1->Zapiszjako1Click(MainMenu1);
     }


}
//---------------------------------------------------------------------------


void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
   MoV=Form2->GetV();
   SaveBox1->Clear();
 for (unsigned int i=0;i<MoV.size();i++)
{
         Form1->SaveBox1->Items->Add(" ID: " + MoV[i][0] + " " + MainTab[i][5]);
         for (unsigned int a=1;a<MoV[i].size();a++)
        {

         Form1->SaveBox1->Items->Add(MoV[i][a]);
        }
}


      if (SaveDialog1->Execute())
     {
     try
     {
     SaveBox1->Items->SaveToFile(SaveDialog1->FileName);
     nazwaPliku=SaveDialog1->FileName;
     }
     catch (...)
     {
     ShowMessage("Brak pliku");
     }
  }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{
if (Application->MessageBoxA("Czy napewno zamkn¹æ program ?","Zamykanie programu",MB_YESNO| MB_ICONQUESTION)==IDYES)
{
  Application->Terminate();
}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Wyczy1Click(TObject *Sender)
{
if (Application->MessageBoxA("Napewno wyczyœciæ pole ?","Czyszczenie okna",MB_YESNOCANCEL| MB_ICONQUESTION)==IDYES)
MsgList->Clear();
nazwaPliku=" ";
MoV.clear();
ClearMainTab();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
if (Application->MessageBoxA("Czy napewno zamkn¹æ program ?","Zamykanie programu",MB_YESNO| MB_ICONQUESTION)==IDNO)
{
  Action=caNone;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::PortCOM1Click(TObject *Sender)
{
           ComPort1->ShowSetupDialog();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pocz1Click(TObject *Sender)
{
  MsgList->Clear(); // czyszczenie okna
  //---------------------------------------------czyszczenie tablicy----------------------------------
ClearMainTab();
 // Tablica wyczyszczona !! --------------------------Czyszczenie wektora
MoV.clear();
Form2->ClearV();



 try
  {ComPort1->Open();}
 catch (...) {ShowMessage("Wybie¿ port COM !");}
 if (ComPort1->Connected==true)
 {
     Pocz1->Enabled=false;
     Rozcz1->Enabled=true;

    }
ComTemp=" ";
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Rozcz1Click(TObject *Sender)
{
ComPort1->Close();
if (ComPort1->Connected==false)
{
Pocz1->Enabled=true;
Rozcz1->Enabled=false;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Menager1Click(TObject *Sender)
{
Form2->ListBox1->Clear();
Form2->ListBox2->Clear();
Form2->Timer1->Enabled=true;
Form2->ShowModal();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::ComDataPacket1Packet(TObject *Sender,
      const AnsiString Str)
{

int obecny=0,pozycja=0,IdPos=0;
int kolumna=0,licznik=0;
static int Update=0;
String Id,Message,descr=" ";



if (!LogPause)
{


if (ComPort1->Connected)
{
ComTemp=Str;
IdPos=ComTemp.Pos(",");
Id=ComTemp.SubString(0,(IdPos-1));
Message=ComTemp.Delete(1,IdPos);


for (int i=0;i<100;i++)
  {

        if (MainTab[i][0]!=" ")
        {
                if (MainTab[i][0]==Id)
                {
                obecny=1;
                kolumna=i;
                licznik=StrToInt(MainTab[kolumna][3]);
                licznik++;
                MainTab[kolumna][3]=IntToStr(licznik);
                Update=1;
                break;
                }

        }
        else if (MainTab[i][0]==" ") {pozycja=i; break;}


   }//koniec for
  //---------------------------------------------wyspiuje po raz pierwszy w tabeli/dodaje pole-----------------------------------
        if (obecny==0)
        {
                if (MainTab[pozycja][0]==" ")
                {
                MainTab[pozycja][0]=Id;
                MainTab[pozycja][2]=MainTab[pozycja][1];
                MainTab[pozycja][1]=Message;
                MainTab[pozycja][4]=TimeToStr(Now());
                MsgList->Items->Add();
                MsgList->Items->Item[pozycja]->Caption=MainTab[pozycja][0];
                MsgList->Items->Item[pozycja]->SubItems->Add(MainTab[pozycja][1]);
                MsgList->Items->Item[pozycja]->SubItems->Add(MainTab[pozycja][2]);
                MsgList->Items->Item[pozycja]->SubItems->Add(MainTab[pozycja][3]);
                MsgList->Items->Item[pozycja]->SubItems->Add(MainTab[pozycja][4]);
                MsgList->Items->Item[pozycja]->SubItems->Add(MainTab[pozycja][5]);
                }
       }


 //---------------------------------------edytuje obecne pola tabeli----------------------------------------------------
       if (obecny==1 && MainTab[kolumna][1]!=Message)   //
       {
       MainTab[kolumna][3]=(String)licznik;
       MainTab[kolumna][2]=MainTab[kolumna][1];
       MainTab[kolumna][1]=Message;
       MainTab[kolumna][4]=TimeToStr(Now());
       Update=1;
       }
       if  (Update==1)    //--------------------------------edycja wpisow liveview-------------------------------------------------
       {
       MsgList->Items->Item[kolumna]->SubItems->Strings[0]=MainTab[kolumna][1];
       MsgList->Items->Item[kolumna]->SubItems->Strings[1]=MainTab[kolumna][2];
       MsgList->Items->Item[kolumna]->SubItems->Strings[2]=MainTab[kolumna][3];
       MsgList->Items->Item[kolumna]->SubItems->Strings[3]=MainTab[kolumna][4];
       MsgList->Items->Item[kolumna]->SubItems->Strings[4]=MainTab[kolumna][5];
       Update=0;
       }


// ---------------------------------------Czyszczenie vectora------------------------------------------
MoV.clear();
MoV.clear();
MoV=Form2->GetV();


 bool jest,IdOk;

 if (MoV.empty())
 {
        Msg.push_back(Id);
    
        Msg.push_back(Message);
        MoV.push_back(Msg);
 }
 else
 {
        for (unsigned int i=0;i<MoV.size();i++)
        {
                if (MoV[i][0]==Id )
                {    IdOk=true;
                        for (unsigned int a=1;a<MoV[i].size();a++)
                        {
                                 if (MoV[i][a]==Message){jest=true; break;}

                                else if (MoV[i][a]!=Message && a==(MoV[i].size()-1) && !jest)
                                {
                                MoV[i].push_back(Message);
                                }
                        }

                }



                else if (MoV[i][0]!=Id && i==(MoV.size()-1) && !IdOk)
                {
                Msg.clear();
                Msg.push_back(Id);

                Msg.push_back(Message);
                MoV.push_back(Msg);
                }


         }


// ---------------------------------------wyslanie referencji vectora do Menagera------------------------------------------


 }//if connected
 }
Form2->SendV(MoV);
}// logpause

}
//---------------------------------------------------------------------------






void __fastcall TForm1::MsgListColumnClick(TObject *Sender,
      TListColumn *Column)
{
static bool reverse=false;
MsgList->Tag = Column->Index;
MsgList->CustomSort(NULL,(long)reverse);
reverse=!reverse;

}
//---------------------------------------------------------------------------




void __fastcall TForm1::Znajd1Click(TObject *Sender)
{
String Id;
int index;

Form3->ShowModal();
Id=Form3->getId();
if (Id!=NULL)
{
for (int i=0;i<MsgList->Items->Count;i++)
{
 if (Id == (MsgList->Items->Item[i]->Caption)) {index=i;}
}//for
try
{
MsgList->Items->Item[index]->Selected=true;
}
catch (...) {ShowMessage("Brak Id");}
}


}
//---------------------------------------------------------------------------


void __fastcall TForm1::PrdkoCAN1Click(TObject *Sender)
{
int SpdInt;
String speed;


Form4->ShowModal();
SpdInt=Form4->getSpeed();

switch (SpdInt)
{
case 0:
speed="1M";
break;
case 1:
speed="500k" ;
break;
case 2:
speed="250k";
break;
case 3:
speed="200k";
break;
case 4:
speed="125k";
break;
case 5:
speed="100k";
break;
case 6:
speed="92k";
break;
case 7:
speed="80k";
break;
case 8:
speed="50k";
break;
case 9:
speed="40k";
break;
case 10:
speed="33k";
break;
case 11:
speed="31k";
break;case 12:
speed="20k";
break;case 13:
speed="10k";
break;case 14:
speed="5k";
break;
}


if (!ComPort1->Connected)
{
ComPort1->Open();
ComPort1->WriteStr("CSR_"+speed);
ComPort1->Close();
}
if (ComPort1->Connected)
{
ComPort1->WriteStr("CSR_"+speed);
}

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Zmianalinii1Click(TObject *Sender)
{int Line;
Form5->ShowModal();
Line=Form5->GetLine();
if (!ComPort1->Connected)
{
ComPort1->Open();
ComPort1->WriteStr("CLR_"+Line);
ComPort1->Close();
}
if (ComPort1->Connected)
{
ComPort1->WriteStr("CLR_"+Line);
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
Form6->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::MsgListDblClick(TObject *Sender)
{
String opis;
int index;

index=MsgList->ItemIndex;
Form7->ShowModal();
opis=Form7->getDes();
MainTab[index][5]=opis;
try
{
MsgList->Items->Item[index]->SubItems->Strings[4]=opis;
}
catch(...)
{
 ShowMessage("Wybierz Id ! ");
}


}
//---------------------------------------------------------------------------


void __fastcall TForm1::Logi1Click(TObject *Sender)
{
Form8->ShowModal();
}
//---------------------------------------------------------------------------
int TForm1::LogStart()
{
if (ComPort1->Connected==false)
{
MessageBoxA(NULL,"Port COM roz³¹czony","Port COM roz³¹czony",NULL);
return 1;
}
else if (ComPort1->Connected==true)
{
        LogPause=true;
   for(int l=0;l<5;l++)
        {
                for (int i=0;i<100;i++)
                 {
                        if (l==3)
                        {
                        MainTab[i][3]="0";
                        }
                        else
                        {
                        MainTab[i][l]=" ";
                        }
                 }
        }
       
        MoV.clear();
     LogPause=false;
}




 return 0;
}//function end
//------------------------------------------------------------------
void TForm1::LogStop(String Name)
{

        vector<vector<String> >  TempSave;
   SaveBox1->Clear();
    LogPause=true;
    TempSave=Form2->GetV();

   for (unsigned int i=0;i<MoV.size();i++)
   {
   SaveBox1->Items->Add("ID: "+ TempSave[i][0]);
 
        for (unsigned int j=1;j<MoV[i].size();j++)
        {
         SaveBox1->Items->Add(TempSave[i][j]);
        }

   }


   
     SaveDialog2->FileName=Name;
    if (SaveDialog2->Execute())
     {
     try
     {
     SaveBox1->Items->SaveToFile(SaveDialog2->FileName);
     }
     catch (...)
     {
     ShowMessage("Brak pliku");
     }
  }
  TempSave.clear();
  LogPause=false;

}//function end;
