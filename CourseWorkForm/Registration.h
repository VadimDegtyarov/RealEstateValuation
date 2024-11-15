#pragma once
#include <Windows.h>
#include <MMSystem.h>
#define SOUND_RESOURCE "SystemExclamation"
#include "Functions.h"

namespace CourseWorkForm {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CourseWorkForm;
	
	public ref class Registration : public System::Windows::Forms::Form 
	{

	public:
		Form^ obj;
		Registration(Void)
		{
			InitializeComponent();
			
		}
		Registration(Form ^reg)
		{
			obj = reg;
			InitializeComponent();

		}
		
	protected:
		
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;

	protected:

	private:
		
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 38.85F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(64, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registration";
			this->label1->Click += gcnew System::EventHandler(this, &Registration::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.85F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(71, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.85F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(71, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Confirm the password";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Snow;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.55F));
			this->textBox1->Location = System::Drawing::Point(76, 222);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 19);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Registration::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Snow;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.55F));
			this->textBox2->Location = System::Drawing::Point(76, 339);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 19);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Registration::textBox2_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 10));
			this->checkBox1->Location = System::Drawing::Point(76, 364);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(123, 23);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Show password";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Registration::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(76, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"registration";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(98, 478);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(130, 458);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Or";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Snow;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.55F));
			this->textBox3->Location = System::Drawing::Point(76, 289);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(175, 19);
			this->textBox3->TabIndex = 10;
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Registration::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.85F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(71, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Password";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 3;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(546, 459);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 54);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Registration::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(71, 388);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(351, 23);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Пароли не совпадают, повторите попытку";
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &Registration::label6_Click);
			// 
			// Registration
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(773, 561);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Приложение для автоматизированной оценки недвижимости";
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		bool button1_Clicked=true;
		if (textBox2->Text != textBox3->Text)
		{
			PlaySound(L"SystemExclamation", GetModuleHandle(NULL), SND_ALIAS | SND_ASYNC);

			label6->Show();
		}
		else
		{
			label6->Hide();
			Functions^ FuncUserDB = gcnew Functions();
			FuncUserDB->Insert(textBox1->Text, textBox3->Text,false);
			
			this->Hide();
			
			obj->Show();
			
			
		}
		
		
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			textBox2->UseSystemPasswordChar = true;
		}
		else
		{
			textBox2->UseSystemPasswordChar = false;
			
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
	

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Application::Exit();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Registration_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
	
}
