#include "GuestF.h"

System::Void CasinoWinForms::GuestF::GoCasino_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	CasinoMenu^ form = gcnew CasinoMenu();
	this->Hide();
	form->Show();
}

System::Void CasinoWinForms::GuestF::exitToTheCreateGuestMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	CreateGuestF^ form = gcnew CreateGuestF();
	this->Hide();
	form->Show();
}
