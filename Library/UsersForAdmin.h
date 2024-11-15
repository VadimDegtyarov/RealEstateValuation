#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

namespace Library {

	/// <summary>
	/// Summary for UsersForAdmin
	/// </summary>
	public ref class UsersForAdmin : public System::Windows::Forms::UserControl
	{
	public:
		UsersForAdmin(void)
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
		~UsersForAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ UserName;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ Role;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	public:
		String^ Username;
		int^ id;
		bool role;
		void SetNameUser(String^ name) {
			this->UserName->Text = name; this->Username = name;
		}
		
		String^ GetName()
		{
			return Username;
		}
		void SetRoleUser(bool Role)
		{
			role = Role;
			if (!Role)
			{
				this->Role->Text = "Роль - User";
			}
			else
			{
				this->Role->Text = "Роль - Admin";
			}
		}
		void SetIdUser(int Id)
		{
			this->id = Id;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UsersForAdmin::typeid));
			this->UserName = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Role = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// UserName
			// 
			this->UserName->AutoSize = true;
			this->UserName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->UserName->Location = System::Drawing::Point(25, 150);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(41, 21);
			this->UserName->TabIndex = 0;
			this->UserName->Text = L"Имя";
			this->UserName->Click += gcnew System::EventHandler(this, &UsersForAdmin::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Удалить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UsersForAdmin::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->button2->Location = System::Drawing::Point(100, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Изменить роль";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UsersForAdmin::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(29, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(136, 136);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// Role
			// 
			this->Role->AutoSize = true;
			this->Role->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Role->Location = System::Drawing::Point(72, 151);
			this->Role->Name = L"Role";
			this->Role->Size = System::Drawing::Size(54, 21);
			this->Role->TabIndex = 4;
			this->Role->Text = L"Роль -";
			// 
			// UsersForAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Role);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->UserName);
			this->Name = L"UsersForAdmin";
			this->Size = System::Drawing::Size(200, 200);
			this->Load += gcnew System::EventHandler(this, &UsersForAdmin::UsersForAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		bool^ Id = role;
		SqlConnection^ conn;
		SqlConnectionStringBuilder^ connStringBuilder;
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2";
		connStringBuilder->InitialCatalog = "UsersApp";
		connStringBuilder->IntegratedSecurity = true;
		conn = gcnew SqlConnection(connStringBuilder->ConnectionString);

		try
		{
			conn->Open();

			
			String^ deleteCommand = "DELETE FROM UsersApp WHERE Login = @Login AND ID = @Id";

			SqlCommand^ command = gcnew SqlCommand(deleteCommand, conn);
			command->Parameters->AddWithValue("@Login", Username);
			command->Parameters->AddWithValue("@Id", id);

			command->ExecuteNonQuery();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}
		finally
		{
			if (conn->State == ConnectionState::Open)
				conn->Close();
		}
		
	}

private: System::Void UsersForAdmin_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStringBuilder;
	connStringBuilder = gcnew SqlConnectionStringBuilder();
	connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2";
	connStringBuilder->InitialCatalog = "UsersApp";
	connStringBuilder->IntegratedSecurity = true;
	conn = gcnew SqlConnection(connStringBuilder->ConnectionString);

	try
	{
		conn->Open();

		
		String^ checkCommand = "SELECT Userrole FROM UsersApp WHERE Login = @Login AND ID = @id";
		SqlCommand^ checkUserRoleCommand = gcnew SqlCommand(checkCommand, conn);
		checkUserRoleCommand->Parameters->AddWithValue("@Login", Username);
		checkUserRoleCommand->Parameters->AddWithValue("@id", id);

		bool currentUserRole = false; 
		Object^ result = checkUserRoleCommand->ExecuteScalar();
		if (result != nullptr)
		{
			currentUserRole = Convert::ToBoolean(result);
		}

		String^ updateCommand = "UPDATE UsersApp SET Userrole = @NewUserRole WHERE Login = @Login";
		SqlCommand^ updateRoleCommand = gcnew SqlCommand(updateCommand, conn);
		updateRoleCommand->Parameters->AddWithValue("@Login", Username);
		updateRoleCommand->Parameters->AddWithValue("@NewUserRole", !currentUserRole); 

		updateRoleCommand->ExecuteNonQuery();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message);
	}
	finally
	{
		if (conn->State == ConnectionState::Open)
			conn->Close();
	}
}


};
}
