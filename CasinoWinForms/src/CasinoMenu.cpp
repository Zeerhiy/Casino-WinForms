#include "../headers/CasinoMenu.h"

extern Guest guest;

void CasinoWinForms::CasinoMenu::UpdateInfo()
{
	Cash_label1->Text = Convert::ToString(guest.GetGuestCash());
	Tokens_label1->Text = Convert::ToString(guest.GetGuestTokens());
}


System::Void CasinoWinForms::CasinoMenu::backToTheGuestMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	GuestF^ form = gcnew GuestF();
	this->Hide();
	form->Show();
}

System::Void CasinoWinForms::CasinoMenu::CasinoMenu_Load(System::Object^ sender, System::EventArgs^ e)
{

	UpdateInfo();
}

System::Void CasinoWinForms::CasinoMenu::CashToTokens_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	int temp_int = 0;
	for (unsigned i = 0; i < CashToTokens_textBox->TextLength; i++)
	{
		if (!isdigit(CashToTokens_textBox->Text[i]))
		{
			MessageBox::Show("Expression must be a natural number", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	}
	temp_int = Convert::ToInt32(CashToTokens_textBox->Text);
	if (temp_int > guest.GetGuestCash()) {
		MessageBox::Show("Expression must be less than or equal to your cash", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	guest.SetGuestCash(guest.GetGuestCash() - temp_int);
	guest.SetGuestTokens(guest.GetGuestTokens() + temp_int);

	UpdateInfo();
}

System::Void CasinoWinForms::CasinoMenu::TokensToCash_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	int temp_int = 0;
	for (unsigned i = 0; i < TokensToCash_textBox->TextLength; i++)
	{
		if (!isdigit(TokensToCash_textBox->Text[i]))
		{
			MessageBox::Show("Expression must be a natural number", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	}
	temp_int = Convert::ToInt32(TokensToCash_textBox->Text);
	if (temp_int > guest.GetGuestTokens()) {
		MessageBox::Show("Expression must be less than or equal to your cash", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	guest.SetGuestCash(guest.GetGuestCash() + temp_int);
	guest.SetGuestTokens(guest.GetGuestTokens() - temp_int);

	UpdateInfo();
}

System::Void CasinoWinForms::CasinoMenu::Bet_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	int winlot = rand() % 37;
	int temp_int = 0;
	for (unsigned i = 0; i < Bet_textBox->TextLength; i++)
	{
		if (!isdigit(Bet_textBox->Text[i]) || Bet_textBox->Text == "0")
		{
			MessageBox::Show("Expression must be a natural number", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	}
	temp_int = Convert::ToInt32(Bet_textBox->Text);
	if (temp_int > guest.GetGuestTokens()) {
		MessageBox::Show("Expression must be less than or equal to your tokens", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (winlot == 0)
	{
		WinningLot_label->Text = Convert::ToString(winlot);
		WinningLot_label->ForeColor = Color::ForestGreen;
		if (Green_radioButton->Checked)
		{
			guest.AddGuestTokens(temp_int * 16);
			UpdateInfo();
			MessageBox::Show("You won " + Convert::ToString(temp_int*16) + " TOKENS!!CONGRATZ", "GREEEEEEEEN", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			guest.SubGuestTokens(temp_int);
			UpdateInfo();
			MessageBox::Show("You lost :(", "Maybe try again?", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	else if (winlot % 2 == 1)
	{
		WinningLot_label->Text = Convert::ToString(winlot);
		WinningLot_label->ForeColor = Color::DarkRed;
		if (Red_radioButton->Checked)
		{
			guest.AddGuestTokens(temp_int * 2);
			UpdateInfo();
			MessageBox::Show("You won " + Convert::ToString(temp_int*2) + " tokens!", "Red", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			guest.SubGuestTokens(temp_int);
			UpdateInfo();
			MessageBox::Show("You lost :(", "Maybe try again?", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	else if (winlot % 2 == 0)
	{
		WinningLot_label->Text = Convert::ToString(winlot);
		WinningLot_label->ForeColor = Color::Black;
		if (Black_radioButton->Checked)
		{
			guest.AddGuestTokens(temp_int * 2);
			UpdateInfo();
			MessageBox::Show("You won " + Convert::ToString(temp_int*2) + " tokens!", "Black", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			guest.SubGuestTokens(temp_int);
			UpdateInfo();
			MessageBox::Show("You lost :(", "Maybe try again?", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

}
