#pragma once

#include <list>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <vector>
namespace CourseWorkForm {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;
    using namespace System::Collections::Generic;
    public ref class House
    {
    public:
        String^ Type;
        String^ Country;
        int Size;
        int NumRooms;

        virtual void LoadFromDatabase(SqlDataReader^ reader)
        {
            this->Type = safe_cast<String^>(reader["Type"]);
            this->Country = safe_cast<String^>(reader["Country"]);
            this->Size = safe_cast<int>(reader["Size"]);
            this->NumRooms = safe_cast<int>(reader["NumRooms"]);
        }
    };

    public ref class ResidentialHouse : public House
    {
    public:
        static List<ResidentialHouse^>^ residentialHouses = gcnew List<ResidentialHouse^>();
        static List<ResidentialHouse^>^ LoadAllFromDatabase(SqlConnection^ connection)
        {
            List<ResidentialHouse^>^ houses = gcnew List<ResidentialHouse^>();

            try
            {
                String^ query = "SELECT * FROM Houses WHERE Type = 'ResidentialHouse'";
                SqlCommand^ command = gcnew SqlCommand(query, connection);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                while (reader->Read())
                {
                    ResidentialHouse^ house = gcnew ResidentialHouse();
                    house->LoadFromDatabase(reader);
                    houses->Add(house);
                }

                reader->Close();
            }
            finally
            {
                if (connection->State == ConnectionState::Open)
                    connection->Close();
            }

            return houses;
        }
    };

    public ref class Apartment : public House
    {
    public:
        static List<Apartment^>^ apartments = gcnew List<Apartment^>();

          static List<Apartment^>^ LoadAllFromDatabase(SqlConnection^ connection)
          {
            List<Apartment^>^ apartments = gcnew List<Apartment^>();

            try
            {
                String^ query = "SELECT * FROM Houses WHERE Type = 'Apartment'";
                SqlCommand^ command = gcnew SqlCommand(query, connection);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                while (reader->Read())
                {
                    Apartment^ apartment = gcnew Apartment();
                    apartment->LoadFromDatabase(reader);
                    apartments->Add(apartment);
                }

                reader->Close();
            }
            finally
            {
                if (connection->State == ConnectionState::Open)
                    connection->Close();
            }

            return apartments;
        }
    };

    public ref class Office : public House
    {
    public:
        static List<Office^>^ offices = gcnew List<Office^>();

        
        static List<Office^>^ LoadAllFromDatabase(SqlConnection^ connection)
        {
            List<Office^>^ offices = gcnew List<Office^>();

            try
            {
                String^ query = "SELECT * FROM Houses WHERE Type = 'Office'";
                SqlCommand^ command = gcnew SqlCommand(query, connection);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                while (reader->Read())
                {
                    Office^ office = gcnew Office();
                    office->LoadFromDatabase(reader);
                    offices->Add(office);
                }

                reader->Close();
            }
            finally
            {
                if (connection->State == ConnectionState::Open)
                    connection->Close();
            }

            return offices;
        }
    };

    public ref class Shop : public House
    {
    public:
        static List<Shop^>^ shops = gcnew List<Shop^>();
        static List<Shop^>^ LoadAllFromDatabase(SqlConnection^ connection)
        {
            List<Shop^>^ shops = gcnew List<Shop^>();

            try
            {
                String^ query = "SELECT * FROM Houses WHERE Type = 'Shop'";
                SqlCommand^ command = gcnew SqlCommand(query, connection);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                while (reader->Read())
                {
                    Shop^ shop = gcnew Shop();
                    shop->LoadFromDatabase(reader);
                    shops->Add(shop);
                }

                reader->Close();
            }
            finally
            {
                if (connection->State == ConnectionState::Open)
                    connection->Close();

            }

            return shops;
        }
    };

    public ref class Industrial : public House
    {
    public:
        static List<Industrial^>^ industrials = gcnew List<Industrial^>();

        static List<Industrial^>^ LoadAllFromDatabase(SqlConnection^ connection)
        {
            List<Industrial^>^ industrials = gcnew List<Industrial^>();

            try
            {
                String^ query = "SELECT * FROM Houses WHERE Type = 'Industrial'";
                SqlCommand^ command = gcnew SqlCommand(query, connection);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                while (reader->Read())
                {
                    Industrial^ industrial = gcnew Industrial();
                    industrial->LoadFromDatabase(reader);
                    industrials->Add(industrial);
                }

                reader->Close();
            }
            finally
            {
                if (connection->State == ConnectionState::Open)
                    connection->Close();
            }

            return industrials;
        }
    };

    public ref class Warehouse : public House
    {
    public:
        static List<Warehouse^>^ warehouses = gcnew List<Warehouse^>();

        static List<Warehouse^>^ LoadAllFromDatabase(SqlConnection^ connection)
        {
            List<Warehouse^>^ warehouses = gcnew List<Warehouse^>();

            try
            {
                String^ query = "SELECT * FROM Houses WHERE Type = 'Warehouse'";
                SqlCommand^ command = gcnew SqlCommand(query, connection);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                while (reader->Read())
                {
                    Warehouse^ warehouse = gcnew Warehouse();
                    warehouse->LoadFromDatabase(reader);
                    warehouses->Add(warehouse);
                }

                reader->Close();
            }
            finally
            {
                if (connection->State == ConnectionState::Open)
                    connection->Close();
            }

            return warehouses;
        }
    };
    public ref class UserFrom
    {
    public:
        String^ userLogin;
        String^ userPassword;
        int^ userID;
        bool^ isadmin;
        void setRole(bool^ userRole)
        {
            this->isadmin = userRole;
        }


        bool^ getRole()
        {
            return isadmin;
        }
        String^ GetPass()
        {
            return userPassword;
        }
        int^ GetuserID()
        {
            return userID;
        }
        String^ GetLogin()
        {
            return userLogin;
        }

        void setPass(String^ userPassword)
        {
            this->userPassword = userPassword;
        }
        void SetuserID(int^ userID)
        {
            this->userID = userID;
        }
        void setLogin(String^ userLogin)
        {
            this->userLogin = userLogin;
        }
    };

}
