#include "../headers/CasinoF.h"
#include "../headers/CreateGuestF.h"
#include "../headers/Funcs.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CasinoWinForms::CasinoF form;
	Application::Run(% form);


}

System::Void CasinoWinForms::CasinoF::Play_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	CreateGuestF^ form = gcnew CreateGuestF();
	this->Hide();
	form->Show();
}
