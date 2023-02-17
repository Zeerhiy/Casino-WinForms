#pragma once
#include "GuestF.h"

namespace CasinoWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateGuestF
	/// </summary>
	public ref class CreateGuestF : public System::Windows::Forms::Form
	{
	public:
		CreateGuestF(void)
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
		~CreateGuestF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backToTheMainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^ Manual_button;

	private: System::Windows::Forms::Button^ Randomize_button;
	private: System::Windows::Forms::TextBox^ Name_TextBox;
	private: System::Windows::Forms::TextBox^ Age_TextBox;
	private: System::Windows::Forms::TextBox^ Cash_TextBox;
	private: System::Windows::Forms::Label^ Name_label;
	private: System::Windows::Forms::Label^ Age_label;
	private: System::Windows::Forms::Label^ Cash_label;
	private: System::Windows::Forms::GroupBox^ Randomize_groupBox;
	private: System::Windows::Forms::GroupBox^ Manual_groupBox;

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
			this->backToTheMainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Manual_button = (gcnew System::Windows::Forms::Button());
			this->Randomize_button = (gcnew System::Windows::Forms::Button());
			this->Name_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Age_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Cash_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Name_label = (gcnew System::Windows::Forms::Label());
			this->Age_label = (gcnew System::Windows::Forms::Label());
			this->Cash_label = (gcnew System::Windows::Forms::Label());
			this->Randomize_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Manual_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->Randomize_groupBox->SuspendLayout();
			this->Manual_groupBox->SuspendLayout();
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
				this->backToTheMainMenuToolStripMenuItem,
					this->exitProgramToolStripMenuItem
			});
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// backToTheMainMenuToolStripMenuItem
			// 
			this->backToTheMainMenuToolStripMenuItem->Name = L"backToTheMainMenuToolStripMenuItem";
			this->backToTheMainMenuToolStripMenuItem->Size = System::Drawing::Size(200, 22);
			this->backToTheMainMenuToolStripMenuItem->Text = L"Back  to the main menu";
			this->backToTheMainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateGuestF::backToTheMainMenuToolStripMenuItem_Click);
			// 
			// exitProgramToolStripMenuItem
			// 
			this->exitProgramToolStripMenuItem->Name = L"exitProgramToolStripMenuItem";
			this->exitProgramToolStripMenuItem->Size = System::Drawing::Size(200, 22);
			this->exitProgramToolStripMenuItem->Text = L"Exit the program";
			this->exitProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateGuestF::exitProgramToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->aboutToolStripMenuItem->Text = L"About...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateGuestF::aboutToolStripMenuItem_Click);
			// 
			// Manual_button
			// 
			this->Manual_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Manual_button->Location = System::Drawing::Point(129, 11);
			this->Manual_button->Name = L"Manual_button";
			this->Manual_button->Size = System::Drawing::Size(200, 50);
			this->Manual_button->TabIndex = 1;
			this->Manual_button->Text = L"Manual";
			this->Manual_button->UseVisualStyleBackColor = true;
			this->Manual_button->Click += gcnew System::EventHandler(this, &CreateGuestF::Manual_button_Click);
			// 
			// Randomize_button
			// 
			this->Randomize_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Randomize_button->Location = System::Drawing::Point(26, 18);
			this->Randomize_button->Name = L"Randomize_button";
			this->Randomize_button->Size = System::Drawing::Size(200, 50);
			this->Randomize_button->TabIndex = 2;
			this->Randomize_button->Text = L"Randomize";
			this->Randomize_button->UseVisualStyleBackColor = true;
			this->Randomize_button->Click += gcnew System::EventHandler(this, &CreateGuestF::Randomize_button_Click);
			// 
			// Name_TextBox
			// 
			this->Name_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name_TextBox->Location = System::Drawing::Point(129, 93);
			this->Name_TextBox->Name = L"Name_TextBox";
			this->Name_TextBox->Size = System::Drawing::Size(200, 31);
			this->Name_TextBox->TabIndex = 3;
			// 
			// Age_TextBox
			// 
			this->Age_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Age_TextBox->Location = System::Drawing::Point(129, 146);
			this->Age_TextBox->Name = L"Age_TextBox";
			this->Age_TextBox->Size = System::Drawing::Size(200, 31);
			this->Age_TextBox->TabIndex = 4;
			// 
			// Cash_TextBox
			// 
			this->Cash_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cash_TextBox->Location = System::Drawing::Point(129, 198);
			this->Cash_TextBox->Name = L"Cash_TextBox";
			this->Cash_TextBox->Size = System::Drawing::Size(200, 31);
			this->Cash_TextBox->TabIndex = 5;
			// 
			// Name_label
			// 
			this->Name_label->AutoSize = true;
			this->Name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name_label->Location = System::Drawing::Point(12, 97);
			this->Name_label->Name = L"Name_label";
			this->Name_label->Size = System::Drawing::Size(111, 24);
			this->Name_label->TabIndex = 6;
			this->Name_label->Text = L"Enter Name";
			// 
			// Age_label
			// 
			this->Age_label->AutoSize = true;
			this->Age_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Age_label->Location = System::Drawing::Point(12, 150);
			this->Age_label->Name = L"Age_label";
			this->Age_label->Size = System::Drawing::Size(95, 24);
			this->Age_label->TabIndex = 7;
			this->Age_label->Text = L"Enter Age";
			// 
			// Cash_label
			// 
			this->Cash_label->AutoSize = true;
			this->Cash_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cash_label->Location = System::Drawing::Point(12, 198);
			this->Cash_label->Name = L"Cash_label";
			this->Cash_label->Size = System::Drawing::Size(103, 24);
			this->Cash_label->TabIndex = 8;
			this->Cash_label->Text = L"Enter Cash";
			// 
			// Randomize_groupBox
			// 
			this->Randomize_groupBox->Controls->Add(this->Randomize_button);
			this->Randomize_groupBox->Location = System::Drawing::Point(112, 37);
			this->Randomize_groupBox->Name = L"Randomize_groupBox";
			this->Randomize_groupBox->Size = System::Drawing::Size(260, 76);
			this->Randomize_groupBox->TabIndex = 9;
			this->Randomize_groupBox->TabStop = false;
			this->Randomize_groupBox->Text = L"Create guest randomly";
			// 
			// Manual_groupBox
			// 
			this->Manual_groupBox->Controls->Add(this->Cash_label);
			this->Manual_groupBox->Controls->Add(this->Age_label);
			this->Manual_groupBox->Controls->Add(this->Name_label);
			this->Manual_groupBox->Controls->Add(this->Cash_TextBox);
			this->Manual_groupBox->Controls->Add(this->Age_TextBox);
			this->Manual_groupBox->Controls->Add(this->Name_TextBox);
			this->Manual_groupBox->Controls->Add(this->Manual_button);
			this->Manual_groupBox->Location = System::Drawing::Point(9, 112);
			this->Manual_groupBox->Name = L"Manual_groupBox";
			this->Manual_groupBox->Size = System::Drawing::Size(426, 247);
			this->Manual_groupBox->TabIndex = 10;
			this->Manual_groupBox->TabStop = false;
			this->Manual_groupBox->Text = L"Create guest manually";
			// 
			// CreateGuestF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->Manual_groupBox);
			this->Controls->Add(this->Randomize_groupBox);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"CreateGuestF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreateGuestMenu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Randomize_groupBox->ResumeLayout(false);
			this->Manual_groupBox->ResumeLayout(false);
			this->Manual_groupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { MessageBox::Show(this, "Casino WinForms version\nGIT: https://github.com/Zeerhiy\nE-MAIL: igressikk@gmail.com", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); }
	private: System::Void Manual_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }
	private: System::Void backToTheMainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Randomize_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
