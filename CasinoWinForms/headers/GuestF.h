#pragma once
#include "CasinoMenu.h"
#include "Funcs.h"

namespace CasinoWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GuestF
	/// </summary>
	public ref class GuestF : public System::Windows::Forms::Form
	{
	public:
		GuestF(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GuestF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToTheCreateGuestMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitTheProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^ CheckInfo_button;
	private: System::Windows::Forms::Button^ GoCasino_button;

	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToTheCreateGuestMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitTheProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CheckInfo_button = (gcnew System::Windows::Forms::Button());
			this->GoCasino_button = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exitToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(484, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exitToTheCreateGuestMenuToolStripMenuItem,
					this->exitTheProgramToolStripMenuItem
			});
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// exitToTheCreateGuestMenuToolStripMenuItem
			// 
			this->exitToTheCreateGuestMenuToolStripMenuItem->Name = L"exitToTheCreateGuestMenuToolStripMenuItem";
			this->exitToTheCreateGuestMenuToolStripMenuItem->Size = System::Drawing::Size(234, 22);
			this->exitToTheCreateGuestMenuToolStripMenuItem->Text = L"Back to the create guest menu";
			this->exitToTheCreateGuestMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &GuestF::exitToTheCreateGuestMenuToolStripMenuItem_Click);
			// 
			// exitTheProgramToolStripMenuItem
			// 
			this->exitTheProgramToolStripMenuItem->Name = L"exitTheProgramToolStripMenuItem";
			this->exitTheProgramToolStripMenuItem->Size = System::Drawing::Size(234, 22);
			this->exitTheProgramToolStripMenuItem->Text = L"Exit the program";
			this->exitTheProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &GuestF::exitTheProgramToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->aboutToolStripMenuItem->Text = L"About...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &GuestF::aboutToolStripMenuItem_Click);
			// 
			// CheckInfo_button
			// 
			this->CheckInfo_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CheckInfo_button->Location = System::Drawing::Point(115, 134);
			this->CheckInfo_button->Name = L"CheckInfo_button";
			this->CheckInfo_button->Size = System::Drawing::Size(268, 50);
			this->CheckInfo_button->TabIndex = 3;
			this->CheckInfo_button->Text = L"Check guest status\r\n";
			this->CheckInfo_button->UseVisualStyleBackColor = true;
			this->CheckInfo_button->Click += gcnew System::EventHandler(this, &GuestF::CheckInfo_button_Click);
			// 
			// GoCasino_button
			// 
			this->GoCasino_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GoCasino_button->Location = System::Drawing::Point(115, 236);
			this->GoCasino_button->Name = L"GoCasino_button";
			this->GoCasino_button->Size = System::Drawing::Size(268, 50);
			this->GoCasino_button->TabIndex = 4;
			this->GoCasino_button->Text = L"Go to the casino";
			this->GoCasino_button->UseVisualStyleBackColor = true;
			this->GoCasino_button->Click += gcnew System::EventHandler(this, &GuestF::GoCasino_button_Click);
			// 
			// GuestF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->GoCasino_button);
			this->Controls->Add(this->CheckInfo_button);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"GuestF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GuestMenu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { MessageBox::Show(this, "Casino WinForms version\nGIT: https://github.com/Zeerhiy\nE-MAIL: igressikk@gmail.com", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); }
	private: System::Void GoCasino_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitTheProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }
	private: System::Void exitToTheCreateGuestMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CheckInfo_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
