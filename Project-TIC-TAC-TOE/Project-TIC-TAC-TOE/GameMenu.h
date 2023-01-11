#pragma once
#include "LOADINGSCREEN.h"
#include "mainmenu.h"


namespace ProjectTICTACTOE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GameMenu
	/// </summary>
	public ref class GameMenu : public System::Windows::Forms::Form
	{
		static int Second = 0;
		static int Minute = 0;
		String^ Sec;
	private: System::Windows::Forms::Timer^ timer2;
		   String^ Min;


	public:
		
		GameMenu(void)
		{
			InitializeComponent();
			timer1->Start();
			timer2->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::ComponentModel::IContainer^ components;










	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameMenu::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(90, 3);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(113, 56);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GameMenu::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(250, 432);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 21);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GameMenu::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-6, -62);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(304, 475);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &GameMenu::pictureBox2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(53, 88);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 45);
			this->button2->TabIndex = 5;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GameMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(121, 88);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 45);
			this->button3->TabIndex = 6;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &GameMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(189, 86);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 45);
			this->button4->TabIndex = 7;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GameMenu::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(191, 146);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 49);
			this->button5->TabIndex = 10;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &GameMenu::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(122, 146);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 49);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &GameMenu::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(54, 146);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 49);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &GameMenu::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(191, 211);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 51);
			this->button8->TabIndex = 13;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &GameMenu::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(123, 210);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(45, 51);
			this->button9->TabIndex = 12;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &GameMenu::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(51, 208);
			this->button10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(46, 51);
			this->button10->TabIndex = 11;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &GameMenu::button10_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(63, 62);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(167, 13);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"Cannot overwrite!!! Try again!";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox1_TextChanged_1);
			// 
			// button12
			// 
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(183, 432);
			this->button12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(51, 21);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Reset";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &GameMenu::button12_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(43, 127);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(201, 53);
			this->textBox2->TabIndex = 0;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L"DRAW !!!";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(43, 127);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(201, 53);
			this->textBox3->TabIndex = 0;
			this->textBox3->TabStop = false;
			this->textBox3->Text = L"Player 1 wins !!!";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(43, 127);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(201, 53);
			this->textBox4->TabIndex = 0;
			this->textBox4->TabStop = false;
			this->textBox4->Text = L"Player 2 wins !!!";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(43, 127);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(201, 53);
			this->textBox5->TabIndex = 0;
			this->textBox5->TabStop = false;
			this->textBox5->Text = L"Hat-Trick P2 !!!";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(43, 127);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(201, 53);
			this->textBox6->TabIndex = 0;
			this->textBox6->TabStop = false;
			this->textBox6->Text = L"Hat-Trick P1 !!!";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->textBox7->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox7->Location = System::Drawing::Point(13, 297);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(69, 19);
			this->textBox7->TabIndex = 0;
			this->textBox7->TabStop = false;
			this->textBox7->Text = L"Player 1";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->textBox8->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox8->Location = System::Drawing::Point(13, 331);
			this->textBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(69, 19);
			this->textBox8->TabIndex = 0;
			this->textBox8->TabStop = false;
			this->textBox8->Text = L"Player 2";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->textBox9->ForeColor = System::Drawing::Color::Firebrick;
			this->textBox9->Location = System::Drawing::Point(83, 276);
			this->textBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(43, 19);
			this->textBox9->TabIndex = 0;
			this->textBox9->TabStop = false;
			this->textBox9->Text = L"Wins";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->textBox10->ForeColor = System::Drawing::Color::Firebrick;
			this->textBox10->Location = System::Drawing::Point(134, 276);
			this->textBox10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(79, 19);
			this->textBox10->TabIndex = 0;
			this->textBox10->TabStop = false;
			this->textBox10->Text = L"Hat-tricks";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(93, 294);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 26);
			this->label1->TabIndex = 26;
			this->label1->Text = L"0";
			this->label1->Click += gcnew System::EventHandler(this, &GameMenu::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(155, 294);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 26);
			this->label2->TabIndex = 27;
			this->label2->Text = L"0";
			this->label2->Click += gcnew System::EventHandler(this, &GameMenu::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(93, 326);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 26);
			this->label3->TabIndex = 28;
			this->label3->Text = L"0";
			this->label3->Click += gcnew System::EventHandler(this, &GameMenu::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(155, 326);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 26);
			this->label4->TabIndex = 29;
			this->label4->Text = L"0";
			this->label4->Click += gcnew System::EventHandler(this, &GameMenu::label4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-35, 356);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(333, 6);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 30;
			this->pictureBox3->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->textBox11->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox11->Location = System::Drawing::Point(13, 374);
			this->textBox11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(69, 19);
			this->textBox11->TabIndex = 0;
			this->textBox11->TabStop = false;
			this->textBox11->Text = L"Draws";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox11_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(121, 369);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 26);
			this->label5->TabIndex = 32;
			this->label5->Text = L"0";
			this->label5->Click += gcnew System::EventHandler(this, &GameMenu::label5_Click);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->textBox12->ForeColor = System::Drawing::Color::Firebrick;
			this->textBox12->Location = System::Drawing::Point(235, 276);
			this->textBox12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(43, 19);
			this->textBox12->TabIndex = 0;
			this->textBox12->TabStop = false;
			this->textBox12->Text = L"Score";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(246, 295);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 26);
			this->label6->TabIndex = 34;
			this->label6->Text = L"0";
			this->label6->Click += gcnew System::EventHandler(this, &GameMenu::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(246, 326);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 26);
			this->label7->TabIndex = 35;
			this->label7->Text = L"0";
			this->label7->Click += gcnew System::EventHandler(this, &GameMenu::label7_Click);
			// 
			// button13
			// 
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(8, 427);
			this->button13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 26);
			this->button13->TabIndex = 0;
			this->button13->TabStop = false;
			this->button13->Text = L"New game";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &GameMenu::button13_Click);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::DarkRed;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox13->Enabled = false;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::Color::White;
			this->textBox13->HideSelection = false;
			this->textBox13->Location = System::Drawing::Point(21, 127);
			this->textBox13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(257, 85);
			this->textBox13->TabIndex = 0;
			this->textBox13->TabStop = false;
			this->textBox13->Text = L"Player 1 Takes The Game\r\nWith The Highest Score\r\n\r\n";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox13_TextChanged);
			// 
			// button14
			// 
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(116, 185);
			this->button14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(64, 21);
			this->button14->TabIndex = 4;
			this->button14->Text = L"Continue";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &GameMenu::button14_Click);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::DarkRed;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox14->Enabled = false;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::White;
			this->textBox14->HideSelection = false;
			this->textBox14->Location = System::Drawing::Point(21, 131);
			this->textBox14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(257, 85);
			this->textBox14->TabIndex = 0;
			this->textBox14->TabStop = false;
			this->textBox14->Text = L"Player 2 Takes The Game\r\nWith The Highest Score\r\n\r\n";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox14_TextChanged);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::DarkRed;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox15->Enabled = false;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::Color::White;
			this->textBox15->HideSelection = false;
			this->textBox15->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox15->Location = System::Drawing::Point(21, 127);
			this->textBox15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(257, 85);
			this->textBox15->TabIndex = 0;
			this->textBox15->TabStop = false;
			this->textBox15->Text = L"Scores Are Equal It is A Tie\r\n\r\n\r\n\r\n\r\n";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox15->Visible = false;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox15_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::DarkGreen;
			this->textBox16->Location = System::Drawing::Point(302, 410);
			this->textBox16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(13, 50);
			this->textBox16->TabIndex = 0;
			this->textBox16->TabStop = false;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox16_TextChanged);
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::Green;
			this->textBox17->Location = System::Drawing::Point(302, 360);
			this->textBox17->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(13, 50);
			this->textBox17->TabIndex = 0;
			this->textBox17->TabStop = false;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox17_TextChanged);
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::LimeGreen;
			this->textBox18->Location = System::Drawing::Point(302, 310);
			this->textBox18->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(13, 50);
			this->textBox18->TabIndex = 0;
			this->textBox18->TabStop = false;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox18_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::PaleGreen;
			this->textBox19->Location = System::Drawing::Point(302, 261);
			this->textBox19->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(13, 50);
			this->textBox19->TabIndex = 0;
			this->textBox19->TabStop = false;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox19_TextChanged);
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::LightPink;
			this->textBox20->Location = System::Drawing::Point(302, 211);
			this->textBox20->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(13, 50);
			this->textBox20->TabIndex = 0;
			this->textBox20->TabStop = false;
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox20_TextChanged);
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::LightCoral;
			this->textBox21->Location = System::Drawing::Point(302, 161);
			this->textBox21->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(13, 50);
			this->textBox21->TabIndex = 0;
			this->textBox21->TabStop = false;
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox21_TextChanged);
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::IndianRed;
			this->textBox22->Location = System::Drawing::Point(302, 110);
			this->textBox22->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(13, 50);
			this->textBox22->TabIndex = 0;
			this->textBox22->TabStop = false;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox22_TextChanged);
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::Red;
			this->textBox23->Location = System::Drawing::Point(302, 60);
			this->textBox23->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(13, 50);
			this->textBox23->TabIndex = 0;
			this->textBox23->TabStop = false;
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox23_TextChanged);
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::DarkRed;
			this->textBox24->Location = System::Drawing::Point(302, 10);
			this->textBox24->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(13, 50);
			this->textBox24->TabIndex = 0;
			this->textBox24->TabStop = false;
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox24_TextChanged);
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox25->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->ForeColor = System::Drawing::Color::Lavender;
			this->textBox25->Location = System::Drawing::Point(28, 30);
			this->textBox25->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(43, 31);
			this->textBox25->TabIndex = 0;
			this->textBox25->TabStop = false;
			this->textBox25->Text = L"P1";
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox25_TextChanged);
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox26->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->ForeColor = System::Drawing::Color::Lavender;
			this->textBox26->Location = System::Drawing::Point(229, 30);
			this->textBox26->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(43, 31);
			this->textBox26->TabIndex = 0;
			this->textBox26->TabStop = false;
			this->textBox26->Text = L"P2";
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &GameMenu::textBox26_TextChanged);
			// 
			// button11
			// 
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(102, 432);
			this->button11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(64, 21);
			this->button11->TabIndex = 0;
			this->button11->TabStop = false;
			this->button11->Text = L"Restart";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &GameMenu::button11_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &GameMenu::timer1_Tick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(-1, 1);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"label8";
			this->label8->Click += gcnew System::EventHandler(this, &GameMenu::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(198, 374);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 20);
			this->label9->TabIndex = 0;
			this->label9->Text = L"0 : 0";
			this->label9->Click += gcnew System::EventHandler(this, &GameMenu::label9_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &GameMenu::timer2_Tick);
			// 
			// GameMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->ClientSize = System::Drawing::Size(317, 461);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"GameMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameMenu";
			this->Load += gcnew System::EventHandler(this, &GameMenu::GameMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		int Bar = 15;
		int counterThree1, counterThree2;
		int p1wincount = 1;
		int p1Hattrickcount = 1;
		int p2wincount = 1;
		int p2Hattrickcount = 1;
		int drawcount=1;
		int p1score = 10;
		int p2score = 10;
		int endgame1 = 1;
		int endgame2 = 1;
		bool checker = false;
		bool B2 = false;
		bool B3 = false;
		bool B4 = false;
		bool B5 = false;
		bool B6 = false;
		bool B7 = false;
		bool B8 = false;
		bool B9 = false;
		bool B10 = false;
		bool p1win = false;
		bool p2win = false;


	private: System::Void GameMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Hide();
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		textBox5->Visible = false;
		textBox6->Visible = false;
		textBox13->Visible = false;
		textBox14->Visible = false;
		textBox15->Visible = false;
		textBox16->Visible = false;
		textBox17->Visible = false;
		textBox18->Visible = false;
		textBox19->Visible = false;
		textBox20->Visible = false;
		textBox21->Visible = false;
		textBox22->Visible = false;
		textBox23->Visible = false;
		textBox24->Visible = false;
		textBox25->Visible = true;
		textBox26->Visible = false;
		button14->Visible = false;
		button14->Enabled = false;
		
	}
	
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void displayText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Application::Exit();
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
	   private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		    Bar = 15;
		    checker = false;
		    B2 = false;
		    B3 = false;
		    B4 = false;
		    B5 = false;
		    B6 = false;
		    B7 = false;
		    B8 = false;
		    B9 = false;
		    B10 = false;
		    p1win = false;
		    p2win = false;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = true;
			button10->Enabled = true;
		   button2->Text = "";
		   button3->Text = "";
		   button4->Text = "";
		   button5->Text = "";
		   button6->Text = "";
		   button7->Text = "";
		   button8->Text = "";
		   button9->Text = "";
		   button10->Text = "";
		   textBox1->Hide();
		   textBox2->Visible = false;
		   textBox3->Visible = false;
		   textBox4->Visible = false;
		   textBox5->Visible = false;
		   textBox6->Visible = false;
		   textBox13->Visible = false;
		   textBox14->Visible = false;
		   textBox15->Visible = false;
		   textBox16->Visible = false;
		   textBox17->Visible = false;
		   textBox18->Visible = false;
		   textBox19->Visible = false;
		   textBox20->Visible = false;
		   textBox21->Visible = false;
		   textBox22->Visible = false;
		   textBox23->Visible = false;
		   textBox24->Visible = false;
		   textBox25->Visible = true;
		   textBox26->Visible = false;

		   button14->Visible = false;
		   button14->Enabled = false;
		   try {
			   System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			   player->SoundLocation = "Sound2.wav";
			   player->Stop();
			   
		   }
		   catch (Win32Exception^ ex) {
			   MessageBox::Show(ex->Message);
		   }
		   try {
			   System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			   player->SoundLocation = "Sound.wav";
			   player->Load();
			   player->PlayLooping();
		   }
		   catch (Win32Exception^ ex) {
			   MessageBox::Show(ex->Message);
		   }
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (B2 == false) {
		
		if (checker == false) {
			Bar++;
			button2->Text = "X";
			checker = true;
			B2 = true;
			textBox1->Visible=false;
			textBox25->Visible = false;
			textBox26->Visible = true;
		}
		else if (checker == true) {
			Bar++;
			button2->Text = "O";
			checker = false;
			B2 = true;
			textBox1->Visible = false;
			textBox25->Visible = true;
			textBox26->Visible = false;
		}
	}
	else {
		textBox1->Visible = true;
	}
	if (button2->Text == "X" && button3->Text == "X" && button4->Text == "X" || button7->Text == "X" && button6->Text == "X" && button5->Text == "X" || button10->Text == "X" && button9->Text == "X" && button8->Text == "X" || button2->Text == "X" && button7->Text == "X" && button10->Text == "X" || button3->Text == "X" && button6->Text == "X" && button9->Text == "X" || button4->Text == "X" && button5->Text == "X" && button8->Text == "X" || button2->Text == "X" && button6->Text == "X" && button8->Text == "X" || button4->Text == "X"&& button6->Text == "X"&& button10->Text == "X")
	{
		
		p1win = true;
		counterThree1++;
		counterThree2 = 0;
		textBox3->Show();
		label1->Text = p1wincount + "";
		p1wincount++;
		label6->Text = p1score + "";
		p1score+=10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		


		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree1 == 3) {
		textBox3->Hide();
		textBox6->Show();
		counterThree1 = 0;
		label2->Text = p1Hattrickcount + "";
		p1Hattrickcount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (button2->Text == "O" && button3->Text == "O" && button4->Text == "O" || button7->Text == "O" && button6->Text == "O" && button5->Text == "O" || button10->Text == "O" && button9->Text == "O" && button8->Text == "O" || button2->Text == "O" && button7->Text == "O" && button10->Text == "O" || button3->Text == "O" && button6->Text == "O" && button9->Text == "O" || button4->Text == "O" && button5->Text == "O" && button8->Text == "O" || button2->Text == "O" && button6->Text == "O" && button8->Text == "O" || button4->Text == "O" && button6->Text == "O" && button10->Text == "O")
	{
		p2win = true;
		textBox4->Show();
		label3->Text = p2wincount + "";
		p2wincount++;
		label7->Text = p2score + "";
		p2score += 10;
		counterThree1 = 0;
		counterThree2++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree2 == 3) {
		textBox3->Hide();
		textBox5->Show();
		counterThree2 = 0;
		label4->Text = p2Hattrickcount + "";
		p2Hattrickcount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

	if (B2 == true && B3 == true && B4 == true && B5 == true && B6 == true && B7 == true && B8 == true && B9 == true && B10 == true && p1win == false && p2win == false) {
		textBox2->Show();
		label5->Text = drawcount + "";
		drawcount++;
		counterThree1 = 0;
		counterThree2 = 0;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (Bar > 15) {
		if(Bar==16)
		textBox16->Visible = true;
		else if (Bar == 17)
			textBox17->Visible = true;
		else if (Bar == 18)
			textBox18->Visible = true;
		else if (Bar == 19)
			textBox19->Visible = true;
		else if (Bar == 20)
			textBox20->Visible = true;
		else if (Bar == 21)
			textBox21->Visible = true;
		else if (Bar == 22)
			textBox22->Visible = true;
		else if (Bar == 23)
			textBox23->Visible = true;
		else if (Bar == 24)
			textBox24->Visible = true;
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (B8 == false) {
		
		if (checker == false) {
			button8->Text = "X";
			checker = true;
			B8 = true;
			textBox1->Visible = false;
			Bar++; 
			textBox25->Visible = false;
			textBox26->Visible = true;
		}
		else if (checker == true) {
			button8->Text = "O";
			checker = false;
			B8 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = true;
			textBox26->Visible = false;
		}
	}
	else {
		textBox1->Visible = true;
	}
	if (button2->Text == "X" && button3->Text == "X" && button4->Text == "X" || button7->Text == "X" && button6->Text == "X" && button5->Text == "X" || button10->Text == "X" && button9->Text == "X" && button8->Text == "X" || button2->Text == "X" && button7->Text == "X" && button10->Text == "X" || button3->Text == "X" && button6->Text == "X" && button9->Text == "X" || button4->Text == "X" && button5->Text == "X" && button8->Text == "X" || button2->Text == "X" && button6->Text == "X" && button8->Text == "X" || button4->Text == "X" && button6->Text == "X" && button10->Text == "X")
	{
		p1win = true;
		counterThree1++;
		counterThree2 = 0;
		textBox3->Show();
		label1->Text = p1wincount + "";
		p1wincount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree1 == 3) {
		textBox3->Hide();
		textBox6->Show();
		counterThree1 = 0;
		label2->Text = p1Hattrickcount + "";
		p1Hattrickcount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (button2->Text == "O" && button3->Text == "O" && button4->Text == "O" || button7->Text == "O" && button6->Text == "O" && button5->Text == "O" || button10->Text == "O" && button9->Text == "O" && button8->Text == "O" || button2->Text == "O" && button7->Text == "O" && button10->Text == "O" || button3->Text == "O" && button6->Text == "O" && button9->Text == "O" || button4->Text == "O" && button5->Text == "O" && button8->Text == "O" || button2->Text == "O" && button6->Text == "O" && button8->Text == "O" || button4->Text == "O" && button6->Text == "O" && button10->Text == "O")
	{
		p2win = true;
		counterThree1 = 0;
		counterThree2++;
		textBox4->Show();
		label3->Text = p2wincount + "";
		p2wincount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree2 == 3) {
		textBox3->Hide();
		textBox5->Show();
		counterThree2 = 0;
		label4->Text = p2Hattrickcount + "";
		p2Hattrickcount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (B2 == true && B3 == true && B4 == true && B5 == true && B6 == true && B7 == true && B8 == true && B9 == true && B10 == true && p1win == false && p2win == false) {
		textBox2->Show();
		counterThree1 = 0;
		counterThree2 = 0;
		label5->Text = drawcount + "";
		drawcount++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (Bar > 15) {
		if (Bar == 16)
			textBox16->Visible = true;
		else if (Bar == 17)
			textBox17->Visible = true;
		else if (Bar == 18)
			textBox18->Visible = true;
		else if (Bar == 19)
			textBox19->Visible = true;
		else if (Bar == 20)
			textBox20->Visible = true;
		else if (Bar == 21)
			textBox21->Visible = true;
		else if (Bar == 22)
			textBox22->Visible = true;
		else if (Bar == 23)
			textBox23->Visible = true;
		else if (Bar == 24)
			textBox24->Visible = true;
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (B3 == false) {
		if (checker == false) {

			button3->Text = "X";
			checker = true;
			B3 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = false;
			textBox26->Visible = true;
		}
		else if (checker == true) {
			button3->Text = "O";
			checker = false;
			B3 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = true;
			textBox26->Visible = false;
		}
	}
	else {
		textBox1->Visible = true;
	}
	if (button2->Text == "X" && button3->Text == "X" && button4->Text == "X" || button7->Text == "X" && button6->Text == "X" && button5->Text == "X" || button10->Text == "X" && button9->Text == "X" && button8->Text == "X" || button2->Text == "X" && button7->Text == "X" && button10->Text == "X" || button3->Text == "X" && button6->Text == "X" && button9->Text == "X" || button4->Text == "X" && button5->Text == "X" && button8->Text == "X" || button2->Text == "X" && button6->Text == "X" && button8->Text == "X" || button4->Text == "X" && button6->Text == "X" && button10->Text == "X")
	{
		p1win = true;
		textBox3->Show();
		label1->Text = p1wincount + "";
		p1wincount++;
		label6->Text = p1score + "";
		p1score += 10;
		counterThree1++;
		counterThree2 = 0;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree1 == 3) {
		textBox3->Hide();
		textBox6->Show();
		label2->Text = p1Hattrickcount + "";
		p1Hattrickcount++;
		label6->Text = p1score + "";
		p1score += 10;
		counterThree1 = 0;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (button2->Text == "O" && button3->Text == "O" && button4->Text == "O" || button7->Text == "O" && button6->Text == "O" && button5->Text == "O" || button10->Text == "O" && button9->Text == "O" && button8->Text == "O" || button2->Text == "O" && button7->Text == "O" && button10->Text == "O" || button3->Text == "O" && button6->Text == "O" && button9->Text == "O" || button4->Text == "O" && button5->Text == "O" && button8->Text == "O" || button2->Text == "O" && button6->Text == "O" && button8->Text == "O" || button4->Text == "O" && button6->Text == "O" && button10->Text == "O")
	{
		p2win = true;
		textBox4->Show();
		label3->Text = p2wincount + "";
		p2wincount++;
		label7->Text = p2score + "";
		p2score += 10;
		counterThree1 = 0;
		counterThree2++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree2 == 3) {
		textBox3->Hide();
		textBox5->Show();
		counterThree2 = 0;
		label4->Text = p2Hattrickcount + "";
		p2Hattrickcount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (B2 == true && B3 == true && B4 == true && B5 == true && B6 == true && B7 == true && B8 == true && B9 == true && B10 == true && p1win == false && p2win == false) {
		textBox2->Show();
		counterThree1 = 0;
		counterThree2 = 0;
		label5->Text = drawcount + "";
		drawcount++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (Bar > 15) {
		if (Bar == 16)
			textBox16->Visible = true;
		else if (Bar == 17)
			textBox17->Visible = true;
		else if (Bar == 18)
			textBox18->Visible = true;
		else if (Bar == 19)
			textBox19->Visible = true;
		else if (Bar == 20)
			textBox20->Visible = true;
		else if (Bar == 21)
			textBox21->Visible = true;
		else if (Bar == 22)
			textBox22->Visible = true;
		else if (Bar == 23)
			textBox23->Visible = true;
		else if (Bar == 24)
			textBox24->Visible = true;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (B4 == false) {
		if (checker == false) {
			button4->Text = "X";
			checker = true;
			B4 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = false;
			textBox26->Visible = true;
		}
		else if (checker == true) {
			button4->Text = "O";
			B4 = true;
			checker = false;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = true;
			textBox26->Visible = false;
		}
	}
	else {
		textBox1->Visible = true;
	}
	if (button2->Text == "X" && button3->Text == "X" && button4->Text == "X" || button7->Text == "X" && button6->Text == "X" && button5->Text == "X" || button10->Text == "X" && button9->Text == "X" && button8->Text == "X" || button2->Text == "X" && button7->Text == "X" && button10->Text == "X" || button3->Text == "X" && button6->Text == "X" && button9->Text == "X" || button4->Text == "X" && button5->Text == "X" && button8->Text == "X" || button2->Text == "X" && button6->Text == "X" && button8->Text == "X" || button4->Text == "X" && button6->Text == "X" && button10->Text == "X")
	{
		p1win = true;
		counterThree1++;
		counterThree2 = 0;
		textBox3->Show();
		label1->Text = p1wincount + "";
		p1wincount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree1 == 3) {
		textBox3->Hide();
		textBox6->Show();
		counterThree1 = 0;
		label2->Text = p1Hattrickcount + "";
		p1Hattrickcount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (button2->Text == "O" && button3->Text == "O" && button4->Text == "O" || button7->Text == "O" && button6->Text == "O" && button5->Text == "O" || button10->Text == "O" && button9->Text == "O" && button8->Text == "O" || button2->Text == "O" && button7->Text == "O" && button10->Text == "O" || button3->Text == "O" && button6->Text == "O" && button9->Text == "O" || button4->Text == "O" && button5->Text == "O" && button8->Text == "O" || button2->Text == "O" && button6->Text == "O" && button8->Text == "O" || button4->Text == "O" && button6->Text == "O" && button10->Text == "O")
	{
		p2win = true;
		counterThree1 = 0;
		counterThree2++;
		textBox4->Show();
		label3->Text = p2wincount + "";
		p2wincount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree2 == 3) {
		textBox3->Hide();
		textBox5->Show();
		counterThree2 = 0;
		label4->Text = p2Hattrickcount + "";
		p2Hattrickcount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (B2 == true && B3 == true && B4 == true && B5 == true && B6 == true && B7 == true && B8 == true && B9 == true && B10 == true && p1win == false && p2win == false) {
		textBox2->Show();
		counterThree1 = 0;
		counterThree2 = 0;
		label5->Text = drawcount + "";
		drawcount++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (Bar > 15) {
		if (Bar == 16)
			textBox16->Visible = true;
		else if (Bar == 17)
			textBox17->Visible = true;
		else if (Bar == 18)
			textBox18->Visible = true;
		else if (Bar == 19)
			textBox19->Visible = true;
		else if (Bar == 20)
			textBox20->Visible = true;
		else if (Bar == 21)
			textBox21->Visible = true;
		else if (Bar == 22)
			textBox22->Visible = true;
		else if (Bar == 23)
			textBox23->Visible = true;
		else if (Bar == 24)
			textBox24->Visible = true;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (B7 == false) {
		if (checker == false) {
			button7->Text = "X";
			checker = true;
			B7 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = false;
			textBox26->Visible = true;
		}
		else if (checker == true) {
			button7->Text = "O";
			checker = false;
			B7 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = true;
			textBox26->Visible = false;
		}
	}
	else {
		textBox1->Visible = true;
	}
	if (button2->Text == "X" && button3->Text == "X" && button4->Text == "X" || button7->Text == "X" && button6->Text == "X" && button5->Text == "X" || button10->Text == "X" && button9->Text == "X" && button8->Text == "X" || button2->Text == "X" && button7->Text == "X" && button10->Text == "X" || button3->Text == "X" && button6->Text == "X" && button9->Text == "X" || button4->Text == "X" && button5->Text == "X" && button8->Text == "X" || button2->Text == "X" && button6->Text == "X" && button8->Text == "X" || button4->Text == "X" && button6->Text == "X" && button10->Text == "X")
	{
		p1win = true;
		textBox3->Show();
		label1->Text = p1wincount + "";
		p1wincount++;
		label6->Text = p1score + "";
		p1score += 10;
		counterThree1++;
		counterThree2 = 0;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree1 == 3) {
		textBox3->Hide();
		textBox6->Show();
		counterThree1 = 0;
		label2->Text = p1Hattrickcount + "";
		p1Hattrickcount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (button2->Text == "O" && button3->Text == "O" && button4->Text == "O" || button7->Text == "O" && button6->Text == "O" && button5->Text == "O" || button10->Text == "O" && button9->Text == "O" && button8->Text == "O" || button2->Text == "O" && button7->Text == "O" && button10->Text == "O" || button3->Text == "O" && button6->Text == "O" && button9->Text == "O" || button4->Text == "O" && button5->Text == "O" && button8->Text == "O" || button2->Text == "O" && button6->Text == "O" && button8->Text == "O" || button4->Text == "O" && button6->Text == "O" && button10->Text == "O")
	{
		p2win = true;
		counterThree1 = 0;
		counterThree2++;
		textBox4->Show();
		label3->Text = p2wincount + "";
		p2wincount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree2 == 3) {
		textBox3->Hide();
		textBox5->Show();
		counterThree2 = 0;
		label4->Text = p2Hattrickcount + "";
		p2Hattrickcount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (B2 == true && B3 == true && B4 == true && B5 == true && B6 == true && B7 == true && B8 == true && B9 == true && B10 == true && p1win == false && p2win == false) {
		textBox2->Show();
		counterThree1 = 0;
		counterThree2 = 0;
		label5->Text = drawcount + "";
		drawcount++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (Bar > 15) {
		if (Bar == 16)
			textBox16->Visible = true;
		else if (Bar == 17)
			textBox17->Visible = true;
		else if (Bar == 18)
			textBox18->Visible = true;
		else if (Bar == 19)
			textBox19->Visible = true;
		else if (Bar == 20)
			textBox20->Visible = true;
		else if (Bar == 21)
			textBox21->Visible = true;
		else if (Bar == 22)
			textBox22->Visible = true;
		else if (Bar == 23)
			textBox23->Visible = true;
		else if (Bar == 24)
			textBox24->Visible = true;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (B6 == false) {
		if (checker == false) {
			button6->Text = "X";
			checker = true;
			B6 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = false;
			textBox26->Visible = true;
		}
		else if (checker == true) {
			button6->Text = "O";
			checker = false;
			B6 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = true;
			textBox26->Visible = false;
		}
	}
	else {
		textBox1->Visible = true;
	}
	if (button2->Text == "X" && button3->Text == "X" && button4->Text == "X" || button7->Text == "X" && button6->Text == "X" && button5->Text == "X" || button10->Text == "X" && button9->Text == "X" && button8->Text == "X" || button2->Text == "X" && button7->Text == "X" && button10->Text == "X" || button3->Text == "X" && button6->Text == "X" && button9->Text == "X" || button4->Text == "X" && button5->Text == "X" && button8->Text == "X" || button2->Text == "X" && button6->Text == "X" && button8->Text == "X" || button4->Text == "X" && button6->Text == "X" && button10->Text == "X")
	{
		p1win = true;
		textBox3->Show();
		label1->Text = p1wincount + "";
		p1wincount++;
		label6->Text = p1score + "";
		p1score += 10;
		counterThree1++;
		counterThree2=0;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree1 == 3) {
		textBox3->Hide();
		textBox6->Show();
		counterThree1 = 0;
		label2->Text = p1Hattrickcount + "";
		p1Hattrickcount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (button2->Text == "O" && button3->Text == "O" && button4->Text == "O" || button7->Text == "O" && button6->Text == "O" && button5->Text == "O" || button10->Text == "O" && button9->Text == "O" && button8->Text == "O" || button2->Text == "O" && button7->Text == "O" && button10->Text == "O" || button3->Text == "O" && button6->Text == "O" && button9->Text == "O" || button4->Text == "O" && button5->Text == "O" && button8->Text == "O" || button2->Text == "O" && button6->Text == "O" && button8->Text == "O" || button4->Text == "O" && button6->Text == "O" && button10->Text == "O")
	{
		p2win = true;
		counterThree1 = 0;
		counterThree2++;
		textBox4->Show();
		label3->Text = p2wincount + "";
		p2wincount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree2 == 3) {
		textBox3->Hide();
		textBox5->Show();
		counterThree2 = 0;
		label4->Text = p2Hattrickcount + "";
		p2Hattrickcount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (B2 == true && B3 == true && B4 == true && B5 == true && B6 == true && B7 == true && B8 == true && B9 == true && B10 == true && p1win == false && p2win == false) {
		textBox2->Show();
		counterThree1 = 0;
		counterThree2 = 0;
		label5->Text = drawcount + "";
		drawcount++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (Bar > 15) {
		if (Bar == 16)
			textBox16->Visible = true;
		else if (Bar == 17)
			textBox17->Visible = true;
		else if (Bar == 18)
			textBox18->Visible = true;
		else if (Bar == 19)
			textBox19->Visible = true;
		else if (Bar == 20)
			textBox20->Visible = true;
		else if (Bar == 21)
			textBox21->Visible = true;
		else if (Bar == 22)
			textBox22->Visible = true;
		else if (Bar == 23)
			textBox23->Visible = true;
		else if (Bar == 24)
			textBox24->Visible = true;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (B5 == false) {
		if (checker == false) {
			button5->Text = "X";
			checker = true;
			B5 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = false;
			textBox26->Visible = true;
		}
		else if (checker == true) {
			button5->Text = "O";
			B5 = true;
			checker = false;
			Bar++;
			textBox25->Visible = true;
			textBox26->Visible = false;
		}
	}
	else {
		textBox1->Visible = true;
	}
	if (button2->Text == "X" && button3->Text == "X" && button4->Text == "X" || button7->Text == "X" && button6->Text == "X" && button5->Text == "X" || button10->Text == "X" && button9->Text == "X" && button8->Text == "X" || button2->Text == "X" && button7->Text == "X" && button10->Text == "X" || button3->Text == "X" && button6->Text == "X" && button9->Text == "X" || button4->Text == "X" && button5->Text == "X" && button8->Text == "X" || button2->Text == "X" && button6->Text == "X" && button8->Text == "X" || button4->Text == "X" && button6->Text == "X" && button10->Text == "X")
	{
		p1win = true;
		textBox3->Show();
		label1->Text = p1wincount + "";
		p1wincount++;
		label6->Text = p1score + "";
		p1score += 10;
		counterThree1++;
		counterThree2 = 0;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree1 == 3) {
		textBox3->Hide();
		textBox6->Show();
		counterThree1 = 0;
		label2->Text = p1Hattrickcount + "";
		p1Hattrickcount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (button2->Text == "O" && button3->Text == "O" && button4->Text == "O" || button7->Text == "O" && button6->Text == "O" && button5->Text == "O" || button10->Text == "O" && button9->Text == "O" && button8->Text == "O" || button2->Text == "O" && button7->Text == "O" && button10->Text == "O" || button3->Text == "O" && button6->Text == "O" && button9->Text == "O" || button4->Text == "O" && button5->Text == "O" && button8->Text == "O" || button2->Text == "O" && button6->Text == "O" && button8->Text == "O" || button4->Text == "O" && button6->Text == "O" && button10->Text == "O")
	{
		p2win = true;
		textBox4->Show();
		counterThree1 = 0;
		counterThree2++;
		label3->Text = p2wincount + "";
		p2wincount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree2 == 3) {
		textBox3->Hide();
		textBox5->Show();
		counterThree2 = 0;
		label4->Text = p2Hattrickcount + "";
		p2Hattrickcount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (B2 == true && B3 == true && B4 == true && B5 == true && B6 == true && B7 == true && B8 == true && B9 == true && B10 == true && p1win == false && p2win == false) {
		textBox2->Show();
		counterThree1 = 0;
		counterThree2 = 0;
		label5->Text = drawcount + "";
		drawcount++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (Bar > 15) {
		if (Bar == 16)
			textBox16->Visible = true;
		else if (Bar == 17)
			textBox17->Visible = true;
		else if (Bar == 18)
			textBox18->Visible = true;
		else if (Bar == 19)
			textBox19->Visible = true;
		else if (Bar == 20)
			textBox20->Visible = true;
		else if (Bar == 21)
			textBox21->Visible = true;
		else if (Bar == 22)
			textBox22->Visible = true;
		else if (Bar == 23)
			textBox23->Visible = true;
		else if (Bar == 24)
			textBox24->Visible = true;
	}
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (B10 == false) {
		if (checker == false) {
			button10->Text = "X";
			checker = true;
			B10 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = false;
			textBox26->Visible = true;
		}
		else if (checker == true) {
			button10->Text = "O";
			checker = false;
			B10 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = true;
			textBox26->Visible = false;
		}
	}
	else {
		textBox1->Visible = true;
	}
	if (button2->Text == "X" && button3->Text == "X" && button4->Text == "X" || button7->Text == "X" && button6->Text == "X" && button5->Text == "X" || button10->Text == "X" && button9->Text == "X" && button8->Text == "X" || button2->Text == "X" && button7->Text == "X" && button10->Text == "X" || button3->Text == "X" && button6->Text == "X" && button9->Text == "X" || button4->Text == "X" && button5->Text == "X" && button8->Text == "X" || button2->Text == "X" && button6->Text == "X" && button8->Text == "X" || button4->Text == "X" && button6->Text == "X" && button10->Text == "X")
	{
		p1win = true;
		counterThree1++;
		counterThree2 = 0;
		textBox3->Show();
		label1->Text = p1wincount + "";
		p1wincount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree1 == 3) {
		textBox3->Hide();
		textBox6->Show();
		counterThree1 = 0;
		label2->Text = p1Hattrickcount + "";
		p1Hattrickcount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (button2->Text == "O" && button3->Text == "O" && button4->Text == "O" || button7->Text == "O" && button6->Text == "O" && button5->Text == "O" || button10->Text == "O" && button9->Text == "O" && button8->Text == "O" || button2->Text == "O" && button7->Text == "O" && button10->Text == "O" || button3->Text == "O" && button6->Text == "O" && button9->Text == "O" || button4->Text == "O" && button5->Text == "O" && button8->Text == "O" || button2->Text == "O" && button6->Text == "O" && button8->Text == "O" || button4->Text == "O" && button6->Text == "O" && button10->Text == "O")
	{
		p2win = true;
		textBox4->Show();
		label3->Text = p2wincount + "";
		p2wincount++;
		label7->Text = p2score + "";
		p2score += 10;
		counterThree1 = 0;
		counterThree2++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree2 == 3) {
		textBox3->Hide();
		textBox5->Show();
		counterThree2 = 0;
		label4->Text = p2Hattrickcount + "";
		p2Hattrickcount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (B2 == true && B3 == true && B4 == true && B5 == true && B6 == true && B7 == true && B8 == true && B9 == true && B10 == true && p1win == false && p2win == false) {
		textBox2->Show();
		counterThree1 = 0;
		counterThree2 = 0;
		label5->Text = drawcount + "";
		drawcount++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (Bar > 15) {
		if (Bar == 16)
			textBox16->Visible = true;
		else if (Bar == 17)
			textBox17->Visible = true;
		else if (Bar == 18)
			textBox18->Visible = true;
		else if (Bar == 19)
			textBox19->Visible = true;
		else if (Bar == 20)
			textBox20->Visible = true;
		else if (Bar == 21)
			textBox21->Visible = true;
		else if (Bar == 22)
			textBox22->Visible = true;
		else if (Bar == 23)
			textBox23->Visible = true;
		else if (Bar == 24)
			textBox24->Visible = true;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (B9 == false) {
		if (checker == false) {
			button9->Text = "X";
			checker = true;
			B9 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = false;
			textBox26->Visible = true;
		}
		else if (checker == true) {
			button9->Text = "O";
			checker = false;
			B9 = true;
			textBox1->Visible = false;
			Bar++;
			textBox25->Visible = true;
			textBox26->Visible = false;
		}
	}
	else {
		textBox1->Visible = true;
	}
	if (button2->Text == "X" && button3->Text == "X" && button4->Text == "X" || button7->Text == "X" && button6->Text == "X" && button5->Text == "X" || button10->Text == "X" && button9->Text == "X" && button8->Text == "X" || button2->Text == "X" && button7->Text == "X" && button10->Text == "X" || button3->Text == "X" && button6->Text == "X" && button9->Text == "X" || button4->Text == "X" && button5->Text == "X" && button8->Text == "X" || button2->Text == "X" && button6->Text == "X" && button8->Text == "X" || button4->Text == "X" && button6->Text == "X" && button10->Text == "X")
	{
		p1win = true;
		textBox3->Show();
		label1->Text = p1wincount + "";
		p1wincount++;
		label6->Text = p1score + "";
		p1score += 10;
		counterThree1++;
		counterThree2 = 0;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree1 == 3) {
		textBox3->Hide();
		textBox6->Show();
		counterThree1 = 0;
		label2->Text = p1Hattrickcount + "";
		p1Hattrickcount++;
		label6->Text = p1score + "";
		p1score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	if (button2->Text == "O" && button3->Text == "O" && button4->Text == "O" || button7->Text == "O" && button6->Text == "O" && button5->Text == "O" || button10->Text == "O" && button9->Text == "O" && button8->Text == "O" || button2->Text == "O" && button7->Text == "O" && button10->Text == "O" || button3->Text == "O" && button6->Text == "O" && button9->Text == "O" || button4->Text == "O" && button5->Text == "O" && button8->Text == "O" || button2->Text == "O" && button6->Text == "O" && button8->Text == "O" || button4->Text == "O" && button6->Text == "O" && button10->Text == "O")
	{
		p2win = true;
		textBox4->Show();
		label3->Text = p2wincount + "";
		p2wincount++;
		label7->Text = p2score + "";
		p2score += 10;
		counterThree1 = 0;
		counterThree2++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (counterThree2 == 3) {
		textBox3->Hide();
		textBox5->Show();
		counterThree2 = 0;
		label4->Text = p2Hattrickcount + "";
		p2Hattrickcount++;
		label7->Text = p2score + "";
		p2score += 10;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;



		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";

			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound3.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	
	if (B2 == true && B3 == true && B4 == true && B5 == true && B6 == true && B7 == true && B8 == true && B9 == true && B10 == true && p1win == false && p2win == false) {
		textBox2->Show();
		counterThree1 = 0;
		counterThree2 = 0;
		label5->Text = drawcount + "";
		drawcount++;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";
			
			player->Stop();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound2.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	if (Bar > 15) {
		if (Bar == 16)
			textBox16->Visible = true;
		else if (Bar == 17)
			textBox17->Visible = true;
		else if (Bar == 18)
			textBox18->Visible = true;
		else if (Bar == 19)
			textBox19->Visible = true;
		else if (Bar == 20)
			textBox20->Visible = true;
		else if (Bar == 21)
			textBox21->Visible = true;
		else if (Bar == 22)
			textBox22->Visible = true;
		else if (Bar == 23)
			textBox23->Visible = true;
		else if (Bar == 24)
			textBox24->Visible = true;
	}
}
	  
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox23_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox22_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox21_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox20_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox25_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
   	 Bar = 15;
	 counterThree1=0, counterThree2=0;
	 p1wincount = 1;
	 p1Hattrickcount = 1;
	 p2wincount = 1;
	 p2Hattrickcount = 1;
	 drawcount = 1;
	 p1score = 10;
	 p2score = 10;
	 endgame1 = 1;
	 endgame2 = 1;
	 label1->Text = "0";
	 label2->Text = "0";
	 label3->Text = "0";
	 label4->Text = "0";
	 label5->Text = "0";
	 label6->Text = "0";
	 label7->Text = "0";

	checker = false;
	B2 = false;
	B3 = false;
	B4 = false;
	B5 = false;
	B6 = false;
	B7 = false;
	B8 = false;
	B9 = false;
	B10 = false;
	p1win = false;
	p2win = false;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
	button10->Enabled = true;
	button1->Enabled = true;
	button11->Enabled = true;
	button12->Enabled = true;
	button13->Enabled = true;
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";
	button10->Text = "";
	textBox1->Hide();
	textBox2->Visible = false;
	textBox3->Visible = false;
	textBox4->Visible = false;
	textBox5->Visible = false;
	textBox6->Visible = false;
	textBox13->Visible = false;
	textBox14->Visible = false;
	textBox15->Visible = false;
	textBox16->Visible = false;
	textBox17->Visible = false;
	textBox18->Visible = false;
	textBox19->Visible = false;
	textBox20->Visible = false;
	textBox21->Visible = false;
	textBox22->Visible = false;
	textBox23->Visible = false;
	textBox24->Visible = false;
	textBox25->Visible = true;
	textBox26->Visible = false;
	label9->Text = "0 : 0";
	Second = 0;
	Minute = 0;
	timer2->Start();

	button14->Visible = false;
	button14->Enabled = false;
	try {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "Sound2.wav";
		player->Stop();

	}
	catch (Win32Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	try {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "Sound.wav";
		player->Load();
		player->PlayLooping();
	}
	catch (Win32Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

 }
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	timer2->Stop();
	if (p1score > p2score) {
		textBox13->Visible = true;
		button14->Visible = true;
		button14->Enabled = true;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		button1->Enabled = false;
		button11->Enabled = false;
		button12->Enabled = false;
		button13->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound4.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else if (p2score > p1score) {
		textBox14->Visible = true;
		button14->Visible = true;
		button14->Enabled = true;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		button1->Enabled = false;
		button11->Enabled = false;
		button12->Enabled = false;
		button13->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound4.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else {
		textBox15->Visible = true;
		button14->Visible = true;
		button14->Enabled = true;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		button1->Enabled = false;
		button11->Enabled = false;
		button12->Enabled = false;
		button13->Enabled = false;
		try {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound4.wav";
			player->Load();
			player->PlayLooping();
		}
		catch (Win32Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}






private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime datetime = DateTime::Now;
	this->label8->Text = datetime.ToString();
	
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	Second++;
	if (Second == 60) {
		Second = 0;
		Minute++;
	}
	Sec = Convert::ToString(Second);
	Min = Convert::ToString(Minute);
	label9->Text = Min + " : " + Sec;
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
