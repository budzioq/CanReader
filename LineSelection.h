//---------------------------------------------------------------------------

#ifndef LineSelectionH
#define LineSelectionH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
        TComboBox *ComboBox1;
        TButton *Button1;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
int Line;
public:		// User declarations
        __fastcall TForm5(TComponent* Owner);
        int GetLine() {return Line;}
};      
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
