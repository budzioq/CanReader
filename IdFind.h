//---------------------------------------------------------------------------

#ifndef IdFindH
#define IdFindH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TButton *Button1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
private:
String Id;	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
        String getId(){return Id;}
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
