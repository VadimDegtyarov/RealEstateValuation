#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

namespace CourseWorkForm {
    ref class Functions
    {
    private:
        SqlConnection^ conn;
        SqlConnectionStringBuilder^ connStringBuilder;

    public:

        Functions()
        {
            connStringBuilder = gcnew SqlConnectionStringBuilder();
            connStringBuilder->DataSource = "ASUS\\MSSQLSERVER2"; // Use double backslash here
            connStringBuilder->InitialCatalog = "UsersApp";
            connStringBuilder->IntegratedSecurity = true;

            conn = gcnew SqlConnection(connStringBuilder->ConnectionString);
        }

        void ConnectToDB()
        {
            conn->Open(); // Open the connection
        }

        void DisconnectFromDB()
        {
            if (conn->State == ConnectionState::Open)
            {
                conn->Close(); // Close the connection if it's open
            }
        }
        SqlConnection^ GetConnection()
        {
            return conn;
        }
        void Insert(String^ Login, String^ Password,bool^ Role)
        {
            try
            {
                ConnectToDB();

                String^ cmdText = "INSERT INTO dbo.UsersApp (Login, Password,Userrole) VALUES (@NameVstavka, @PasswordVstavka,@Role)";

                SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
                cmd->Parameters->AddWithValue("@NameVstavka", Login);  // Замените "Login" на вашу переменную
                cmd->Parameters->AddWithValue("@PasswordVstavka", Password);  // Замените "Password" на вашу переменную
                cmd->Parameters->AddWithValue("@Role", Role);
                cmd->ExecuteNonQuery();
            }
            finally
            {
                DisconnectFromDB();
            }
        }
       


    };
}