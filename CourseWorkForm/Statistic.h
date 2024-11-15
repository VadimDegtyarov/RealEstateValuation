#pragma once
#include <vector>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace CourseWorkForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::IO;
	/// <summary>
	/// Summary for Statistic
	/// </summary>
	public ref class Statistic : public System::Windows::Forms::Form
	{
	public:
		Statistic(void)
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
		~Statistic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(-1, 0);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(409, 316);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Graph1Name";
			title1->Text = L"Примерная статистика по покупкам недвижимости за год:";
			this->chart1->Titles->Add(title1);
			this->chart1->Click += gcnew System::EventHandler(this, &Statistic::chart1_Click);
			// 
			// chart3
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea2);
			this->chart3->Location = System::Drawing::Point(408, 0);
			this->chart3->Name = L"chart3";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			series2->YValuesPerPoint = 4;
			this->chart3->Series->Add(series2);
			this->chart3->Size = System::Drawing::Size(409, 316);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			title2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold));
			title2->Name = L"Graph1Name";
			title2->Text = L"Количество оцененной недвижимости  в нашем приложении";
			this->chart3->Titles->Add(title2);
			this->chart3->UseWaitCursor = true;
			this->chart3->Click += gcnew System::EventHandler(this, &Statistic::chart3_Click);
			// 
			// Statistic
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(819, 588);
			this->ControlBox = false;
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Statistic";
			this->Text = L"Statistic";
			this->Load += gcnew System::EventHandler(this, &Statistic::Statistic_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void Statistic_Load(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->AddXY("Жилой дом", 60000);
	chart1->Series["Series1"]->Points->AddXY("Квартира", 120000);
	chart1->Series["Series1"]->Points->AddXY("Офисное здание", 10000);
	chart1->Series["Series1"]->Points->AddXY("Торговое помещение", 50000);
	chart1->Series["Series1"]->Points->AddXY("Промышленный объект", 5000);
	chart1->Series["Series1"]->Points->AddXY("Склад", 20000);

	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStringBuilder;
	connStringBuilder = gcnew SqlConnectionStringBuilder();
	connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2";
	connStringBuilder->InitialCatalog = "Houses";
	connStringBuilder->IntegratedSecurity = true;
	conn = gcnew SqlConnection(connStringBuilder->ConnectionString);
	String^ query = "SELECT Type, COUNT(*) AS Count FROM Houses GROUP BY Type";
	SqlCommand^ command = gcnew SqlCommand(query, conn);
	conn->Open();
	SqlDataReader^ reader = command->ExecuteReader();

	// Переменные для счетчиков каждого типа
	int countHouse = 0;
	int countApartment = 0;
	int countOffice = 0;
	int countShop = 0;
	int countIndustrial = 0;
	int countWarehouse = 0;

	while (reader->Read()) {
		String^ type = safe_cast<String^>(reader["Type"]);
		int count = safe_cast<int>(reader["Count"]);

		// Увеличиваем соответствующий счетчик в зависимости от типа
		if (type == "Жилой дом") {
			countHouse++;
		}
		else if (type == "Квартира") {
			countApartment++;
		}
		else if (type == "Офисное здание") {
			countOffice++;
		}
		else if (type == "Торговое помещение") {
			countShop++;
		}
		else if (type == "Промышленный объект") {
			countIndustrial++;
		}
		else if (type == "Склад") {
			countWarehouse++;
		}

		// Добавляем данные в статистику
		
	}
	chart3->Series["Series1"]->Points->AddXY("Жилой дом", countHouse);
	chart3->Series["Series1"]->Points->AddXY("Квартира", countApartment);
	chart3->Series["Series1"]->Points->AddXY("Офисное здание", countOffice);
	chart3->Series["Series1"]->Points->AddXY("Торговое помещение", countShop);
	chart3->Series["Series1"]->Points->AddXY("Промышленный объект", countIndustrial);
	chart3->Series["Series1"]->Points->AddXY("Склад", countWarehouse);
	// Закрываем соединение
	conn->Close();
}


private: System::Void chart3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
