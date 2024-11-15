#pragma once
#include "Registration.h"
#include"Header.h"
#include"MainWindow1.h"


namespace CourseWorkForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace Library;
	
	public ref class Sign : public System::Windows::Forms::Form 
	{
		CourseWorkForm::UserFrom^ user;
	private:int userID;
		   
	public:
		Sign(void)
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
		~Sign()
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

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Sign::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 38.85F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(64, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in";
			this->label1->Click += gcnew System::EventHandler(this, &Sign::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.85F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(71, 247);
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
			this->label3->Size = System::Drawing::Size(87, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Snow;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.55F));
			this->textBox1->Location = System::Drawing::Point(76, 275);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 19);
			this->textBox1->TabIndex = 3;
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
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Sign::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(76, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Sign::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(119, 458);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Or";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(76, 488);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 35);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Registration";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Sign::button3_Click);
			// 
			// Sign
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(773, 561);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
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
			this->Name = L"Sign";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Приложение для автоматизированной оценки недвижимости";
			this->Load += gcnew System::EventHandler(this, &Sign::Sign_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ enteredUsername = textBox1->Text;
		String^ enteredPassword = textBox2->Text;

		Functions^ functions = gcnew Functions();

		try {
			functions->ConnectToDB();

			String^ cmdText = "SELECT ID, Userrole FROM dbo.UsersApp WHERE Login = @Login AND Password = @Password";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, functions->GetConnection());
			cmd->Parameters->AddWithValue("@Login", enteredUsername);
			cmd->Parameters->AddWithValue("@Password", enteredPassword);

			SqlDataReader^ reader = cmd->ExecuteReader();

			if (reader->Read()) {
				int idColumnIndex = reader->GetOrdinal("ID");
				int userRoleColumnIndex = reader->GetOrdinal("Userrole");

				if (idColumnIndex != -1 && userRoleColumnIndex != -1 &&
					!reader->IsDBNull(idColumnIndex) && !reader->IsDBNull(userRoleColumnIndex)) {
					UserFrom^ user=gcnew UserFrom();
				
					

					
					user->setLogin(enteredUsername);
					user->setPass(enteredPassword);
					
					
					int userRoleValue = reader->GetInt32(userRoleColumnIndex);
					bool userRole = userRoleValue; 
					user->setRole(userRole);
					user->SetuserID(reader->GetInt32(idColumnIndex));

					CourseWorkForm::MainWindow1^ mainw = gcnew CourseWorkForm::MainWindow1(user);
					mainw->Show();
					this->Hide();
				}
				else {
					MessageBox::Show("Invalid user data", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Incorrect Username or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		finally {
			functions->DisconnectFromDB();
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


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	CourseWorkForm::Registration^ reg = gcnew CourseWorkForm::Registration(this);
	
	this->Hide();
	reg->ShowDialog();

	
}
private: System::Void Sign_Load(System::Object^ sender, System::EventArgs^ e) {
}
	  private: System::Void Sign_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
    if (e->CloseReason == CloseReason::UserClosing) {
        Application::Exit();
    }
}


};
}
