#pragma once
#include"Header.h"
#include"Addrs.h"
#include <algorithm>
#include <list>
namespace CourseWorkForm {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace Library;
	/// <summary>
	/// Summary for Fullrs
	/// </summary>
	public ref class Fullrs : public System::Windows::Forms::Form
	{
	private:
		bool ascendingOrder;

	public:
		Fullrs()
		{
			InitializeComponent();



			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Location = System::Drawing::Point(0, 0);
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Fullrs()
		{
			if (components)
			{

				delete components;

			}
		}
	private: Library::MyUserControl^ myUserControl1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ SizeNedv;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:
	protected:
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>


		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Fullrs::typeid));
			this->flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SizeNedv = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->myUserControl1 = (gcnew Library::MyUserControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel
			// 
			this->flowLayoutPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel->AutoScroll = true;
			this->flowLayoutPanel->Location = System::Drawing::Point(0, 47);
			this->flowLayoutPanel->Name = L"flowLayoutPanel";
			this->flowLayoutPanel->Size = System::Drawing::Size(819, 541);
			this->flowLayoutPanel->TabIndex = 1;
			this->flowLayoutPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Fullrs::flowLayoutPanel_Paint);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(12, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Названию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Fullrs::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(93, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 29);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Стране";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Fullrs::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(174, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 29);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Размеру";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Fullrs::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(255, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(82, 29);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Кол-ву комнат";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Fullrs::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Сортировка по:";
			// 
			// SizeNedv
			// 
			this->SizeNedv->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SizeNedv->Location = System::Drawing::Point(694, 26);
			this->SizeNedv->Name = L"SizeNedv";
			this->SizeNedv->Size = System::Drawing::Size(120, 22);
			this->SizeNedv->TabIndex = 12;
			this->SizeNedv->Text = L"Поиск...";
			this->SizeNedv->TextChanged += gcnew System::EventHandler(this, &Fullrs::SizeNedv_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(663, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 25);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// myUserControl1
			// 
			this->myUserControl1->Location = System::Drawing::Point(1, 1);
			this->myUserControl1->Name = L"myUserControl1";
			this->myUserControl1->Size = System::Drawing::Size(809, 128);
			this->myUserControl1->TabIndex = 0;
			// 
			// Fullrs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 588);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->SizeNedv);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Fullrs";
			this->Text = L"Fullrs";
			this->Load += gcnew System::EventHandler(this, &Fullrs::Fullrs_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		System::Void Fullrs_Load(System::Object^ sender, System::EventArgs^ e) {
			try {
				populateItems();
			}
			catch (Exception^ ex) {
				Console::WriteLine("Error: " + ex->Message);
			}
		}

	private:
		System::Void populateItems()
		{
			SqlConnection^ conn;
			try
			{
				SqlConnectionStringBuilder^ connStringBuilder;
				connStringBuilder = gcnew SqlConnectionStringBuilder();
				connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2";
				connStringBuilder->InitialCatalog = "Houses";
				connStringBuilder->IntegratedSecurity = true;
				conn = gcnew SqlConnection(connStringBuilder->ConnectionString);
				String^ query = "SELECT * FROM Houses";
				SqlCommand^ command = gcnew SqlCommand(query, conn);
				conn->Open();
				SqlDataReader^ reader = command->ExecuteReader();

				while (reader->Read())
				{
					// Создание объекта вашего класса (например, Apartment)
					Apartment^ apartment = gcnew Apartment();
					Warehouse^ warehouse = gcnew Warehouse();
					Industrial^ industrial = gcnew Industrial();
					Shop^ shop = gcnew Shop();
					Office^ office = gcnew Office();
					ResidentialHouse^ residentialHouse = gcnew ResidentialHouse();

					// Установка значений свойствам
					if(reader["Type"]=="Квартира"){
					apartment->Type = safe_cast<String^>(reader["Type"]);
					apartment->Country = safe_cast<String^>(reader["Country"]);
					apartment->Size = safe_cast<int>(reader["Size"]);
					apartment->NumRooms = safe_cast<int>(reader["NumRooms"]);
					}
					else if (reader["Type"] == "склад") {
						warehouse->Type = safe_cast<String^>(reader["Type"]);
						warehouse->Country = safe_cast<String^>(reader["Country"]);
						warehouse->Size = safe_cast<int>(reader["Size"]);
						warehouse->NumRooms = safe_cast<int>(reader["NumRooms"]);
					}
					else if (reader["Type"] == "Промышленный объект") {
						industrial->Type = safe_cast<String^>(reader["Type"]);
						industrial->Country = safe_cast<String^>(reader["Country"]);
						industrial->Size = safe_cast<int>(reader["Size"]);
						industrial->NumRooms = safe_cast<int>(reader["NumRooms"]);
					}
					else if (reader["Type"] == "Торговое помещение") {
						shop->Type = safe_cast<String^>(reader["Type"]);
						shop->Country = safe_cast<String^>(reader["Country"]);
						shop->Size = safe_cast<int>(reader["Size"]);
						shop->NumRooms = safe_cast<int>(reader["NumRooms"]);
					}
					else if (reader["Type"] == "Офисное здание") {
						office->Type = safe_cast<String^>(reader["Type"]);
						office->Country = safe_cast<String^>(reader["Country"]);
						office->Size = safe_cast<int>(reader["Size"]);
						office->NumRooms = safe_cast<int>(reader["NumRooms"]);
					}
					else if (reader["Type"] == "Жилой дом") {
						residentialHouse->Type = safe_cast<String^>(reader["Type"]);
						residentialHouse->Country = safe_cast<String^>(reader["Country"]);
						residentialHouse->Size = safe_cast<int>(reader["Size"]);
						residentialHouse->NumRooms = safe_cast<int>(reader["NumRooms"]);
					}


					// Добавление объекта в коллекцию
					Apartment::apartments->Add(apartment);
					Warehouse::warehouses->Add(warehouse);
					Industrial::industrials->Add(industrial);
					Shop::shops->Add(shop);
					Office::offices->Add(office);
					ResidentialHouse::residentialHouses->Add(residentialHouse);

					Library::MyUserControl^ newUserControl = gcnew Library::MyUserControl();
					Getdata(newUserControl, reader);

					// Добавление MyUserControl в FlowLayoutPanel
					this->flowLayoutPanel->Controls->Add(newUserControl);
				}
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Error adding control: " + ex->Message);
			}
			finally
			{
				conn->Close();
			}
		}


	
	


private: System::Void Getdata(Library::MyUserControl^ userControl, SqlDataReader^ reader)
{

	
	userControl->SetName(reader["NameHouse"]->ToString());
	userControl->SetType(
		reader["Type"]->ToString(),
		reader["Country"]->ToString(),
		reader["City"]->ToString(),
		reader["Street"]->ToString(),
		Convert::ToInt32(reader["Size"]),
		Convert::ToInt32(reader["NumberRoom"]),
		Convert::ToBoolean(reader["DataIsOk"]),
		Convert::ToDateTime(reader["DateOfContsr"]),
		Convert::ToDouble(reader["Price"])
	);

	userControl->SetCountry(reader["Country"]->ToString());
	userControl->SetSize(Convert::ToInt32(reader["Size"]));
	userControl->SetNumRoom(Convert::ToInt32(reader["NumberRoom"]));
	userControl->SetImageFromBytes((array<Byte>^)reader["Image"]);

	
}



	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void myUserControl2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	List<Library::MyUserControl^>^ userControlsList = gcnew List<Library::MyUserControl^>();

	
	for each (Control ^ control in flowLayoutPanel->Controls) {
		if (Library::MyUserControl^ userControl = dynamic_cast<Library::MyUserControl^>(control)) {
			userControlsList->Add(userControl);
		}
	}

	
	if (ascendingOrder) {
		
		userControlsList->Sort(gcnew Comparison<Library::MyUserControl^>(this, &CourseWorkForm::Fullrs::CompareMyUserControlsName));
	}
	else {
		
		userControlsList->Sort(gcnew Comparison<Library::MyUserControl^>(this, &CourseWorkForm::Fullrs::CompareMyUserControlsNameDesc));
	}

	
	ascendingOrder = !ascendingOrder;

	
	flowLayoutPanel->Controls->Clear();

	
	for each (Library::MyUserControl ^ userControl in userControlsList) {
		flowLayoutPanel->Controls->Add(userControl);
	}
}

private: int CompareMyUserControlsName(Library::MyUserControl^ control1, Library::MyUserControl^ control2) {
	return String::Compare(control1->GetName(), control2->GetName());
}

private: int CompareMyUserControlsNameDesc(Library::MyUserControl^ control1, Library::MyUserControl^ control2) {
	
	return String::Compare(control2->GetName(), control1->GetName());
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Library::MyUserControl^>^ userControlsList = gcnew List<Library::MyUserControl^>();

	
	for each (Control ^ control in flowLayoutPanel->Controls) {
		if (Library::MyUserControl^ userControl = dynamic_cast<Library::MyUserControl^>(control)) {
			userControlsList->Add(userControl);
		}
	}

	
	if (ascendingOrder) {
		
		userControlsList->Sort(gcnew Comparison<Library::MyUserControl^>(this, &CourseWorkForm::Fullrs::CompareMyUserControlsCountry));
	}
	else {
		
		userControlsList->Sort(gcnew Comparison<Library::MyUserControl^>(this, &CourseWorkForm::Fullrs::CompareMyUserControlsCountryDesc));
	}

	
	ascendingOrder = !ascendingOrder;

	
	flowLayoutPanel->Controls->Clear();

	
	for each (Library::MyUserControl ^ userControl in userControlsList) {
		flowLayoutPanel->Controls->Add(userControl);
	}
}
private: int CompareMyUserControlsCountry(Library::MyUserControl^ control1, Library::MyUserControl^ control2) {
		   return String::Compare(control1->GetCountry(), control2->GetCountry());
	   }

private: int CompareMyUserControlsCountryDesc(Library::MyUserControl^ control1, Library::MyUserControl^ control2) {
	return String::Compare(control2->GetCountry(), control1->GetCountry());
}
	   
private:
	int CompareMyUserControlsSize(Library::MyUserControl^ control1, Library::MyUserControl^ control2) {
		
		return Convert::ToInt32(control1->GetSize()) - Convert::ToInt32(control2->GetSize());
	}

	int CompareMyUserControlsSizeDesc(Library::MyUserControl^ control1, Library::MyUserControl^ control2) {
		
		return Convert::ToInt32(control2->GetSize()) - Convert::ToInt32(control1->GetSize());
	}

	  
private:
	System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		List<Library::MyUserControl^>^ userControlsList = gcnew List<Library::MyUserControl^>();

		for each (Control ^ control in flowLayoutPanel->Controls) {
			if (Library::MyUserControl^ userControl = dynamic_cast<Library::MyUserControl^>(control)) {
				userControlsList->Add(userControl);
			}
		}

		if (ascendingOrder) {
			userControlsList->Sort(gcnew Comparison<Library::MyUserControl^>(this, &CourseWorkForm::Fullrs::CompareMyUserControlsSize));
		}
		else {
			userControlsList->Sort(gcnew Comparison<Library::MyUserControl^>(this, &CourseWorkForm::Fullrs::CompareMyUserControlsSizeDesc));
		}

		ascendingOrder = !ascendingOrder;

		flowLayoutPanel->Controls->Clear();

		for each (Library::MyUserControl ^ userControl in userControlsList) {
			flowLayoutPanel->Controls->Add(userControl);
		}
	}
private:
	int CompareMyUserControlsRooms(Library::MyUserControl^ control1, Library::MyUserControl^ control2) {
		
		return Convert::ToInt32(control1->GetNumRoom()) - Convert::ToInt32(control2->GetNumRoom());
	}

	int CompareMyUserControlsRoomsDesc(Library::MyUserControl^ control1, Library::MyUserControl^ control2) {
		
		return Convert::ToInt32(control2->GetNumRoom()) - Convert::ToInt32(control1->GetNumRoom());
	}

private:
	System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Library::MyUserControl^>^ userControlsList = gcnew List<Library::MyUserControl^>();

		for each (Control ^ control in flowLayoutPanel->Controls) {
			if (Library::MyUserControl^ userControl = dynamic_cast<Library::MyUserControl^>(control)) {
				userControlsList->Add(userControl);
			}
		}

		if (ascendingOrder) {
			userControlsList->Sort(gcnew Comparison<Library::MyUserControl^>(this, &CourseWorkForm::Fullrs::CompareMyUserControlsRooms));
		}
		else {
			userControlsList->Sort(gcnew Comparison<Library::MyUserControl^>(this, &CourseWorkForm::Fullrs::CompareMyUserControlsRoomsDesc));
		}

		ascendingOrder = !ascendingOrder;

		flowLayoutPanel->Controls->Clear();

		for each (Library::MyUserControl ^ userControl in userControlsList) {
			flowLayoutPanel->Controls->Add(userControl);
		}
	}
private:
	System::Void SizeNedv_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = SizeNedv->Text->ToLower();

		for each (Control ^ control in flowLayoutPanel->Controls) {
			if (Library::MyUserControl^ userControl = dynamic_cast<Library::MyUserControl^>(control)) {
				String^ itemName = userControl->GetName()->ToLower();

				if (itemName->Contains(searchText)) {
					control->Visible = true;
				}
				else {
					control->Visible = false;
				}
			}
		}
	}

};
}
