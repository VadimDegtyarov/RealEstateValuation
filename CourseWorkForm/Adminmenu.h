#pragma once
#include <vector>
#include <algorithm>
#include <list>
namespace CourseWorkForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Library;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Adminmenu
	/// </summary>
	public ref class Adminmenu : public System::Windows::Forms::Form
	{

	public:
		
		Adminmenu(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Location = System::Drawing::Point(0, 0);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Adminmenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ SizeNedv;
	private: System::Windows::Forms::Button^ button1;
	private: Library::UsersForAdmin^ newUserControl;
		   Library::UsersForAdmin^ userControl;
	protected:

	private:

		bool ascendingOrder;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminmenu::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SizeNedv = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::Control;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->flowLayoutPanel1->Location = System::Drawing::Point(147, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(672, 588);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Adminmenu::flowLayoutPanel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 25);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// SizeNedv
			// 
			this->SizeNedv->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SizeNedv->Location = System::Drawing::Point(35, 52);
			this->SizeNedv->Name = L"SizeNedv";
			this->SizeNedv->Size = System::Drawing::Size(106, 22);
			this->SizeNedv->TabIndex = 16;
			this->SizeNedv->Text = L"Поиск...";
			this->SizeNedv->TextChanged += gcnew System::EventHandler(this, &Adminmenu::SizeNedv_TextChanged_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(4, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 34);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Сортировка по названию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Adminmenu::button1_Click);
			// 
			// Adminmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(819, 588);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->SizeNedv);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Adminmenu";
			this->Text = L"Adminmenu";
			this->Load += gcnew System::EventHandler(this, &Adminmenu::Adminmenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}
	private: System::Void Adminmenu_Load(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ conn;
		try {
			SqlConnectionStringBuilder^ connStringBuilder;
			connStringBuilder = gcnew SqlConnectionStringBuilder();
			connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2";
			connStringBuilder->InitialCatalog = "UsersApp";
			connStringBuilder->IntegratedSecurity = true;
			conn = gcnew SqlConnection(connStringBuilder->ConnectionString);
			String^ query = "SELECT * FROM UsersApp";
			SqlCommand^ command = gcnew SqlCommand(query, conn);
			conn->Open();
			SqlDataReader^ reader = command->ExecuteReader();

			bool userRole; 
			
			int i = 0;
			while (reader->Read()) {
				String^ name = safe_cast<String^>(reader["Login"]);

				Library::UsersForAdmin^ newUserControl = gcnew Library::UsersForAdmin();
				int userRoleColumnIndex = reader->GetOrdinal("Userrole");
				int userRoleValue = reader->GetInt32(userRoleColumnIndex);
				userRole = (userRoleValue != 0); 
				newUserControl->SetRoleUser(userRole);

				newUserControl->SetNameUser(name);
				
				int idColumnIndex = reader->GetOrdinal("ID");
				newUserControl->SetIdUser(reader->GetInt32(idColumnIndex));
				this->flowLayoutPanel1->Controls->Add(newUserControl);
			}
		}
		catch (Exception^ ex) {
			Console::WriteLine("Error loading data: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Library::UsersForAdmin^>^ userControlsList = gcnew List<Library::UsersForAdmin^>();

	
	for each (Control ^ control in flowLayoutPanel1->Controls) {
		if (Library::UsersForAdmin^ userControl = dynamic_cast<Library::UsersForAdmin^>(control)) {
			userControlsList->Add(userControl);
		}
	}

	
	if (ascendingOrder) {
		userControlsList->Sort(gcnew Comparison<Library::UsersForAdmin^>(this, &CourseWorkForm::Adminmenu::CompareMyUserControlsName));
	}
	else {
		userControlsList->Sort(gcnew Comparison<Library::UsersForAdmin^>(this, &CourseWorkForm::Adminmenu::CompareMyUserControlsNameDesc));
	}
	ascendingOrder = !ascendingOrder;
	flowLayoutPanel1->Controls->Clear();

	
	for each (Library::UsersForAdmin ^ userControl in userControlsList) {
		flowLayoutPanel1->Controls->Add(userControl);
	}
}

	   private: int CompareMyUserControlsName(Library::UsersForAdmin^ control1, Library::UsersForAdmin^ control2) {
		   return String::Compare(control1->GetName(), control2->GetName());
	   }

private: int CompareMyUserControlsNameDesc(Library::UsersForAdmin^ control1, Library::UsersForAdmin^ control2) {

	return String::Compare(control2->GetName(), control1->GetName());
}
	  
		   
	   
private: System::Void SizeNedv_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	String^ searchText = SizeNedv->Text->ToLower();


	for each (Control ^ control in flowLayoutPanel1->Controls) {
		control->Visible = true;
	}

	
	for each (Control ^ control in flowLayoutPanel1->Controls) {
		if (Library::UsersForAdmin^ userControl = dynamic_cast<Library::UsersForAdmin^>(control)) {
			String^ itemName = userControl->GetName()->ToLower();

			if (!itemName->Contains(searchText)) {
				control->Visible = false;
			}
		}
	}
}

};
}
