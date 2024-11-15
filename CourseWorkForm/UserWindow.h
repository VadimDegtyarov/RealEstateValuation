	#pragma once

	#include "Header.h"

	namespace CourseWorkForm {

		using namespace System;
		using namespace System::Collections::Generic;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		using namespace System::Net;
		using namespace System::IO;
		using namespace System::Data::SqlClient;
		/// <summary>
		/// Summary for MyForm
		/// </summary>
		public ref class UserWindow : public System::Windows::Forms::Form
		{
		public:
			Form^ objM;
			UserWindow(Void)
			{
				InitializeComponent();
				this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
				this->Location = System::Drawing::Point(250, 700);
				//
				//TODO: Add the constructor code here
				//
			}
			UserWindow(Form^ ObjUs)
			{
				InitializeComponent();
				objM = ObjUs;
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~UserWindow()
			{
				if (components)
				{
					delete components;
				}
			}

		protected:
		public: System::Windows::Forms::Button^ button2;
		public: System::Windows::Forms::Button^ button3;

	
		
		public: 
			bool isButton3Pressed;
			bool IsButton3Pressed() {
				return isButton3Pressed;
			}
			Void getIsButton3Pressed(bool isButton3Pressed)
			{
				this->isButton3Pressed = isButton3Pressed;
			}
			Void getIsButton2Pressed(bool isButton2Pressed)
			{
				this->isButton2Pressed = isButton2Pressed;
			}
		
			bool isButton2Pressed;
			bool IsButton2Pressed() {
				return isButton2Pressed;
			}








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
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// button2
				// 
				this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold));
				this->button2->Location = System::Drawing::Point(-12, 42);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(225, 49);
				this->button2->TabIndex = 1;
				this->button2->Text = L" Изменить пароль";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &UserWindow::button2_Click);
				// 
				// button3
				// 
				this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold));
				this->button3->Location = System::Drawing::Point(-12, -1);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(225, 49);
				this->button3->TabIndex = 2;
				this->button3->Text = L"Изменить логин";
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &UserWindow::button3_Click);
				// 
				// UserWindow
				// 
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
				this->ClientSize = System::Drawing::Size(207, 90);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->button2);
				this->Cursor = System::Windows::Forms::Cursors::Default;
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				this->Name = L"UserWindow";
				this->Text = L"UserWindow";
				this->ResumeLayout(false);

			}
	#pragma endregion
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			isButton2Pressed = false;
			getIsButton2Pressed(isButton2Pressed);
			isButton3Pressed = true;
			getIsButton3Pressed(isButton3Pressed);
			
			
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Hide();
		}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		isButton3Pressed = false;
		getIsButton3Pressed(isButton3Pressed);
		isButton2Pressed = true;
		getIsButton2Pressed(isButton2Pressed);
		
		
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Hide();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	};
	}
