//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmPrincipal.h"
#include "UFrmAlgoritmos.h"
#include "UFrmAutor.h";
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::EvAlgoritmosOnClick(TObject *Sender)
{
	new TFrmAlgoritmos(this);
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::EvSobreOnClick(TObject *Sender)
{
	new TFrmAutor(this);
}
//---------------------------------------------------------------------------

