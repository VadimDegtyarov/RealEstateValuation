	#pragma once
	#include <iostream>
	#include <fstream>
	#include <string>
	#include <windows.h>
	#define SOUND_RESOURCE "SystemExclamation"
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
		/// Summary for Addrs
		/// </summary>
		/// 
		public ref class Addrs : public System::Windows::Forms::Form
		{
		
		public:
		
		
		
			
			Addrs()
			{
				InitializeComponent();
				openFileDialog1 = gcnew OpenFileDialog();
				
				this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
				this->Location = System::Drawing::Point(0, 0);
				// Additional constructor code
			}
		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~Addrs()
			{
				if (components)
				{
					delete components;
				}
			}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: Library::MyUserControl^ myUserControl1;
	private: System::Windows::Forms::TextBox^ SizeNedv;
	private: System::Windows::Forms::TextBox^ QuantityRoom;


		   


	private: System::Windows::Forms::TextBox^ CityNedv;

	private: System::Windows::Forms::TextBox^ Countrynedv;
	private: System::Windows::Forms::TextBox^ StreetNedv;


	private: System::Windows::Forms::ComboBox^ TypeNedv;
	private: System::Windows::Forms::CheckBox^ TechnicisGood;
	private: System::Windows::Forms::DateTimePicker^ DataCreateObject;
	private: System::Windows::Forms::Button^ ButtonAddNedv;






	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ ImageNedv;
	private: System::Windows::Forms::TextBox^ NameNedv;


	private: System::Windows::Forms::Label^ label10;



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
			this->myUserControl1 = (gcnew Library::MyUserControl());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SizeNedv = (gcnew System::Windows::Forms::TextBox());
			this->QuantityRoom = (gcnew System::Windows::Forms::TextBox());
			this->CityNedv = (gcnew System::Windows::Forms::TextBox());
			this->Countrynedv = (gcnew System::Windows::Forms::TextBox());
			this->StreetNedv = (gcnew System::Windows::Forms::TextBox());
			this->TypeNedv = (gcnew System::Windows::Forms::ComboBox());
			this->TechnicisGood = (gcnew System::Windows::Forms::CheckBox());
			this->DataCreateObject = (gcnew System::Windows::Forms::DateTimePicker());
			this->ButtonAddNedv = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->ImageNedv = (gcnew System::Windows::Forms::Button());
			this->NameNedv = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// myUserControl1
			// 
			this->myUserControl1->Location = System::Drawing::Point(0, 0);
			this->myUserControl1->Name = L"myUserControl1";
			this->myUserControl1->Size = System::Drawing::Size(809, 128);
			this->myUserControl1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label1->Location = System::Drawing::Point(70, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите тип недвижимости";
			this->label1->Click += gcnew System::EventHandler(this, &Addrs::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label2->Location = System::Drawing::Point(385, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(376, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите Страну, в которой находится недвижимость";
			this->label2->Click += gcnew System::EventHandler(this, &Addrs::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label3->Location = System::Drawing::Point(385, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(372, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введите Город, в котором находится недвижимость";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label4->Location = System::Drawing::Point(385, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(373, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Введите Район, в котором находится недвижимость";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label5->Location = System::Drawing::Point(385, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(380, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Введите Количество комнат в данной недвижимости";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label6->Location = System::Drawing::Point(70, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(260, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Введите размер недвижимости (м²)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label7->Location = System::Drawing::Point(70, 242);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(213, 40);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Юридические и технические \r\nданные впорядке ";
			this->label7->Click += gcnew System::EventHandler(this, &Addrs::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label8->Location = System::Drawing::Point(70, 342);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(236, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Введите дату постройки объекта";
			// 
			// SizeNedv
			// 
			this->SizeNedv->Location = System::Drawing::Point(74, 167);
			this->SizeNedv->Multiline = true;
			this->SizeNedv->Name = L"SizeNedv";
			this->SizeNedv->Size = System::Drawing::Size(174, 29);
			this->SizeNedv->TabIndex = 9;
			this->SizeNedv->TextChanged += gcnew System::EventHandler(this, &Addrs::textBox2_TextChanged);
			// 
			// QuantityRoom
			// 
			this->QuantityRoom->Location = System::Drawing::Point(389, 367);
			this->QuantityRoom->Multiline = true;
			this->QuantityRoom->Name = L"QuantityRoom";
			this->QuantityRoom->Size = System::Drawing::Size(174, 29);
			this->QuantityRoom->TabIndex = 14;
			this->QuantityRoom->TextChanged += gcnew System::EventHandler(this, &Addrs::textBox5_TextChanged);
			// 
			// CityNedv
			// 
			this->CityNedv->Location = System::Drawing::Point(389, 167);
			this->CityNedv->Multiline = true;
			this->CityNedv->Name = L"CityNedv";
			this->CityNedv->Size = System::Drawing::Size(174, 29);
			this->CityNedv->TabIndex = 13;
			this->CityNedv->TextChanged += gcnew System::EventHandler(this, &Addrs::textBox6_TextChanged);
			// 
			// Countrynedv
			// 
			this->Countrynedv->Location = System::Drawing::Point(389, 67);
			this->Countrynedv->Multiline = true;
			this->Countrynedv->Name = L"Countrynedv";
			this->Countrynedv->Size = System::Drawing::Size(174, 29);
			this->Countrynedv->TabIndex = 12;
			this->Countrynedv->TextChanged += gcnew System::EventHandler(this, &Addrs::textBox7_TextChanged);
			// 
			// StreetNedv
			// 
			this->StreetNedv->Location = System::Drawing::Point(389, 267);
			this->StreetNedv->Multiline = true;
			this->StreetNedv->Name = L"StreetNedv";
			this->StreetNedv->Size = System::Drawing::Size(174, 29);
			this->StreetNedv->TabIndex = 15;
			this->StreetNedv->TextChanged += gcnew System::EventHandler(this, &Addrs::textBox8_TextChanged);
			// 
			// TypeNedv
			// 
			this->TypeNedv->FormattingEnabled = true;
			this->TypeNedv->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Жилой дом", L"Квартира", L"Офисное здание ", L"Торговое помещение",
					L"Промышленный объект", L"Склад"
			});
			this->TypeNedv->Location = System::Drawing::Point(74, 75);
			this->TypeNedv->Name = L"TypeNedv";
			this->TypeNedv->Size = System::Drawing::Size(174, 21);
			this->TypeNedv->TabIndex = 16;
			this->TypeNedv->SelectedIndexChanged += gcnew System::EventHandler(this, &Addrs::comboBox1_SelectedIndexChanged);
			// 
			// TechnicisGood
			// 
			this->TechnicisGood->AutoSize = true;
			this->TechnicisGood->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->TechnicisGood->Location = System::Drawing::Point(74, 287);
			this->TechnicisGood->Name = L"TechnicisGood";
			this->TechnicisGood->Size = System::Drawing::Size(46, 24);
			this->TechnicisGood->TabIndex = 17;
			this->TechnicisGood->Text = L"Да";
			this->TechnicisGood->UseVisualStyleBackColor = true;
			this->TechnicisGood->CheckedChanged += gcnew System::EventHandler(this, &Addrs::checkBox1_CheckedChanged);
			// 
			// DataCreateObject
			// 
			this->DataCreateObject->Location = System::Drawing::Point(74, 376);
			this->DataCreateObject->Name = L"DataCreateObject";
			this->DataCreateObject->Size = System::Drawing::Size(200, 20);
			this->DataCreateObject->TabIndex = 19;
			this->DataCreateObject->ValueChanged += gcnew System::EventHandler(this, &Addrs::dateTimePicker1_ValueChanged);
			// 
			// ButtonAddNedv
			// 
			this->ButtonAddNedv->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F, System::Drawing::FontStyle::Bold));
			this->ButtonAddNedv->Location = System::Drawing::Point(508, 507);
			this->ButtonAddNedv->Name = L"ButtonAddNedv";
			this->ButtonAddNedv->Size = System::Drawing::Size(174, 57);
			this->ButtonAddNedv->TabIndex = 20;
			this->ButtonAddNedv->Text = L"Готово";
			this->ButtonAddNedv->UseVisualStyleBackColor = true;
			this->ButtonAddNedv->Click += gcnew System::EventHandler(this, &Addrs::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label9->Location = System::Drawing::Point(70, 420);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(284, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Добавить изображение недвижимости";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Addrs::openFileDialog1_FileOk);
			// 
			// ImageNedv
			// 
			this->ImageNedv->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ImageNedv->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->ImageNedv->Location = System::Drawing::Point(74, 445);
			this->ImageNedv->Name = L"ImageNedv";
			this->ImageNedv->Size = System::Drawing::Size(192, 108);
			this->ImageNedv->TabIndex = 23;
			this->ImageNedv->Text = L"Добавить";
			this->ImageNedv->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ImageNedv->UseVisualStyleBackColor = true;
			this->ImageNedv->Click += gcnew System::EventHandler(this, &Addrs::button2_Click);
			// 
			// NameNedv
			// 
			this->NameNedv->Location = System::Drawing::Point(389, 445);
			this->NameNedv->Multiline = true;
			this->NameNedv->Name = L"NameNedv";
			this->NameNedv->Size = System::Drawing::Size(174, 29);
			this->NameNedv->TabIndex = 24;
			this->NameNedv->TextChanged += gcnew System::EventHandler(this, &Addrs::textBox1_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->label10->Location = System::Drawing::Point(385, 420);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(243, 20);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Введите название недвижимости";
			// 
			// Addrs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 588);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->NameNedv);
			this->Controls->Add(this->ImageNedv);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->ButtonAddNedv);
			this->Controls->Add(this->DataCreateObject);
			this->Controls->Add(this->TechnicisGood);
			this->Controls->Add(this->TypeNedv);
			this->Controls->Add(this->StreetNedv);
			this->Controls->Add(this->QuantityRoom);
			this->Controls->Add(this->CityNedv);
			this->Controls->Add(this->Countrynedv);
			this->Controls->Add(this->SizeNedv);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Addrs";
			this->Text = L"Addrs";
			this->Load += gcnew System::EventHandler(this, &Addrs::Addrs_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    // Получаем введенный город
    
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	CheckCity();
	
}
	   
private: System::Void CheckCity()
{
	String^ userCountry = Countrynedv->Text;
	String^ userCity = CityNedv->Text;
	String^ userStreet = StreetNedv->Text;


	try {
		SqlConnection^ conn;
		SqlConnectionStringBuilder^ connStringBuilder;
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2";
		connStringBuilder->InitialCatalog = "City";
		connStringBuilder->IntegratedSecurity = true;
		conn = gcnew SqlConnection(connStringBuilder->ConnectionString);

		
		String^ query = "SELECT * FROM country WHERE name = @Country";
		SqlCommand^ command = gcnew SqlCommand(query, conn);
		command->Parameters->AddWithValue("@Country", userCountry);

		conn->Open();
		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			reader->Close();

			
			query = "SELECT * FROM city WHERE name = @City";
			command = gcnew SqlCommand(query, conn);
			command->Parameters->AddWithValue("@City", userCity);

			reader = command->ExecuteReader();

			if (reader->Read()) {
				double approximatePrice = 0.0;
				Price(approximatePrice);
				InsertDataIntoHouses(
					NameNedv->Text,
					TypeNedv->SelectedItem->ToString(),
					Countrynedv->Text,
					CityNedv->Text,
					StreetNedv->Text,
					Convert::ToInt32(SizeNedv->Text),
					Convert::ToInt32(QuantityRoom->Text),
					TechnicisGood->Checked,
					DataCreateObject->Value,
					Image::FromFile(openFileDialog1->FileName),
					approximatePrice
				);
			}
			else {
				MessageBox::Show("Город не существует в базе данных", "Error", MessageBoxButtons::OK);
			}
		}
		else {
			MessageBox::Show("Страна не существует в базе данных", "Error", MessageBoxButtons::OK);
		}

		reader->Close();
		conn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Ошибка при открытии файла: " + ex->Message);
	}
}
	   private: System::Void Price(double% approximatePrice)
	   {
		   int size = Convert::ToInt32(SizeNedv->Text);
		   int rooms = Convert::ToInt32(QuantityRoom->Text);
		   bool isGood = TechnicisGood->Checked;
		   DateTime^ date = DataCreateObject->Value;

		   CalculateApproximatePrice(size, rooms, isGood, date, approximatePrice);

		   MessageBox::Show("Недвижимость оценена (Примерная цена: " + String::Format("{0:F2}", approximatePrice) + "$)", "Success", MessageBoxButtons::OK);
	   }

	    array<Byte>^ ConvertImageToByteArray(Image^ image)
	   {
		   MemoryStream^ ms = gcnew MemoryStream();
		   image->Save(ms, System::Drawing::Imaging::ImageFormat::Bmp);
		   return ms->ToArray();
	   }
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.gif;*.bmp";
	openFileDialog1->Title = "Выберите изображение недвижимости";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ imagePath = openFileDialog1->FileName;

		
		Bitmap^ image = gcnew Bitmap(imagePath);

		
		ImageNedv->BackgroundImage = image;
	}
}
	   void InsertDataIntoHouses(String^ name, String^ type, String^ country, String^ city, String^ street, int^ size, int^ rooms, bool isGood, DateTime^ date, Image^ Image, Double^ price)
	   {
		   SqlConnection^ conn;
		   SqlConnectionStringBuilder^ connStringBuilder;
		   connStringBuilder = gcnew SqlConnectionStringBuilder();
		   connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2";
		   connStringBuilder->InitialCatalog = "Houses";
		   connStringBuilder->IntegratedSecurity = true;
		   conn = gcnew SqlConnection(connStringBuilder->ConnectionString);

		   try
		   {
			   conn->Open();

			   String^ insertCommand = "INSERT INTO Houses (NameHouse, Type, Country, City, Street, Size, NumberRoom, DataIsOk, DateOfContsr, Image, Price) "
				   "VALUES (@NameHouse, @Type, @Country, @City, @Street, @Size, @NumberRoom, @DataIsOk, @DateOfContsr, @Image, @Price)";

			   SqlCommand^ command = gcnew SqlCommand(insertCommand, conn);


			   command->Parameters->AddWithValue("@NameHouse", name);
			   command->Parameters->AddWithValue("@Type", type);
			   command->Parameters->AddWithValue("@Country", country);
			   command->Parameters->AddWithValue("@City", city);
			   command->Parameters->AddWithValue("@Street", street);
			   command->Parameters->AddWithValue("@Size", size);
			   command->Parameters->AddWithValue("@NumberRoom", rooms);
			   command->Parameters->AddWithValue("@DataIsOk", isGood);
			   command->Parameters->AddWithValue("@DateOfContsr", date);

			  
			   command->Parameters->AddWithValue("@Image", SqlDbType::Image)->Value = ConvertImageToByteArray(Image);
			   command->Parameters->AddWithValue("@Price", price); 

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

	   


private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Addrs_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}


	   double CalculateApproximatePrice(int size, int rooms, bool isGood, DateTime^ date, double% price)
	   {
		   double basePrice = 100000.0;  
		   double sizeMultiplier = 1000.0;  
		   double roomMultiplier = 5000.0;  
		   double goodConditionBonus = 0.1;  

		   
		   price = basePrice + (size * sizeMultiplier) + (rooms * roomMultiplier);


		   if (isGood) {
			   price += price * goodConditionBonus;
		   }

		   
		   int yearsOld = DateTime::Now.Year - date->Year;
		   double ageMultiplier = 0.98; 
		   price *= Math::Pow(ageMultiplier, yearsOld);

		   return price;
	   }
	   private: System::Windows::Forms::Label^ labelPrice;

private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

};
}
