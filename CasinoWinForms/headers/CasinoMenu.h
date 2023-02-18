#pragma once
#include "CasinoF.h"
#include "CreateGuestF.h"
#include "Funcs.h"

namespace CasinoWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CasinoMenu
	/// </summary>
	public ref class CasinoMenu : public System::Windows::Forms::Form
	{
	public:
		CasinoMenu(void)
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
		~CasinoMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backToTheGuestMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitTheProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ Info_groupBox;
	private: System::Windows::Forms::Label^ Cash_label2;
	private: System::Windows::Forms::Label^ Tokens_label1;
	private: System::Windows::Forms::Label^ Cash_label1;
	private: System::Windows::Forms::Label^ Tokens_label;
	private: System::Windows::Forms::Label^ Cash_label;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ TokensToCash_textBox;
	private: System::Windows::Forms::TextBox^ CashToTokens_textBox;
	private: System::Windows::Forms::Button^ TokensToCash_button;
	private: System::Windows::Forms::Button^ CashToTokens_button;
	private: System::Windows::Forms::Label^ TokensToCash_label;
	private: System::Windows::Forms::Label^ CashToTokens_label;
	private: System::Windows::Forms::GroupBox^ Roulette_groupBox;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backToTheGuestMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitTheProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Info_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Cash_label2 = (gcnew System::Windows::Forms::Label());
			this->Tokens_label1 = (gcnew System::Windows::Forms::Label());
			this->Cash_label1 = (gcnew System::Windows::Forms::Label());
			this->Tokens_label = (gcnew System::Windows::Forms::Label());
			this->Cash_label = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TokensToCash_textBox = (gcnew System::Windows::Forms::TextBox());
			this->CashToTokens_textBox = (gcnew System::Windows::Forms::TextBox());
			this->TokensToCash_button = (gcnew System::Windows::Forms::Button());
			this->CashToTokens_button = (gcnew System::Windows::Forms::Button());
			this->TokensToCash_label = (gcnew System::Windows::Forms::Label());
			this->CashToTokens_label = (gcnew System::Windows::Forms::Label());
			this->Roulette_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->Info_groupBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
				this->backToTheGuestMenuToolStripMenuItem,
					this->exitTheProgramToolStripMenuItem
			});
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// backToTheGuestMenuToolStripMenuItem
			// 
			this->backToTheGuestMenuToolStripMenuItem->Name = L"backToTheGuestMenuToolStripMenuItem";
			this->backToTheGuestMenuToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->backToTheGuestMenuToolStripMenuItem->Text = L"Back to the guest menu";
			this->backToTheGuestMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &CasinoMenu::backToTheGuestMenuToolStripMenuItem_Click);
			// 
			// exitTheProgramToolStripMenuItem
			// 
			this->exitTheProgramToolStripMenuItem->Name = L"exitTheProgramToolStripMenuItem";
			this->exitTheProgramToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->exitTheProgramToolStripMenuItem->Text = L"Exit the program";
			this->exitTheProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &CasinoMenu::exitTheProgramToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &CasinoMenu::aboutToolStripMenuItem_Click);
			// 
			// Info_groupBox
			// 
			this->Info_groupBox->Controls->Add(this->Cash_label2);
			this->Info_groupBox->Controls->Add(this->Tokens_label1);
			this->Info_groupBox->Controls->Add(this->Cash_label1);
			this->Info_groupBox->Controls->Add(this->Tokens_label);
			this->Info_groupBox->Controls->Add(this->Cash_label);
			this->Info_groupBox->Location = System::Drawing::Point(22, 39);
			this->Info_groupBox->Name = L"Info_groupBox";
			this->Info_groupBox->Size = System::Drawing::Size(449, 95);
			this->Info_groupBox->TabIndex = 1;
			this->Info_groupBox->TabStop = false;
			this->Info_groupBox->Text = L"Info";
			// 
			// Cash_label2
			// 
			this->Cash_label2->AutoSize = true;
			this->Cash_label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cash_label2->Location = System::Drawing::Point(119, 37);
			this->Cash_label2->Name = L"Cash_label2";
			this->Cash_label2->Size = System::Drawing::Size(19, 20);
			this->Cash_label2->TabIndex = 4;
			this->Cash_label2->Text = L"$";
			this->Cash_label2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Tokens_label1
			// 
			this->Tokens_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Tokens_label1->Location = System::Drawing::Point(277, 36);
			this->Tokens_label1->Name = L"Tokens_label1";
			this->Tokens_label1->Size = System::Drawing::Size(118, 20);
			this->Tokens_label1->TabIndex = 3;
			this->Tokens_label1->Text = L"0";
			this->Tokens_label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Cash_label1
			// 
			this->Cash_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cash_label1->Location = System::Drawing::Point(6, 36);
			this->Cash_label1->Name = L"Cash_label1";
			this->Cash_label1->Size = System::Drawing::Size(118, 20);
			this->Cash_label1->TabIndex = 2;
			this->Cash_label1->Text = L"0";
			this->Cash_label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Tokens_label
			// 
			this->Tokens_label->AutoSize = true;
			this->Tokens_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Tokens_label->Location = System::Drawing::Point(328, 16);
			this->Tokens_label->Name = L"Tokens_label";
			this->Tokens_label->Size = System::Drawing::Size(67, 20);
			this->Tokens_label->TabIndex = 1;
			this->Tokens_label->Text = L"Tokens";
			// 
			// Cash_label
			// 
			this->Cash_label->AutoSize = true;
			this->Cash_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cash_label->Location = System::Drawing::Point(86, 16);
			this->Cash_label->Name = L"Cash_label";
			this->Cash_label->Size = System::Drawing::Size(50, 20);
			this->Cash_label->TabIndex = 0;
			this->Cash_label->Text = L"Cash";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->TokensToCash_textBox);
			this->groupBox1->Controls->Add(this->CashToTokens_textBox);
			this->groupBox1->Controls->Add(this->TokensToCash_button);
			this->groupBox1->Controls->Add(this->CashToTokens_button);
			this->groupBox1->Controls->Add(this->TokensToCash_label);
			this->groupBox1->Controls->Add(this->CashToTokens_label);
			this->groupBox1->Location = System::Drawing::Point(22, 147);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(449, 128);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Exchanger";
			// 
			// TokensToCash_textBox
			// 
			this->TokensToCash_textBox->Location = System::Drawing::Point(178, 81);
			this->TokensToCash_textBox->Name = L"TokensToCash_textBox";
			this->TokensToCash_textBox->Size = System::Drawing::Size(137, 20);
			this->TokensToCash_textBox->TabIndex = 5;
			this->TokensToCash_textBox->Text = L"0";
			// 
			// CashToTokens_textBox
			// 
			this->CashToTokens_textBox->Location = System::Drawing::Point(178, 34);
			this->CashToTokens_textBox->Name = L"CashToTokens_textBox";
			this->CashToTokens_textBox->Size = System::Drawing::Size(137, 20);
			this->CashToTokens_textBox->TabIndex = 4;
			this->CashToTokens_textBox->Text = L"0";
			// 
			// TokensToCash_button
			// 
			this->TokensToCash_button->Location = System::Drawing::Point(336, 76);
			this->TokensToCash_button->Name = L"TokensToCash_button";
			this->TokensToCash_button->Size = System::Drawing::Size(107, 29);
			this->TokensToCash_button->TabIndex = 3;
			this->TokensToCash_button->Text = L"Exchange";
			this->TokensToCash_button->UseVisualStyleBackColor = true;
			this->TokensToCash_button->Click += gcnew System::EventHandler(this, &CasinoMenu::TokensToCash_button_Click);
			// 
			// CashToTokens_button
			// 
			this->CashToTokens_button->Location = System::Drawing::Point(336, 29);
			this->CashToTokens_button->Name = L"CashToTokens_button";
			this->CashToTokens_button->Size = System::Drawing::Size(107, 29);
			this->CashToTokens_button->TabIndex = 2;
			this->CashToTokens_button->Text = L"Exchange";
			this->CashToTokens_button->UseVisualStyleBackColor = true;
			this->CashToTokens_button->Click += gcnew System::EventHandler(this, &CasinoMenu::CashToTokens_button_Click);
			// 
			// TokensToCash_label
			// 
			this->TokensToCash_label->AutoSize = true;
			this->TokensToCash_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TokensToCash_label->Location = System::Drawing::Point(41, 81);
			this->TokensToCash_label->Name = L"TokensToCash_label";
			this->TokensToCash_label->Size = System::Drawing::Size(131, 20);
			this->TokensToCash_label->TabIndex = 1;
			this->TokensToCash_label->Text = L"Tokens to cash";
			// 
			// CashToTokens_label
			// 
			this->CashToTokens_label->AutoSize = true;
			this->CashToTokens_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CashToTokens_label->Location = System::Drawing::Point(41, 34);
			this->CashToTokens_label->Name = L"CashToTokens_label";
			this->CashToTokens_label->Size = System::Drawing::Size(130, 20);
			this->CashToTokens_label->TabIndex = 0;
			this->CashToTokens_label->Text = L"Cash to tokens";
			// 
			// Roulette_groupBox
			// 
			this->Roulette_groupBox->BackColor = System::Drawing::SystemColors::Control;
			this->Roulette_groupBox->Location = System::Drawing::Point(22, 286);
			this->Roulette_groupBox->Name = L"Roulette_groupBox";
			this->Roulette_groupBox->Size = System::Drawing::Size(448, 168);
			this->Roulette_groupBox->TabIndex = 3;
			this->Roulette_groupBox->TabStop = false;
			this->Roulette_groupBox->Text = L"Roulette";
			// 
			// CasinoMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->Roulette_groupBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Info_groupBox);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"CasinoMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CasinoMenu";
			this->Load += gcnew System::EventHandler(this, &CasinoMenu::CasinoMenu_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Info_groupBox->ResumeLayout(false);
			this->Info_groupBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {MessageBox::Show(this, "Casino WinForms version\nGIT: https://github.com/Zeerhiy\nE-MAIL: igressikk@gmail.com", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);}
private: System::Void exitTheProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {Application::Exit();}
private: System::Void backToTheGuestMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CasinoMenu_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void CashToTokens_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TokensToCash_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
