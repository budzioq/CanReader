//---------------------------------------------------------------------------

#ifndef CanSpeedSelectH
#define CanSpeedSelectH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TComboBox *ComboBox1;
        TButton *Button1;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
int Spd;
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
        int getSpeed() {return Spd;}
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
