#pragma once
#include"Addrs.h"
#include"Fullrs.h"
#include"Statistic.h"
#include"UserWindow.h"
#include"Adminmenu.h"
#include"Header.h"
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <windows.h>
#include <sqltypes.h>
#include <sqlext.h>
namespace CourseWorkForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow1 : public System::Windows::Forms::Form
	{

		Fullrs^ rs;

	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label5;
		
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button4;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ textBox2;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ textBox1;
		  UserFrom^ user;



	private: System::Windows::Forms::PictureBox^ pictureBox1;


		   Addrs^ addrs;
	private: System::Windows::Forms::Button^ button5;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;

		   Statistic^ stat;

	public:
		MainWindow1(void)
		{
			InitializeComponent();

			
			rs = gcnew Fullrs();
			
			addrs = gcnew Addrs();

			
			stat = gcnew Statistic();
		}
		MainWindow1(UserFrom^ User)
		{
			InitializeComponent();

			rs = gcnew Fullrs();

			addrs = gcnew Addrs();


			stat = gcnew Statistic();
			this->user = User;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ btnHam;
	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::FlowLayoutPanel^ sidebar;

	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Timer^ sidebarTransition;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;



	private: System::ComponentModel::IContainer^ components;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow1::typeid));
			this->btnHam = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sidebar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->sidebarTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHam))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->sidebar->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnHam
			// 
			this->btnHam->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHam.Image")));
			this->btnHam->Location = System::Drawing::Point(12, 3);
			this->btnHam->Name = L"btnHam";
			this->btnHam->Size = System::Drawing::Size(20, 20);
			this->btnHam->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnHam->TabIndex = 0;
			this->btnHam->TabStop = false;
			this->btnHam->Click += gcnew System::EventHandler(this, &MainWindow1::btnHam_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GrayText;
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnHam);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1062, 29);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(950, 6);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(20, 20);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(980, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(20, 20);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1010, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(20, 20);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainWindow1::pictureBox2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(375, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Приложение по оценке недвижимости";
			this->label1->Click += gcnew System::EventHandler(this, &MainWindow1::label1_Click);
			// 
			// sidebar
			// 
			this->sidebar->BackColor = System::Drawing::SystemColors::ControlLight;
			this->sidebar->Controls->Add(this->panel2);
			this->sidebar->Controls->Add(this->panel3);
			this->sidebar->Controls->Add(this->panel4);
			this->sidebar->Controls->Add(this->panel6);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 29);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Size = System::Drawing::Size(234, 595);
			this->sidebar->TabIndex = 2;
			this->sidebar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainWindow1::sidebar_Paint);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(232, 64);
			this->panel2->TabIndex = 4;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(4, 16);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(25, 25);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(-56, -6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(346, 77);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Оценка недвижимости";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow1::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(3, 73);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(232, 64);
			this->panel3->TabIndex = 5;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(3, 16);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 30);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(-9, -14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(279, 88);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Оцененная недвижимость";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow1::button2_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox7);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Location = System::Drawing::Point(3, 143);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(247, 64);
			this->panel4->TabIndex = 5;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(4, 16);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(25, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(-40, -8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(278, 77);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Статистика рынка";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow1::button3_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button5);
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->textBox1);
			this->panel6->Controls->Add(this->pictureBox1);
			this->panel6->Location = System::Drawing::Point(3, 213);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(218, 382);
			this->panel6->TabIndex = 7;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainWindow1::panel6_Paint);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(76, 333);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 37);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Админ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow1::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(92, 125);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Готово";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow1::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 15);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Введите новый ";
			this->label3->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MainWindow1::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Введите новый ";
			this->label2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainWindow1::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 344);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(26, 26);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainWindow1::pictureBox1_Click);
			// 
			// sidebarTransition
			// 
			this->sidebarTransition->Interval = 10;
			this->sidebarTransition->Tick += gcnew System::EventHandler(this, &MainWindow1::sidebarTransition_Tick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(355, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(556, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Добро пожаловать в приложение по оценке недвижимости!";
			this->label4->Visible = false;
			// 
			// MainWindow1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 624);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->sidebar);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->IsMdiContainer = true;
			this->Name = L"MainWindow1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MainWindow1::MainWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHam))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->sidebar->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		CourseWorkForm::UserWindow^ Userw = gcnew CourseWorkForm::UserWindow(this);
		
	
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
		button5->Visible = static_cast<bool>(user->getRole());

		sidebar->Width = 234;

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sidebar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   bool sidevarExpand = true;
	private: System::Void sidebarTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (sidevarExpand)
		{
			sidebar->Width -= 10;
			if (sidebar->Width <= 35)
			{
				sidevarExpand = false;
				sidebarTransition->Stop();
			}
		}
		else
		{
			sidebar->Width += 10;
			if (sidebar->Width >= 234)
			{
				sidevarExpand = true;
				sidebarTransition->Stop();
			}
		}
	}




	private: System::Void btnHam_Click(System::Object^ sender, System::EventArgs^ e) {
		sidebarTransition->Start();
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!addrs->Created)
		{
			addrs->MdiParent = this;
			addrs->Show();
			this->Activate();
		}
		else
		{
			addrs->Activate();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		rs = gcnew Fullrs();
		rs->MdiParent = this;
		rs->Show();
		this->Activate();


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
			stat = gcnew Statistic();
			stat->MdiParent = this;
			stat->Show();
			this->Activate();


	}
		  
		 
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

		

		
		Userw->Show();
		this->Activate();
		
			if (Userw->IsButton3Pressed()) {
				ReplaceLogin();
			}
			else if (Userw->IsButton2Pressed()) {
				replacePass();
			}
		
	}

	private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   Void ReplaceLogin()
		   {
			   
			   this->textBox1->Visible = false;
			   this->label2->Visible = false;
			   
			   this->textBox2->Visible = false;
			   this->label3->Visible = false;
			   this->button4->Visible = false;

			   this->textBox1->Visible = true;
			   this->label2->Visible = true;
			   this->label2->Text = "Введите новый Логин:";
			   this->button4->Visible = true;
			  
		   }
		   Void replacePass()
		   {
			   this->textBox1->Visible = false;
			   this->label2->Visible = false;
			   this->button4->Visible = false;

			   this->label2->Text = "Введите новый Пароль:";
			   this->textBox1->Visible = true;
			   this->label2->Visible = true;
			   this->label3->Text = "Повторите Пароль:";
			   this->textBox2->Visible = true;
			   this->label3->Visible = true;
			   this->button4->Visible = true;

		   }

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	


		
		
			if (Userw->IsButton3Pressed()) {

				String^ newLogin = this->textBox1->Text;
				String^ nowLogin = user->GetLogin();
				int^ Id = user->GetuserID();

				if (!String::IsNullOrEmpty(newLogin) && nowLogin != nullptr) {
					SqlConnection^ conn;
					SqlConnectionStringBuilder^ connStringBuilder = gcnew SqlConnectionStringBuilder();
					connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2";
					connStringBuilder->InitialCatalog = "UsersApp";
					connStringBuilder->IntegratedSecurity = true;
					conn = gcnew SqlConnection(connStringBuilder->ConnectionString);

					try {
						conn->Open();

						String^ query = "UPDATE UsersApp SET Login = @NewLogin WHERE Login=@NowLogin AND ID = @Id";
						SqlCommand^ command = gcnew SqlCommand(query, conn);

						command->Parameters->Add("@NewLogin", System::Data::SqlDbType::NVarChar)->Value = newLogin;
						command->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = Id;
						command->Parameters->Add("@NowLogin", System::Data::SqlDbType::NVarChar)->Value = nowLogin;


						command->ExecuteNonQuery();

						MessageBox::Show("Логин успешно изменен", "Изменение логина", MessageBoxButtons::OK, MessageBoxIcon::Information);
						this->textBox1->Visible = false;
						this->label2->Visible = false;
						this->button4->Visible = false;
					}
					catch (Exception^ ex) {
						MessageBox::Show("Произошла ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					finally {
						conn->Close();
					}
				}

			}
			else if (Userw->IsButton2Pressed()) {

				String^ newPass = this->textBox2->Text;

				String^ nowPass = user->GetPass();
				int^ Id = user->GetuserID();
				if (!String::IsNullOrEmpty(newPass)) {

					SqlConnection^ conn;
					SqlConnectionStringBuilder^ connStringBuilder = gcnew SqlConnectionStringBuilder();
					connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2";
					connStringBuilder->InitialCatalog = "UsersApp";
					connStringBuilder->IntegratedSecurity = true;
					conn = gcnew SqlConnection(connStringBuilder->ConnectionString);

					try {

						conn->Open();


						String^ query = "UPDATE UsersApp SET Password = @NewPass WHERE Password=@NowPass AND ID = @Id";
						SqlCommand^ command = gcnew SqlCommand(query, conn);


						

						command->Parameters->Add("@NewPass", System::Data::SqlDbType::NVarChar)->Value = newPass;
						command->Parameters->Add("@Id", System::Data::SqlDbType::Int)->Value = Id;
						command->Parameters->Add("@NowPass", System::Data::SqlDbType::NVarChar)->Value = nowPass;


						command->ExecuteNonQuery();
						if (this->textBox1->Text == this->textBox2->Text) {
							MessageBox::Show("Пароль успешно изменен", "Изменение Пароля", MessageBoxButtons::OK, MessageBoxIcon::Information);
							this->textBox1->Visible = false;
							this->label2->Visible = false;

							this->textBox2->Visible = false;
							this->label3->Visible = false;
							this->button4->Visible = false;
						}
						else {
							MessageBox::Show("Пароли не совпадают", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Information);

						}
					}
					catch (Exception^ ex) {
						MessageBox::Show("Произошла ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					finally {

						conn->Close();
					}
				}
			}
		
	}
	Adminmenu^ AdmMenu ;
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		AdmMenu = gcnew Adminmenu();

		AdmMenu->MdiParent = this;
		AdmMenu->Show();
		this->Activate();
	}
};
}
