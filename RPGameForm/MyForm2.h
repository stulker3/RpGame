#pragma once

namespace RPGameForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nameBox;
	protected:

	private: System::Windows::Forms::Label^ nameLabel;

	private: System::Windows::Forms::Label^ classLabel;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ description;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ categoryButton;
	private: System::Windows::Forms::PictureBox^ pictureKnight;
	private: System::Windows::Forms::PictureBox^ pictureWizard;
	private: System::Windows::Forms::PictureBox^ pictureArcher;
	private: System::Windows::Forms::ComboBox^ choose_class;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBoom;







	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->classLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->categoryButton = (gcnew System::Windows::Forms::Button());
			this->pictureKnight = (gcnew System::Windows::Forms::PictureBox());
			this->pictureWizard = (gcnew System::Windows::Forms::PictureBox());
			this->pictureArcher = (gcnew System::Windows::Forms::PictureBox());
			this->choose_class = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBoom = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKnight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWizard))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureArcher))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoom))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(261, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Character castomization";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			// 
			// nameBox
			// 
			this->nameBox->BackColor = System::Drawing::SystemColors::Info;
			this->nameBox->Location = System::Drawing::Point(168, 67);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(143, 20);
			this->nameBox->TabIndex = 1;
			this->nameBox->Text = L"Name of your character.";
			// 
			// nameLabel
			// 
			this->nameLabel->BackColor = System::Drawing::Color::RosyBrown;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLabel->ForeColor = System::Drawing::Color::Black;
			this->nameLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nameLabel.Image")));
			this->nameLabel->Location = System::Drawing::Point(31, 65);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(105, 20);
			this->nameLabel->TabIndex = 2;
			this->nameLabel->Text = L"Name:";
			this->nameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// classLabel
			// 
			this->classLabel->BackColor = System::Drawing::SystemColors::Info;
			this->classLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->classLabel->ForeColor = System::Drawing::Color::Black;
			this->classLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"classLabel.Image")));
			this->classLabel->Location = System::Drawing::Point(31, 95);
			this->classLabel->Name = L"classLabel";
			this->classLabel->Size = System::Drawing::Size(105, 30);
			this->classLabel->TabIndex = 3;
			this->classLabel->Text = L"Category:";
			this->classLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(31, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 26);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Description:";
			// 
			// description
			// 
			this->description->BackColor = System::Drawing::SystemColors::Info;
			this->description->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->description->Location = System::Drawing::Point(35, 160);
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(276, 128);
			this->description->TabIndex = 7;
			this->description->Text = L"Description of your character.";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(12, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(340, 260);
			this->label4->TabIndex = 8;
			// 
			// categoryButton
			// 
			this->categoryButton->BackColor = System::Drawing::Color::Transparent;
			this->categoryButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"categoryButton.BackgroundImage")));
			this->categoryButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->categoryButton->Location = System::Drawing::Point(313, 91);
			this->categoryButton->Name = L"categoryButton";
			this->categoryButton->Size = System::Drawing::Size(39, 41);
			this->categoryButton->TabIndex = 9;
			this->categoryButton->UseVisualStyleBackColor = false;
			this->categoryButton->Click += gcnew System::EventHandler(this, &MyForm2::categoryButton_Click);
			// 
			// pictureKnight
			// 
			this->pictureKnight->BackColor = System::Drawing::Color::Transparent;
			this->pictureKnight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureKnight.Image")));
			this->pictureKnight->Location = System::Drawing::Point(433, 48);
			this->pictureKnight->Name = L"pictureKnight";
			this->pictureKnight->Size = System::Drawing::Size(185, 240);
			this->pictureKnight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureKnight->TabIndex = 11;
			this->pictureKnight->TabStop = false;
			this->pictureKnight->Visible = false;
			// 
			// pictureWizard
			// 
			this->pictureWizard->BackColor = System::Drawing::Color::Transparent;
			this->pictureWizard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureWizard.Image")));
			this->pictureWizard->Location = System::Drawing::Point(433, 48);
			this->pictureWizard->Name = L"pictureWizard";
			this->pictureWizard->Size = System::Drawing::Size(185, 240);
			this->pictureWizard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureWizard->TabIndex = 12;
			this->pictureWizard->TabStop = false;
			this->pictureWizard->Visible = false;
			// 
			// pictureArcher
			// 
			this->pictureArcher->BackColor = System::Drawing::Color::Transparent;
			this->pictureArcher->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureArcher.Image")));
			this->pictureArcher->Location = System::Drawing::Point(433, 48);
			this->pictureArcher->Name = L"pictureArcher";
			this->pictureArcher->Size = System::Drawing::Size(185, 240);
			this->pictureArcher->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureArcher->TabIndex = 13;
			this->pictureArcher->TabStop = false;
			this->pictureArcher->Visible = false;
			// 
			// choose_class
			// 
			this->choose_class->BackColor = System::Drawing::SystemColors::Info;
			this->choose_class->FormattingEnabled = true;
			this->choose_class->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Knight", L"Wizard", L"Archer" });
			this->choose_class->Location = System::Drawing::Point(168, 102);
			this->choose_class->Name = L"choose_class";
			this->choose_class->Size = System::Drawing::Size(143, 21);
			this->choose_class->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(683, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 40);
			this->button1->TabIndex = 15;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// pictureBoom
			// 
			this->pictureBoom->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoom.Image")));
			this->pictureBoom->Location = System::Drawing::Point(389, 44);
			this->pictureBoom->Name = L"pictureBoom";
			this->pictureBoom->Size = System::Drawing::Size(291, 240);
			this->pictureBoom->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoom->TabIndex = 16;
			this->pictureBoom->TabStop = false;
			this->pictureBoom->Visible = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(795, 334);
			this->Controls->Add(this->pictureBoom);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->choose_class);
			this->Controls->Add(this->pictureArcher);
			this->Controls->Add(this->pictureWizard);
			this->Controls->Add(this->pictureKnight);
			this->Controls->Add(this->categoryButton);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->description);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->classLabel);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Player Options";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKnight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWizard))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureArcher))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoom))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:

	private: System::Void categoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureArcher->Visible = false;
		pictureKnight->Visible = false;
		pictureWizard->Visible = false;
		pictureBoom->Visible = false;
		player = -1;
		health_Player = 0;
		step = 1;
		if (choose_class->SelectedIndex < 0)
			MessageBox::Show("Enter Character!!!");
		if (choose_class->SelectedIndex == 0) {
			description->Text = Convert::ToString("This knight is a veteran,he took part in many great battles against monsters, but due to his injuries, he was unable to continue fighting. Many years have passed since the last war, fighters began to be taught to fight not with monsters, but with people... Suddenly, a strange dungeon appeared in the very heart of the human kingdom, and veterans of past wars were sent there, and one of them turned out to be a warrior " + nameBox->Text + " ...");
			pictureKnight->Visible = true;
			player = 0;
			health_Player = 120;
			attack_player = 15;
			shild_Player = 10;
			skill_Player = 40;
		}
		if (choose_class->SelectedIndex == 1) {
			description->Text = Convert::ToString("Magician - " + nameBox->Text + " This magician was once a young man who wanted to learn all the magic in the world, but due to his carelessness, he received an incurable injury from a hitherto unseen creature, after which the creature disappeared." + nameBox->Text + ", not wanting to put up with defeat, decided that he would become stronger, and someday he would be able to defeat this creature. As time passed, the magician became stronger, but the creature did not appear anymore, there was no mention of this creature anywhere. The magician was already desperate that he would not be able to find out anything about the creature, but one day he had a dream where this creature called him to the dungeon, and said that he would be able to fight the 'shadow' (as it called itself) only when the magician gets to the last floor of this dungeon. After that, the magician went to the dungeon without slowing down.");
			pictureWizard->Visible = true;
			player = 1;
			health_Player = 70;
			attack_player = 25;
			shild_Player = 5;
			skill_Player = 20;
		}
		if (choose_class->SelectedIndex == 2) {
			description->Text = Convert::ToString("This archer comes from an elven village. The elves were famous for their hunting skills, but they were not at all capable of war, so their villages were ravaged by monsters, as the only survivor of his settlement, he vowed that he would devote his life to destroying monsters. But soon the monsters were defeated and he was unable to fulfill his oath, and yet, he continued to train all the time, until one day a dungeon appeared in the human kingdom, and then " + nameBox->Text + " realized that the time had come...");
			pictureArcher->Visible = true;
			player = 2;
			health_Player = 85;
			attack_player = 20;
			shild_Player = 5;
			skill_Player = 5;
		}
	};
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	description->Text = Convert::ToString("You didn't see this...");
	pictureBoom->Visible = true;
	player = 3;
	health_Player = 200;
	attack_player = 40;
	shild_Player = 15;
	skill_Player = 0;
}
};
}