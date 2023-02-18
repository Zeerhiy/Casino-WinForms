#include "../headers/CreateGuestF.h"
#include "../headers/Funcs.h"

Guest guest;

System::Void CasinoWinForms::CreateGuestF::Manual_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string t_name;
	int t_age;
	int t_cash;
	if (Name_TextBox->Text != "") {
		Convert_String_to_string(Name_TextBox->Text, t_name);
	}
	else {
		MessageBox::Show("Empty name. Try again", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (Age_TextBox->Text != "" && Convert::ToInt32(Age_TextBox->Text) >= 14 && Convert::ToInt32(Age_TextBox->Text) <= 80) {
		t_age = Convert::ToInt32(Age_TextBox->Text);
	}
	else {
		MessageBox::Show("Wrong Age. Try again (Example 14 - 80)\nNecessarily enter a natural number", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (Cash_TextBox->Text != "" && Convert::ToInt32(Cash_TextBox->Text) > 0 && Convert::ToInt32(Cash_TextBox->Text) <= 999'999) {
		t_cash = Convert::ToInt32(Cash_TextBox->Text);
	}
	else {
		MessageBox::Show("Incorrect money entry (Example 0 - 999 999)\nNecessarily enter a natural number", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	guest.SetGuestName(t_name);
	guest.SetGuestAge(t_age);
	guest.SetGuestCash(t_cash);

	GuestF^ form = gcnew GuestF();
	this->Hide();
	form->Show();
	
}

System::Void CasinoWinForms::CreateGuestF::Randomize_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string t_name;
	int t_age;
	int t_cash;
	srand(static_cast<unsigned int>(time(NULL)));
	t_age = (rand() % 66) + 14;
	t_cash = rand() % 1000;
	int a = rand() % 5;
	switch (a)
	{
	case 0:
		guest.SetGuestName("Mostavchuk Petro");
		break;
	case 1:
		guest.SetGuestName("Billy Herrington");
		break;
	case 2:
		guest.SetGuestName("Volodymyr Zelenskyy");
		break;
	case 3:
		guest.SetGuestName("Joe Biden");
		break;
	case 4:
		guest.SetGuestName("Lionel Messi");
		break;
	}

	guest.SetGuestAge(t_age);
	guest.SetGuestCash(t_cash);

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


