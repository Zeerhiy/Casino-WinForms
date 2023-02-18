#include "../headers/GuestF.h"

extern Guest guest;

System::Void CasinoWinForms::GuestF::GoCasino_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (guest.GetGuestAge() < 18) {
		if (MessageBox::Show("You are still too young to gamble. Are you sure you want to continue?", "Warning", MessageBoxButtons::YesNo) != System::Windows::Forms::DialogResult::No) {
			CasinoMenu^ form = gcnew CasinoMenu();
			this->Hide();
			form->Show();
		}
		else return;
	}
	else {
		CasinoMenu^ form = gcnew CasinoMenu();
		this->Hide();
		form->Show();
	}
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
	MessageBox::Show(Convert::ToString("Age of guest - " + guest.GetGuestAge()), "Age info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	MessageBox::Show(Convert::ToString("Cash guest - " + guest.GetGuestCash()), "Cash info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	MessageBox::Show(Convert::ToString("Tokens guest - " + guest.GetGuestTokens()), "Cash info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
}
