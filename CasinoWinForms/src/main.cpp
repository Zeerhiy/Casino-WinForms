#include "../headers/CasinoF.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CasinoWinForms::CasinoF form;
	Application::Run(% form);
	
}

