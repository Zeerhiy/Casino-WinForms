#include "CreateGuestF.h"

System::Void CasinoWinForms::CreateGuestF::Manual_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	GuestF^ form = gcnew GuestF();
	this->Hide();
	form->Show();
}

System::Void CasinoWinForms::CreateGuestF::backToTheMainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	CasinoF^ form = gcnew CasinoF();
	this->Hide();
	form->Show();
}

System::Void CasinoWinForms::CreateGuestF::Randomize_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	GuestF^ form = gcnew GuestF();
	this->Hide();
	form->Show();
}
