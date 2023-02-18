#include "../headers/CasinoMenu.h"

extern Guest guest;

System::Void CasinoWinForms::CasinoMenu::backToTheGuestMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	GuestF^ form = gcnew GuestF();
	this->Hide();
	form->Show();
}

System::Void CasinoWinForms::CasinoMenu::CasinoMenu_Load(System::Object^ sender, System::EventArgs^ e)
{
	////BMP INIT//
	//Bitmap^ bmp = gcnew Bitmap(450, 350);
	//Graphics^ g = Graphics::FromImage(bmp); 
	//roulette_pictureBox->Image = bmp; 
	//Bitmap^ image1; 
	//image1 = gcnew Bitmap("pic.bmp");
	//roulette_pictureBox->Image = image1;

	Cash_label1->Text = Convert::ToString(guest.GetGuestCash());
	Tokens_label1->Text = Convert::ToString(guest.GetGuestTokens());


}

System::Void CasinoWinForms::CasinoMenu::CashToTokens_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	int temp_int = 0;
	for (unsigned i = 0; i < CashToTokens_textBox->TextLength; i++)
	{
		if (!isdigit(CashToTokens_textBox->Text[i]))
		{
			MessageBox::Show("Expression must be a natural number", "Warning",MessageBoxButtons::OK,MessageBoxIcon::Warning);
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

	Cash_label1->Text = Convert::ToString(guest.GetGuestCash());
	Tokens_label1->Text = Convert::ToString(guest.GetGuestTokens());
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

	Cash_label1->Text = Convert::ToString(guest.GetGuestCash());
	Tokens_label1->Text = Convert::ToString(guest.GetGuestTokens());
}
