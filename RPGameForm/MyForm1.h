#pragma once
#include <time.h>
#include <random>

namespace RPGameForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureKnight;
	private: System::Windows::Forms::PictureBox^ pictureWizard;
	private: System::Windows::Forms::PictureBox^ pictureArcher;
	private: System::Windows::Forms::PictureBox^ pictureGoblin;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ProgressBar^ progressPlayer;
	private: System::Windows::Forms::ProgressBar^ progressMonster;

	private: System::Windows::Forms::Button^ buttonAttack;
	private: System::Windows::Forms::Button^ buttonSkill;
	private: System::Windows::Forms::Button^ buttonDeefend;
	private: System::Windows::Forms::Button^ buttonQuit;
	private: System::Windows::Forms::PictureBox^ pictureGoblin2;
	private: System::Windows::Forms::ProgressBar^ progressMonster2;
	private: System::Windows::Forms::PictureBox^ pictureDarkKnight;
	private: System::Windows::Forms::PictureBox^ pictureDarkKnight2;
	private: System::Windows::Forms::PictureBox^ pictureDarkWizard;
	private: System::Windows::Forms::PictureBox^ pictureDarkWizard2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureEffect;
	private: System::Windows::Forms::PictureBox^ pictureEffect2;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::PictureBox^ pictureBoss;
	private: System::Windows::Forms::ProgressBar^ progressBoss;
	private: System::Windows::Forms::PictureBox^ pictureTank;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ progressMana;
	private: System::Windows::Forms::Label^ progressDef;

	private: System::Windows::Forms::Label^ label3;









	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureKnight = (gcnew System::Windows::Forms::PictureBox());
			this->pictureWizard = (gcnew System::Windows::Forms::PictureBox());
			this->pictureArcher = (gcnew System::Windows::Forms::PictureBox());
			this->pictureGoblin = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressPlayer = (gcnew System::Windows::Forms::ProgressBar());
			this->progressMonster = (gcnew System::Windows::Forms::ProgressBar());
			this->buttonAttack = (gcnew System::Windows::Forms::Button());
			this->buttonSkill = (gcnew System::Windows::Forms::Button());
			this->buttonDeefend = (gcnew System::Windows::Forms::Button());
			this->buttonQuit = (gcnew System::Windows::Forms::Button());
			this->pictureGoblin2 = (gcnew System::Windows::Forms::PictureBox());
			this->progressMonster2 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureDarkKnight = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDarkKnight2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDarkWizard = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDarkWizard2 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureEffect = (gcnew System::Windows::Forms::PictureBox());
			this->pictureEffect2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBoss = (gcnew System::Windows::Forms::PictureBox());
			this->progressBoss = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureTank = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressMana = (gcnew System::Windows::Forms::Label());
			this->progressDef = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKnight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWizard))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureArcher))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGoblin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGoblin2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDarkKnight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDarkKnight2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDarkWizard))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDarkWizard2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEffect))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEffect2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoss))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTank))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureKnight
			// 
			this->pictureKnight->BackColor = System::Drawing::Color::Transparent;
			this->pictureKnight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureKnight.Image")));
			this->pictureKnight->Location = System::Drawing::Point(232, 224);
			this->pictureKnight->Name = L"pictureKnight";
			this->pictureKnight->Size = System::Drawing::Size(185, 240);
			this->pictureKnight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureKnight->TabIndex = 15;
			this->pictureKnight->TabStop = false;
			this->pictureKnight->Visible = false;
			// 
			// pictureWizard
			// 
			this->pictureWizard->BackColor = System::Drawing::Color::Transparent;
			this->pictureWizard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureWizard.Image")));
			this->pictureWizard->Location = System::Drawing::Point(232, 224);
			this->pictureWizard->Name = L"pictureWizard";
			this->pictureWizard->Size = System::Drawing::Size(185, 240);
			this->pictureWizard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureWizard->TabIndex = 16;
			this->pictureWizard->TabStop = false;
			this->pictureWizard->Visible = false;
			// 
			// pictureArcher
			// 
			this->pictureArcher->BackColor = System::Drawing::Color::Transparent;
			this->pictureArcher->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureArcher.Image")));
			this->pictureArcher->Location = System::Drawing::Point(232, 224);
			this->pictureArcher->Name = L"pictureArcher";
			this->pictureArcher->Size = System::Drawing::Size(185, 240);
			this->pictureArcher->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureArcher->TabIndex = 14;
			this->pictureArcher->TabStop = false;
			this->pictureArcher->Visible = false;
			// 
			// pictureGoblin
			// 
			this->pictureGoblin->BackColor = System::Drawing::Color::Transparent;
			this->pictureGoblin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureGoblin.Image")));
			this->pictureGoblin->Location = System::Drawing::Point(866, 236);
			this->pictureGoblin->Name = L"pictureGoblin";
			this->pictureGoblin->Size = System::Drawing::Size(185, 240);
			this->pictureGoblin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureGoblin->TabIndex = 17;
			this->pictureGoblin->TabStop = false;
			this->pictureGoblin->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 5;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// progressPlayer
			// 
			this->progressPlayer->Location = System::Drawing::Point(232, 198);
			this->progressPlayer->Maximum = 120;
			this->progressPlayer->Name = L"progressPlayer";
			this->progressPlayer->Size = System::Drawing::Size(185, 20);
			this->progressPlayer->TabIndex = 19;
			this->progressPlayer->Value = 120;
			// 
			// progressMonster
			// 
			this->progressMonster->BackColor = System::Drawing::SystemColors::Control;
			this->progressMonster->Location = System::Drawing::Point(866, 207);
			this->progressMonster->Name = L"progressMonster";
			this->progressMonster->Size = System::Drawing::Size(185, 23);
			this->progressMonster->TabIndex = 20;
			this->progressMonster->Value = 100;
			// 
			// buttonAttack
			// 
			this->buttonAttack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAttack.BackgroundImage")));
			this->buttonAttack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAttack->Location = System::Drawing::Point(63, 528);
			this->buttonAttack->Name = L"buttonAttack";
			this->buttonAttack->Size = System::Drawing::Size(122, 50);
			this->buttonAttack->TabIndex = 25;
			this->buttonAttack->UseVisualStyleBackColor = true;
			this->buttonAttack->Click += gcnew System::EventHandler(this, &MyForm1::buttonAttack_Click);
			// 
			// buttonSkill
			// 
			this->buttonSkill->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSkill.BackgroundImage")));
			this->buttonSkill->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSkill->Location = System::Drawing::Point(319, 528);
			this->buttonSkill->Name = L"buttonSkill";
			this->buttonSkill->Size = System::Drawing::Size(122, 50);
			this->buttonSkill->TabIndex = 26;
			this->buttonSkill->UseVisualStyleBackColor = true;
			this->buttonSkill->Click += gcnew System::EventHandler(this, &MyForm1::buttonSkill_Click);
			// 
			// buttonDeefend
			// 
			this->buttonDeefend->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDeefend.BackgroundImage")));
			this->buttonDeefend->Location = System::Drawing::Point(191, 528);
			this->buttonDeefend->Name = L"buttonDeefend";
			this->buttonDeefend->Size = System::Drawing::Size(122, 50);
			this->buttonDeefend->TabIndex = 27;
			this->buttonDeefend->UseVisualStyleBackColor = true;
			this->buttonDeefend->Click += gcnew System::EventHandler(this, &MyForm1::buttonDeefend_Click);
			// 
			// buttonQuit
			// 
			this->buttonQuit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonQuit.BackgroundImage")));
			this->buttonQuit->Location = System::Drawing::Point(447, 528);
			this->buttonQuit->Name = L"buttonQuit";
			this->buttonQuit->Size = System::Drawing::Size(122, 50);
			this->buttonQuit->TabIndex = 28;
			this->buttonQuit->UseVisualStyleBackColor = true;
			this->buttonQuit->Click += gcnew System::EventHandler(this, &MyForm1::buttonQuit_Click);
			// 
			// pictureGoblin2
			// 
			this->pictureGoblin2->BackColor = System::Drawing::Color::Transparent;
			this->pictureGoblin2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureGoblin2.Image")));
			this->pictureGoblin2->Location = System::Drawing::Point(656, 134);
			this->pictureGoblin2->Name = L"pictureGoblin2";
			this->pictureGoblin2->Size = System::Drawing::Size(185, 240);
			this->pictureGoblin2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureGoblin2->TabIndex = 29;
			this->pictureGoblin2->TabStop = false;
			this->pictureGoblin2->Visible = false;
			// 
			// progressMonster2
			// 
			this->progressMonster2->BackColor = System::Drawing::SystemColors::Control;
			this->progressMonster2->Location = System::Drawing::Point(656, 105);
			this->progressMonster2->Name = L"progressMonster2";
			this->progressMonster2->Size = System::Drawing::Size(185, 23);
			this->progressMonster2->TabIndex = 30;
			this->progressMonster2->Value = 100;
			// 
			// pictureDarkKnight
			// 
			this->pictureDarkKnight->BackColor = System::Drawing::Color::Transparent;
			this->pictureDarkKnight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDarkKnight.Image")));
			this->pictureDarkKnight->Location = System::Drawing::Point(866, 236);
			this->pictureDarkKnight->Name = L"pictureDarkKnight";
			this->pictureDarkKnight->Size = System::Drawing::Size(185, 240);
			this->pictureDarkKnight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDarkKnight->TabIndex = 17;
			this->pictureDarkKnight->TabStop = false;
			this->pictureDarkKnight->Visible = false;
			// 
			// pictureDarkKnight2
			// 
			this->pictureDarkKnight2->BackColor = System::Drawing::Color::Transparent;
			this->pictureDarkKnight2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDarkKnight2.Image")));
			this->pictureDarkKnight2->Location = System::Drawing::Point(656, 134);
			this->pictureDarkKnight2->Name = L"pictureDarkKnight2";
			this->pictureDarkKnight2->Size = System::Drawing::Size(185, 240);
			this->pictureDarkKnight2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDarkKnight2->TabIndex = 29;
			this->pictureDarkKnight2->TabStop = false;
			this->pictureDarkKnight2->Visible = false;
			// 
			// pictureDarkWizard
			// 
			this->pictureDarkWizard->BackColor = System::Drawing::Color::Transparent;
			this->pictureDarkWizard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDarkWizard.Image")));
			this->pictureDarkWizard->Location = System::Drawing::Point(866, 236);
			this->pictureDarkWizard->Name = L"pictureDarkWizard";
			this->pictureDarkWizard->Size = System::Drawing::Size(185, 240);
			this->pictureDarkWizard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDarkWizard->TabIndex = 17;
			this->pictureDarkWizard->TabStop = false;
			this->pictureDarkWizard->Visible = false;
			// 
			// pictureDarkWizard2
			// 
			this->pictureDarkWizard2->BackColor = System::Drawing::Color::Transparent;
			this->pictureDarkWizard2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDarkWizard2.Image")));
			this->pictureDarkWizard2->Location = System::Drawing::Point(656, 134);
			this->pictureDarkWizard2->Name = L"pictureDarkWizard2";
			this->pictureDarkWizard2->Size = System::Drawing::Size(185, 240);
			this->pictureDarkWizard2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDarkWizard2->TabIndex = 29;
			this->pictureDarkWizard2->TabStop = false;
			this->pictureDarkWizard2->Visible = false;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::IndianRed;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"First Enemy", L"Second Enemy" });
			this->listBox1->Location = System::Drawing::Point(63, 492);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(122, 36);
			this->listBox1->TabIndex = 31;
			// 
			// pictureEffect
			// 
			this->pictureEffect->BackColor = System::Drawing::Color::Transparent;
			this->pictureEffect->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureEffect.Image")));
			this->pictureEffect->Location = System::Drawing::Point(637, 224);
			this->pictureEffect->Name = L"pictureEffect";
			this->pictureEffect->Size = System::Drawing::Size(223, 84);
			this->pictureEffect->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureEffect->TabIndex = 32;
			this->pictureEffect->TabStop = false;
			this->pictureEffect->Visible = false;
			// 
			// pictureEffect2
			// 
			this->pictureEffect2->BackColor = System::Drawing::Color::Transparent;
			this->pictureEffect2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureEffect2.ErrorImage")));
			this->pictureEffect2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureEffect2.Image")));
			this->pictureEffect2->Location = System::Drawing::Point(847, 326);
			this->pictureEffect2->Name = L"pictureEffect2";
			this->pictureEffect2->Size = System::Drawing::Size(237, 82);
			this->pictureEffect2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureEffect2->TabIndex = 33;
			this->pictureEffect2->TabStop = false;
			this->pictureEffect2->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 250;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm1::timer2_Tick);
			// 
			// pictureBoss
			// 
			this->pictureBoss->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoss->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoss.Image")));
			this->pictureBoss->Location = System::Drawing::Point(571, 65);
			this->pictureBoss->Name = L"pictureBoss";
			this->pictureBoss->Size = System::Drawing::Size(479, 398);
			this->pictureBoss->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoss->TabIndex = 34;
			this->pictureBoss->TabStop = false;
			this->pictureBoss->Visible = false;
			// 
			// progressBoss
			// 
			this->progressBoss->Location = System::Drawing::Point(571, 31);
			this->progressBoss->Name = L"progressBoss";
			this->progressBoss->Size = System::Drawing::Size(480, 28);
			this->progressBoss->TabIndex = 35;
			this->progressBoss->Value = 100;
			this->progressBoss->Visible = false;
			// 
			// pictureTank
			// 
			this->pictureTank->BackColor = System::Drawing::Color::Transparent;
			this->pictureTank->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureTank.Image")));
			this->pictureTank->Location = System::Drawing::Point(232, 224);
			this->pictureTank->Name = L"pictureTank";
			this->pictureTank->Size = System::Drawing::Size(374, 276);
			this->pictureTank->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureTank->TabIndex = 36;
			this->pictureTank->TabStop = false;
			this->pictureTank->Visible = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(321, 504);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 24);
			this->label1->TabIndex = 37;
			// 
			// progressMana
			// 
			this->progressMana->BackColor = System::Drawing::Color::DodgerBlue;
			this->progressMana->Location = System::Drawing::Point(324, 507);
			this->progressMana->Name = L"progressMana";
			this->progressMana->Size = System::Drawing::Size(113, 18);
			this->progressMana->TabIndex = 38;
			// 
			// progressDef
			// 
			this->progressDef->BackColor = System::Drawing::Color::LimeGreen;
			this->progressDef->Location = System::Drawing::Point(195, 507);
			this->progressDef->Name = L"progressDef";
			this->progressDef->Size = System::Drawing::Size(113, 18);
			this->progressDef->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(192, 504);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 24);
			this->label3->TabIndex = 39;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1147, 613);
			this->Controls->Add(this->progressDef);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressMana);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureTank);
			this->Controls->Add(this->progressBoss);
			this->Controls->Add(this->pictureBoss);
			this->Controls->Add(this->pictureEffect2);
			this->Controls->Add(this->pictureEffect);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureDarkWizard2);
			this->Controls->Add(this->pictureDarkWizard);
			this->Controls->Add(this->pictureDarkKnight2);
			this->Controls->Add(this->pictureDarkKnight);
			this->Controls->Add(this->progressMonster2);
			this->Controls->Add(this->pictureGoblin2);
			this->Controls->Add(this->buttonQuit);
			this->Controls->Add(this->buttonDeefend);
			this->Controls->Add(this->buttonSkill);
			this->Controls->Add(this->buttonAttack);
			this->Controls->Add(this->progressMonster);
			this->Controls->Add(this->progressPlayer);
			this->Controls->Add(this->pictureGoblin);
			this->Controls->Add(this->pictureArcher);
			this->Controls->Add(this->pictureWizard);
			this->Controls->Add(this->pictureKnight);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKnight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWizard))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureArcher))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGoblin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGoblin2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDarkKnight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDarkKnight2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDarkWizard))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDarkWizard2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEffect))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureEffect2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoss))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTank))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private:
	void shieldBar(bool sheild) {
		if (sheild)
		{
			progressDef->Visible = true;
		}
		else {
			progressDef->Visible = false;
		}
	}

	void manaBar(int skill) {
		if (skill == 0)
			mana = min_mana;
		if (skill == 1)
			mana = 40;
		if (skill == 2)
			if (select_mana == 2) {
				mana = max_mana;
			}
			else {
				mana = 80;
			}
		if (skill == 3)
			if (select_mana == 2) {}
			else {
				mana = max_mana;
			}
		progressMana->Width = mana;
	}

	void heroHealth() {
		attack_monst1 = 0;
		attack_monst2 = 0;
		health_Player = return_health;
		progressPlayer->Maximum = return_health;
		progressPlayer->Value = return_health;
		debag_attack = false;
	}

	void delMons() {
		if (health_Monst1 <= 0) {
			progressMonster->Visible = false;
			progressBoss->Visible = false;
			pictureBoss->Visible = false;
			pictureGoblin->Visible = false;
			pictureDarkKnight->Visible = false;
			pictureDarkWizard->Visible = false;
		}
		if (health_Monst2 <= 0) {
			progressMonster2->Visible = false;
			pictureGoblin2->Visible = false;
			pictureDarkKnight2->Visible = false;
			pictureDarkWizard2->Visible = false;
		}
	}

	void healthZero() {
		debag_health_step = false;
		if (health_Player <= 0) {
			progressPlayer->Visible = false;
			switch (player) {
			case(0): {
				pictureKnight->Visible = false;
				break;
			}
			case(1): {
				pictureWizard->Visible = false;
				break;
			}
			case(2): {
				pictureArcher->Visible = false;
				break;
			}
			}
			MessageBox::Show("You lose");
			health_Player = return_health;
			step = 1;
			this->Close();
		}
		delMons();
		if ((health_Monst2 <= 0) && (health_Monst1 <= 0))
		{
			if (step < step_max) {
				if (debag_step_next)
				{
					MessageBox::Show("Level " + step + " complete!");
					step++;
					setMonstAtField();
				}
			}
			else {
				MessageBox::Show("You win!");
				health_Player = return_health;
				step = 1;
				debag_step_next = false;
				MyForm1::Close();
			}
		}
		shieldBar(shield);
	}

	int GetRandomNumber(int min, int max)
		   {
			   srand(time(NULL));
			   int B = min + rand() % (max - min + 1);
			   return B;
		   }

	void setMonstAtField() {
		heroHealth();
		shield = false;
		progressMonster->Value = 0;
		progressMonster2->Value = 0;
		health_Monst1 = 0;
		health_Monst2 = 0;
		int chooser;
		chooser = GetRandomNumber(1, 3);
		if (step == step_max) {
			chooser = 4;
		}
		switch (chooser) {
		case(1): {
			//goblin
			pictureGoblin->Visible = true;
			progressMonster->Visible = true;
			health_Monst1 = 70;
			attack_monst1 = 10;
			break;
		}
		case(2): {
			//dark knight
			pictureDarkKnight->Visible = true;
			progressMonster->Visible = true;
			health_Monst1 = 75;
			attack_monst1 = 15;
			break;
		}
		case(3): {
			//dark wizard
			pictureDarkWizard->Visible = true;
			progressMonster->Visible = true;
			health_Monst1 = 60;
			attack_monst1 = 20;
			break;
		}
		case (4): {
			//Boss
			listBox1->Visible = false;

			pictureBoss->Visible = true;
			progressBoss->Visible = true;
			health_Monst1 = 150;
			attack_monst1 = 25;
			break;
		}
		}

		chooser = GetRandomNumber(10, 30);
		if (step != step_max) {
		if (chooser >= 10 && chooser < 21) {
			pictureGoblin2->Visible = true;
			progressMonster2->Visible = true;
			health_Monst2 = 70;
			attack_monst2 = 10;
		}
		if (chooser >= 21 && chooser < 35) {
			pictureDarkKnight2->Visible = true;
			progressMonster2->Visible = true;
			health_Monst2 = 75;
			attack_monst2 = 15;
		}
		if (chooser >= 35 && chooser <= 30) {
			pictureDarkWizard2->Visible = true;
			progressMonster2->Visible = true;
			health_Monst2 = 60;
			attack_monst2 = 20;
		}
		}
		progressBoss->Maximum = health_Monst1;
		progressBoss->Value = health_Monst1;
		if (step != step_max)
		{
		progressMonster->Maximum = health_Monst1;
		progressMonster->Value = health_Monst1;
		}
		progressMonster2->Maximum = health_Monst2;
		progressMonster2->Value = health_Monst2;
	}

	Void timer1_Tick(Object^ sender, EventArgs^ e) {
		int choose_attack;
		++skill_charge;
		manaBar(skill_charge);
		if (debag_health_step) {
			choose_attack = GetRandomNumber(1, 2);
			if (step == step_max)
				choose_attack = 1;
			if (choose_attack == 1) {
				if (debag_attack) {
					health_Player -= attack_monst1;
				}
			}
			else if (choose_attack == 2) {
				if (debag_attack) {
					health_Player -= attack_monst2;
				}
			}
			if (health_Player > 0) {
				progressPlayer->Value = health_Player;
			}
			if (shield) {
				shield = false;
			}
			debag_attack = true;
			timer1->Enabled = false;
			healthZero();
		}
		else {
			health_Player = return_health;
			progressPlayer->Value = health_Player;
			debag_health_step = false;
			timer1->Enabled = false;
		}
		shieldBar(shield);
	}

	Void buttonAttack_Click(Object^ sender, EventArgs^ e) {
		int a;
		shieldBar(shield);
		switch (listBox1->SelectedIndex)
		{
		case (0): {
			if (health_Monst1 > 0) {
				health_Monst1 -= attack_player;
				if (health_Monst1 > 0) {
					if (step != step_max)
					{
						timer2->Enabled = true;
						pictureEffect2->Visible = true;
						timer2->Start();
						progressMonster->Value = health_Monst1;
					}
					progressBoss->Value = health_Monst1;
				}
			}
			else {
				if (health_Monst2 > 0) {
					health_Monst2 -= attack_player;
					if (health_Monst2 > 0) {
						timer2->Enabled = true;
						pictureEffect->Visible = true;
						progressMonster2->Value = health_Monst2;
					}
				}
			}
			break;
		}
		case (1): {
			if (health_Monst2 > 0) {
				health_Monst2 -= attack_player;
				if (health_Monst2 > 0) {
					timer2->Enabled = true;
					pictureEffect->Visible = true;
					progressMonster2->Value = health_Monst2;
				}
			}
			else {
				if (health_Monst1 > 0) {
					health_Monst1 -= attack_player;
					if (health_Monst1 > 0) {
						if (step != step_max)
						{
							timer2->Enabled = true;
							pictureEffect2->Visible = true;
							timer2->Start();
							progressMonster->Value = health_Monst1;
						}
						progressBoss->Value = health_Monst1;
					}
				}
			}
			break;
		}
		default: {
			if (health_Monst1 > 0) {
				health_Monst1 -= attack_player;
				if (health_Monst1 > 0) {
					if (step != step_max)
					{
						timer2->Enabled = true;
						pictureEffect2->Visible = true;
						timer2->Start();
						progressMonster->Value = health_Monst1;
					}
					progressBoss->Value = health_Monst1;
				}
			}
			else {
				if (health_Monst2 > 0) {
					health_Monst2 -= attack_player;
					if (health_Monst2 > 0) {
						timer2->Enabled = true;
						pictureEffect->Visible = true;
						progressMonster2->Value = health_Monst2;
					}
				}
			}
		}
			   break;
		}

		healthZero();
		debag_health_step = true;
		timer1->Enabled = true;
	}

	Void buttonDeefend_Click(Object^ sender, EventArgs^ e) {
		if (progressPlayer->Value != progressPlayer->Maximum) {
			if (shield) {}
			else {
				health_Player += shild_Player;
				healthZero();
				debag_health_step = true;
				shield = true;
			}
		}
		shieldBar(shield);
	}

	Void MyForm1_Load(Object^ sender, EventArgs^ e) {
		return_health = health_Player;
		this->progressPlayer->Maximum = health_Player;
		manaBar(skill_charge);
		shieldBar(shield);
		setMonstAtField();
		debag_step_next = true;
		debag_attack = true;
		switch (player) {
		case(0): {
			pictureKnight->Visible = true;
			break;
		}
		case(1): {
			pictureWizard->Visible = true;
			select_mana = 2;
			break;
		}
		case(2): {
			pictureArcher->Visible = true;
			select_mana = 2;
			break;
		}
		case (3): {
			pictureTank->Visible = true;
		}
		}
	}

	Void buttonSkill_Click(Object^ sender, EventArgs^ e) {
		switch (player)
		{
		case(0): {
			if (skill_charge >= 3) {
				skill_charge = 0;
				switch (listBox1->SelectedIndex)
				{
				case (0): {
					if (health_Monst1 > 0) {
						health_Monst1 -= skill_Player;
						if (health_Monst1 > 0) {
							if (step != step_max)
							{
								timer2->Enabled = true;
								pictureEffect2->Visible = true;
								timer2->Start();
								progressMonster->Value = health_Monst1;
							}
							progressBoss->Value = health_Monst1;
						}
					}
					else {
						health_Monst2 -= skill_Player;
						if (health_Monst2 > 0) {
							timer2->Enabled = true;
							pictureEffect->Visible = true;
							progressMonster2->Value = health_Monst2;
						}
					}
					break;
				}
				case (1): {
					if (health_Monst2 > 0) {
						health_Monst2 -= skill_Player;
						if (health_Monst2 > 0) {
							timer2->Enabled = true;
							pictureEffect->Visible = true;
							progressMonster2->Value = health_Monst2;
						}
					}
					else {
						health_Monst1 -= skill_Player;
						if (health_Monst1 > 0) {
							if (step != step_max)
							{
								timer2->Enabled = true;
								pictureEffect2->Visible = true;
								timer2->Start();
								progressMonster->Value = health_Monst1;
							}
							progressBoss->Value = health_Monst1;
						}
					}
					break;
				}
				default: {
					if (health_Monst1 > 0) {
						health_Monst1 -= skill_Player;
						if (health_Monst1 > 0) {
							if (step != step_max)
							{
								timer2->Enabled = true;
								pictureEffect2->Visible = true;
								timer2->Start();
								progressMonster->Value = health_Monst1;
							}
							progressBoss->Value = health_Monst1;
						}
					}
					else {
						health_Monst2 -= skill_Player;
						if (health_Monst2 > 0) {
							timer2->Enabled = true;
							pictureEffect->Visible = true;
							progressMonster2->Value = health_Monst2;
						}
					}
				}
					   break;
				}
				healthZero();
				debag_health_step = true;
			}
			break;
		}
		case(1): {
			if (skill_charge >= 2) {
				skill_charge = 0;
				if (progressPlayer->Maximum > (health_Player + skill_Player)) {
					health_Player += skill_Player;
					progressPlayer->Value = health_Player;
				}
				else {
					health_Player = progressPlayer->Maximum;
				}
				healthZero();
				debag_health_step = true;
				progressPlayer->Value = health_Player;
			}
			break;
		}
		case(2): {
			int dodge;
			if (skill_charge >= 2) {
				skill_charge = 0;
				dodge = GetRandomNumber(skill_Player, health_Player);
				if (dodge >= 5 && dodge <= 20) {
					health_Player += attack_monst1;
					healthZero();
					debag_health_step = true;
					progressPlayer->Value = health_Player;
				}
			}
			break;
		}
		}
		manaBar(skill_charge);
	}

	Void buttonQuit_Click(Object^ sender, EventArgs^ e) {
		health_Player = return_health;
		step = 1;
		this->Close();
	}

	Void timer2_Tick(Object^ sender, EventArgs^ e) {
		pictureEffect->Visible = false;
		pictureEffect2->Visible = false;
		timer2->Stop();
	}

	private:
		const int max_mana = 113;
		const int min_mana = 1;
		int mana = 1;
		int select_mana;

		int return_health;

		int health_Monst1;
		int health_Monst2;
		int attack_monst1;
		int attack_monst2;

		int skill_charge = 0;
		int step_max = 5;

		bool shield = false;
		bool debag_health_step = true;
		bool debag_attack = true;
		bool debag_step_next = true;
	};
};