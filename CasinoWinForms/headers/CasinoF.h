#pragma once

namespace CasinoWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CasinoF
	/// </summary>
	public ref class CasinoF : public System::Windows::Forms::Form
	{
	public:
		CasinoF(void)
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
		~CasinoF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Play_button;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ StartMenu_label;
	private: System::Windows::Forms::Button^ Exit_button;
	private: System::Windows::Forms::Button^ button1;

	protected:

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
			this->Play_button = (gcnew System::Windows::Forms::Button());
			this->StartMenu_label = (gcnew System::Windows::Forms::Label());
			this->Exit_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Play_button
			// 
			this->Play_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Play_button->Location = System::Drawing::Point(150, 300);
			this->Play_button->Name = L"Play_button";
			this->Play_button->Size = System::Drawing::Size(200, 50);
			this->Play_button->TabIndex = 0;
			this->Play_button->Text = L"PLAY";
			this->Play_button->UseVisualStyleBackColor = true;
			this->Play_button->Click += gcnew System::EventHandler(this, &CasinoF::Play_button_Click);
			// 
			// StartMenu_label
			// 
			this->StartMenu_label->AutoSize = true;
			this->StartMenu_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StartMenu_label->ForeColor = System::Drawing::Color::White;
			this->StartMenu_label->Location = System::Drawing::Point(111, 125);
			this->StartMenu_label->Name = L"StartMenu_label";
			this->StartMenu_label->Size = System::Drawing::Size(278, 73);
			this->StartMenu_label->TabIndex = 1;
			this->StartMenu_label->Text = L"CASINO";
			// 
			// Exit_button
			// 
			this->Exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit_button->Location = System::Drawing::Point(150, 368);
			this->Exit_button->Name = L"Exit_button";
			this->Exit_button->Size = System::Drawing::Size(200, 50);
			this->Exit_button->TabIndex = 2;
			this->Exit_button->Text = L"EXIT";
			this->Exit_button->UseVisualStyleBackColor = true;
			this->Exit_button->Click += gcnew System::EventHandler(this, &CasinoF::Exit_button_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(452, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 20);
			this->button1->TabIndex = 3;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CasinoF::button1_Click);
			// 
			// CasinoF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Exit_button);
			this->Controls->Add(this->StartMenu_label);
			this->Controls->Add(this->Play_button);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CasinoF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Casino";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Play_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void Exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
