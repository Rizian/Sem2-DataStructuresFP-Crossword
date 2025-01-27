//---------------------------------------------------------------------------

#ifndef WordleH
#define WordleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Colors.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Title;
	TButton *Q;
	TButton *W;
	TButton *E;
	TButton *R;
	TButton *T;
	TButton *Y;
	TButton *U;
	TButton *I;
	TButton *O;
	TButton *P;
	TButton *A;
	TButton *S;
	TButton *D;
	TButton *F;
	TButton *G;
	TButton *H;
	TButton *J;
	TButton *K;
	TButton *L;
	TButton *Z;
	TButton *X;
	TButton *C;
	TButton *V;
	TButton *B;
	TButton *N;
	TButton *M;
	TButton *Disp1;
	TButton *Disp2;
	TButton *Disp3;
	TButton *Disp4;
	TButton *Disp5;
	TButton *Del;
	TButton *Check;
	void __fastcall QClick(TObject *Sender);
	void __fastcall WClick(TObject *Sender);
	void __fastcall EClick(TObject *Sender);
	void __fastcall RClick(TObject *Sender);
	void __fastcall TClick(TObject *Sender);
	void __fastcall YClick(TObject *Sender);
	void __fastcall UClick(TObject *Sender);
	void __fastcall IClick(TObject *Sender);
	void __fastcall OClick(TObject *Sender);
	void __fastcall PClick(TObject *Sender);
	void __fastcall DelClick(TObject *Sender);
	void __fastcall AClick(TObject *Sender);
	void __fastcall SClick(TObject *Sender);
	void __fastcall DClick(TObject *Sender);
	void __fastcall FClick(TObject *Sender);
	void __fastcall GClick(TObject *Sender);
	void __fastcall HClick(TObject *Sender);
	void __fastcall JClick(TObject *Sender);
	void __fastcall KClick(TObject *Sender);
	void __fastcall LClick(TObject *Sender);
	void __fastcall ZClick(TObject *Sender);
	void __fastcall XClick(TObject *Sender);
	void __fastcall CClick(TObject *Sender);
	void __fastcall VClick(TObject *Sender);
	void __fastcall BClick(TObject *Sender);
	void __fastcall NClick(TObject *Sender);
	void __fastcall MClick(TObject *Sender);
	void __fastcall CheckClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
