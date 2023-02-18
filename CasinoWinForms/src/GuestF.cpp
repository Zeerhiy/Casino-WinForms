#include "../headers/GuestF.h"

extern Guest guest;

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

System::Void CasinoWinForms::GuestF::CheckInfo_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show(Convert_string_to_String("Name of guest - " + guest.GetGuestName()),"Name info",MessageBoxButtons::OK,MessageBoxIcon::Information);
	MessageBox::Show(Convert::ToString(guest.GetGuestAge()), "Age info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	MessageBox::Show(Convert::ToString(guest.GetGuestCash()), "Cash info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
}
