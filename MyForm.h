#pragma once
#include "MyForm1.h"
#include "MyForm2.h"

namespace RPGameForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ playButton;
	protected:
	private: System::Windows::Forms::Button^ playerOptionsButton;
	private: System::Windows::Forms::Button^ quitButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttoninfo;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->playButton = (gcnew System::Windows::Forms::Button());
			this->playerOptionsButton = (gcnew System::Windows::Forms::Button());
			this->quitButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttoninfo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// playButton
			// 
			this->playButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playButton.BackgroundImage")));
			this->playButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->playButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playButton->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->playButton->Location = System::Drawing::Point(148, 15);
			this->playButton->Name = L"playButton";
			this->playButton->Size = System::Drawing::Size(146, 73);
			this->playButton->TabIndex = 0;
			this->playButton->UseVisualStyleBackColor = true;
			this->playButton->Click += gcnew System::EventHandler(this, &MyForm::playButton_Click);
			// 
			// playerOptionsButton
			// 
			this->playerOptionsButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playerOptionsButton.BackgroundImage")));
			this->playerOptionsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->playerOptionsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playerOptionsButton->Location = System::Drawing::Point(148, 94);
			this->playerOptionsButton->Name = L"playerOptionsButton";
			this->playerOptionsButton->Size = System::Drawing::Size(146, 73);
			this->playerOptionsButton->TabIndex = 1;
			this->playerOptionsButton->UseVisualStyleBackColor = true;
			this->playerOptionsButton->Click += gcnew System::EventHandler(this, &MyForm::playerOptionsButton_Click);
			// 
			// quitButton
			// 
			this->quitButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quitButton.BackgroundImage")));
			this->quitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->quitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->quitButton->Location = System::Drawing::Point(148, 173);
			this->quitButton->Name = L"quitButton";
			this->quitButton->Size = System::Drawing::Size(146, 73);
			this->quitButton->TabIndex = 2;
			this->quitButton->UseVisualStyleBackColor = true;
			this->quitButton->Click += gcnew System::EventHandler(this, &MyForm::quitButton_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->Location = System::Drawing::Point(12, 196);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 56);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Created by 1522-1 Kutuzov Dmitriy Baymakovsky Pyotr Fomin Egor";
			// 
			// buttoninfo
			// 
			this->buttoninfo->BackColor = System::Drawing::Color::Transparent;
			this->buttoninfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttoninfo.Image")));
			this->buttoninfo->Location = System::Drawing::Point(376, 206);
			this->buttoninfo->Name = L"buttoninfo";
			this->buttoninfo->Size = System::Drawing::Size(40, 35);
			this->buttoninfo->TabIndex = 4;
			this->buttoninfo->UseVisualStyleBackColor = false;
			this->buttoninfo->Click += gcnew System::EventHandler(this, &MyForm::buttoninfo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(434, 261);
			this->Controls->Add(this->buttoninfo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->quitButton);
			this->Controls->Add(this->playerOptionsButton);
			this->Controls->Add(this->playButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->ResumeLayout(false);

		}
#pragma endregion
	public:bool open_information;
	private: System::Void playButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player <= -1) {
				MessageBox::Show("Choose character!!!");
		}
		else {
			MyForm1^ gamefield = gcnew MyForm1();
			gamefield->Show();
			//MyForm::WindowState = FormWindowState::Minimized;
		}
	}
	private: System::Void playerOptionsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ player_options = gcnew MyForm2();
		player_options->Show();
	}
private: System::Void quitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Close();
}
private: System::Void buttoninfo_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Purpose of the game: defeat all enemies and complete all levels.");
}
};
}
