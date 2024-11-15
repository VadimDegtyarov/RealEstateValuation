#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Library {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
		
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ Message;
	protected:

	public:System::Windows::Forms::Label^ Title;
	public:System::Windows::Forms::PictureBox^ Image;
	protected:
	public:
		System::Windows::Forms::Label^ GetMessageLabel() { return this->Message; }
		System::Windows::Forms::Label^ GetTitleLabel() { return this->Title; }
		System::Windows::Forms::PictureBox^ GetImagePictureBox() { return this->Image; }
		public: String^ GetName() {
		return this->Title->Text;
		}
	public:
		String^ Country="";
		int^ SizeH = 0;
		int^ setNumRoom = 0;
		String^ SetCountry(String^ country) {
			this->Country = country;
			return this->Country; 
		}

		String^ GetCountry() {
			return this->Country;
		}
		

		
		int^ GetSize() {
			return this->SizeH;
		}

		
		void SetSize(int^ size) {
			this->SizeH = size;
		}


		int^ GetNumRoom() {
			return this->setNumRoom;
		}

		
		void SetNumRoom(int^ setNumRoom) {
			this->setNumRoom = setNumRoom;
		}


		void SetName(String^ name) { this->Title->Text = name; }
		void SetType(String^ type, String^ country, String^ city, String^ street, int size, int rooms, bool isGood, DateTime^ date, double Price)
		{
			String^ isGoodText = (isGood) ? "Да" : "Нет";

			this->Message->Text = "Тип недвижимости - " + type +
				" ; Страна - " + country +
				" : Город - " + city +
				" : Улица - " + street +
				" ; Количество комнат - " + rooms +
				" ; Данные в порядке - " + isGoodText +
				" ; Дата постройки объекта - " + date->ToString() +
				" ; Размер: " + size + " м.кв "+"; Примерная цена - "+Price+" $";
		}

		void SetImageFromBytes(array<Byte>^ imageData)
		{
			
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(imageData);
			this->Image->Image = Image::FromStream(ms);
		}

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;




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
			this->Message = (gcnew System::Windows::Forms::Label());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->Image = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Image))->BeginInit();
			this->SuspendLayout();
			// 
			// Message
			// 
			this->Message->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.85F));
			this->Message->Location = System::Drawing::Point(218, 38);
			this->Message->Name = L"Message";
			this->Message->Size = System::Drawing::Size(588, 80);
			this->Message->TabIndex = 5;
			this->Message->Click += gcnew System::EventHandler(this, &MyUserControl::lblMessage_Click);
			// 
			// Title
			// 
			this->Title->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title->Location = System::Drawing::Point(218, 5);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(274, 33);
			this->Title->TabIndex = 4;
			this->Title->Click += gcnew System::EventHandler(this, &MyUserControl::lblTitle_Click);
			// 
			// Image
			// 
			this->Image->Location = System::Drawing::Point(20, 10);
			this->Image->Name = L"Image";
			this->Image->Size = System::Drawing::Size(192, 108);
			this->Image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Image->TabIndex = 3;
			this->Image->TabStop = false;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Message);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->Image);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(809, 128);
			this->Load += gcnew System::EventHandler(this, &MyUserControl::MyUserControl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Image))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lblMessage_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void lblTitle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyUserControl_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
