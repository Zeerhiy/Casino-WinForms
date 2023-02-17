#include "CasinoMenu.h"

System::Void CasinoWinForms::CasinoMenu::backToTheGuestMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	GuestF^ form = gcnew GuestF();
	this->Hide();
	form->Show();
}
