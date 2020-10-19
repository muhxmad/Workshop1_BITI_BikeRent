#pragma once
#include<regex>
#include<stdio.h>
#include <ctime>
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >
#using <System.dll>
namespace insolusi {

	//using namespace System::DateTime;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for mainMenuForm
	/// </summary>
	public ref class mainMenuForm : public System::Windows::Forms::Form
	{
	public:
		String^ word;
		mainMenuForm(void)
		{
			InitializeComponent();
			//fillListBox();
			calculatePrice();
			//
			//TODO: Add the constructor code here
			//
		}
		mainMenuForm(String^ text)
		{

			InitializeComponent();
			word = text;
			//
			//TODO: Add the constructor code here
			//
		}

	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::ListBox^ bikeList;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ lblPriceDay;
	private: System::Windows::Forms::Label^ label21;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::RichTextBox^ txtFaculty;
	private: System::Windows::Forms::RichTextBox^ txtName;
	private: System::Windows::Forms::RichTextBox^ txtError;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::TextBox^ lblPass;
	private: System::Windows::Forms::TextBox^ lbliD;
	private: System::Windows::Forms::TextBox^ lblEmail;
	private: System::Windows::Forms::TextBox^ lblPhone;

	private: System::Windows::Forms::TextBox^ lblDormitory;


	private: System::Windows::Forms::Label^ lblMatrix;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::PictureBox^ bikePicture;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataReservation;

	private: System::Windows::Forms::TextBox^ lblRole;




		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ grpStudent;
	private: System::Windows::Forms::GroupBox^ grpBike;
	protected:

	protected:

	private: System::Windows::Forms::GroupBox^ grpDetail;









	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;




	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ lblDay;
	private: System::Windows::Forms::RichTextBox^ txtRemark;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblRegisterDate;
	private: System::Windows::Forms::Label^ label15;




	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ grpBikeDetail;

	private: System::Windows::Forms::Label^ lblOwnerName;
	private: System::Windows::Forms::Label^ lblBikePrice;
	private: System::Windows::Forms::Label^ lblBikeType;
	private: System::Windows::Forms::Label^ lblBikeName;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btnSubmit;

	private: System::Windows::Forms::Button^ button2;












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
			this->grpStudent = (gcnew System::Windows::Forms::GroupBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->lblPass = (gcnew System::Windows::Forms::TextBox());
			this->lbliD = (gcnew System::Windows::Forms::TextBox());
			this->lblEmail = (gcnew System::Windows::Forms::TextBox());
			this->lblPhone = (gcnew System::Windows::Forms::TextBox());
			this->lblDormitory = (gcnew System::Windows::Forms::TextBox());
			this->lblRole = (gcnew System::Windows::Forms::TextBox());
			this->txtFaculty = (gcnew System::Windows::Forms::RichTextBox());
			this->txtName = (gcnew System::Windows::Forms::RichTextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblMatrix = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtError = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblRegisterDate = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->grpBike = (gcnew System::Windows::Forms::GroupBox());
			this->bikeList = (gcnew System::Windows::Forms::ListBox());
			this->grpDetail = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblDay = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtRemark = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->grpBikeDetail = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->lblPriceDay = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->lblOwnerName = (gcnew System::Windows::Forms::Label());
			this->lblBikePrice = (gcnew System::Windows::Forms::Label());
			this->lblBikeType = (gcnew System::Windows::Forms::Label());
			this->lblBikeName = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->bikePicture = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataReservation = (gcnew System::Windows::Forms::DataGridView());
			this->grpStudent->SuspendLayout();
			this->grpBike->SuspendLayout();
			this->grpDetail->SuspendLayout();
			this->grpBikeDetail->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bikePicture))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataReservation))->BeginInit();
			this->SuspendLayout();
			// 
			// grpStudent
			// 
			this->grpStudent->Controls->Add(this->btnUpdate);
			this->grpStudent->Controls->Add(this->btnEdit);
			this->grpStudent->Controls->Add(this->lblPass);
			this->grpStudent->Controls->Add(this->lbliD);
			this->grpStudent->Controls->Add(this->lblEmail);
			this->grpStudent->Controls->Add(this->lblPhone);
			this->grpStudent->Controls->Add(this->lblDormitory);
			this->grpStudent->Controls->Add(this->lblRole);
			this->grpStudent->Controls->Add(this->txtFaculty);
			this->grpStudent->Controls->Add(this->txtName);
			this->grpStudent->Controls->Add(this->label22);
			this->grpStudent->Controls->Add(this->label3);
			this->grpStudent->Controls->Add(this->label1);
			this->grpStudent->Controls->Add(this->lblMatrix);
			this->grpStudent->Controls->Add(this->label14);
			this->grpStudent->Controls->Add(this->label13);
			this->grpStudent->Controls->Add(this->label12);
			this->grpStudent->Controls->Add(this->label10);
			this->grpStudent->Controls->Add(this->label9);
			this->grpStudent->Location = System::Drawing::Point(13, 12);
			this->grpStudent->Name = L"grpStudent";
			this->grpStudent->Size = System::Drawing::Size(307, 482);
			this->grpStudent->TabIndex = 0;
			this->grpStudent->TabStop = false;
			this->grpStudent->Text = L"Rider Details";
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(210, 448);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(85, 28);
			this->btnUpdate->TabIndex = 10;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &mainMenuForm::btnUpdate_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(119, 448);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(85, 28);
			this->btnEdit->TabIndex = 2152;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &mainMenuForm::btnEdit_Click);
			// 
			// lblPass
			// 
			this->lblPass->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lblPass->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPass->Location = System::Drawing::Point(39, 417);
			this->lblPass->Multiline = true;
			this->lblPass->Name = L"lblPass";
			this->lblPass->Size = System::Drawing::Size(188, 25);
			this->lblPass->TabIndex = 9;
			this->lblPass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lbliD
			// 
			this->lbliD->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lbliD->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbliD->Location = System::Drawing::Point(39, 367);
			this->lbliD->Name = L"lbliD";
			this->lbliD->Size = System::Drawing::Size(188, 28);
			this->lbliD->TabIndex = 8;
			this->lbliD->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblEmail
			// 
			this->lblEmail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(38, 323);
			this->lblEmail->Multiline = true;
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(218, 24);
			this->lblEmail->TabIndex = 7;
			this->lblEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblPhone
			// 
			this->lblPhone->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(38, 159);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(235, 28);
			this->lblPhone->TabIndex = 6;
			this->lblPhone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblDormitory
			// 
			this->lblDormitory->Cursor = System::Windows::Forms::Cursors::No;
			this->lblDormitory->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDormitory->Location = System::Drawing::Point(38, 276);
			this->lblDormitory->Multiline = true;
			this->lblDormitory->Name = L"lblDormitory";
			this->lblDormitory->ReadOnly = true;
			this->lblDormitory->Size = System::Drawing::Size(188, 23);
			this->lblDormitory->TabIndex = 2147;
			this->lblDormitory->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblRole
			// 
			this->lblRole->Cursor = System::Windows::Forms::Cursors::No;
			this->lblRole->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRole->Location = System::Drawing::Point(166, 38);
			this->lblRole->Multiline = true;
			this->lblRole->Name = L"lblRole";
			this->lblRole->ReadOnly = true;
			this->lblRole->Size = System::Drawing::Size(129, 25);
			this->lblRole->TabIndex = 2145;
			this->lblRole->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtFaculty
			// 
			this->txtFaculty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->txtFaculty->Location = System::Drawing::Point(38, 210);
			this->txtFaculty->Name = L"txtFaculty";
			this->txtFaculty->ReadOnly = true;
			this->txtFaculty->Size = System::Drawing::Size(235, 46);
			this->txtFaculty->TabIndex = 2144;
			this->txtFaculty->Text = L"";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->txtName->Location = System::Drawing::Point(38, 106);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(235, 34);
			this->txtName->TabIndex = 5;
			this->txtName->Text = L"";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(5, 302);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(42, 17);
			this->label22->TabIndex = 18;
			this->label22->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 397);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Passport ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 347);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Identification";
			// 
			// lblMatrix
			// 
			this->lblMatrix->AutoSize = true;
			this->lblMatrix->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMatrix->Location = System::Drawing::Point(19, 38);
			this->lblMatrix->Name = L"lblMatrix";
			this->lblMatrix->Size = System::Drawing::Size(117, 25);
			this->lblMatrix->TabIndex = 6;
			this->lblMatrix->Text = L"User_Matrix";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(7, 190);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 17);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Faculty";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 259);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(69, 17);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Dormitory";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(183, 17);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 17);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Member type";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 142);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 17);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Phone No.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 81);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 17);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Name";
			// 
			// txtError
			// 
			this->txtError->Cursor = System::Windows::Forms::Cursors::No;
			this->txtError->Location = System::Drawing::Point(154, 18);
			this->txtError->Name = L"txtError";
			this->txtError->ReadOnly = true;
			this->txtError->Size = System::Drawing::Size(177, 112);
			this->txtError->TabIndex = 20;
			this->txtError->TabStop = false;
			this->txtError->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 497);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 39);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Log out";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainMenuForm::button2_Click);
			// 
			// lblRegisterDate
			// 
			this->lblRegisterDate->AutoSize = true;
			this->lblRegisterDate->Location = System::Drawing::Point(118, 514);
			this->lblRegisterDate->Name = L"lblRegisterDate";
			this->lblRegisterDate->Size = System::Drawing::Size(130, 17);
			this->lblRegisterDate->TabIndex = 11;
			this->lblRegisterDate->Text = L"DateTime_Register";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(118, 497);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 17);
			this->label15->TabIndex = 10;
			this->label15->Text = L"Date Register";
			// 
			// grpBike
			// 
			this->grpBike->Controls->Add(this->bikeList);
			this->grpBike->Location = System::Drawing::Point(326, 243);
			this->grpBike->Name = L"grpBike";
			this->grpBike->Size = System::Drawing::Size(301, 293);
			this->grpBike->TabIndex = 1;
			this->grpBike->TabStop = false;
			this->grpBike->Text = L"Bike to Rent";
			// 
			// bikeList
			// 
			this->bikeList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bikeList->FormattingEnabled = true;
			this->bikeList->ItemHeight = 16;
			this->bikeList->Location = System::Drawing::Point(3, 18);
			this->bikeList->Name = L"bikeList";
			this->bikeList->Size = System::Drawing::Size(295, 272);
			this->bikeList->TabIndex = 0;
			this->bikeList->SelectedIndexChanged += gcnew System::EventHandler(this, &mainMenuForm::bikeList_SelectedIndexChanged);
			// 
			// grpDetail
			// 
			this->grpDetail->Controls->Add(this->dateTimePicker3);
			this->grpDetail->Controls->Add(this->lblDay);
			this->grpDetail->Controls->Add(this->label8);
			this->grpDetail->Controls->Add(this->label7);
			this->grpDetail->Controls->Add(this->label5);
			this->grpDetail->Controls->Add(this->label4);
			this->grpDetail->Controls->Add(this->dateTimePicker1);
			this->grpDetail->Controls->Add(this->dateTimePicker2);
			this->grpDetail->Location = System::Drawing::Point(326, 12);
			this->grpDetail->Name = L"grpDetail";
			this->grpDetail->Size = System::Drawing::Size(301, 223);
			this->grpDetail->TabIndex = 2;
			this->grpDetail->TabStop = false;
			this->grpDetail->Text = L"Bike Rental Detail";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CustomFormat = L" HH:MM tt";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker3->Location = System::Drawing::Point(62, 180);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->ShowUpDown = true;
			this->dateTimePicker3->Size = System::Drawing::Size(111, 22);
			this->dateTimePicker3->TabIndex = 2;
			this->dateTimePicker3->Value = System::DateTime(2020, 4, 2, 19, 11, 0, 0);
			// 
			// lblDay
			// 
			this->lblDay->AutoSize = true;
			this->lblDay->Location = System::Drawing::Point(21, 147);
			this->lblDay->Name = L"lblDay";
			this->lblDay->Size = System::Drawing::Size(16, 17);
			this->lblDay->TabIndex = 10;
			this->lblDay->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 180);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 17);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Time";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 147);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Days";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"2nd Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"1st Date";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(21, 49);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(152, 22);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->Value = System::DateTime(2020, 4, 2, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &mainMenuForm::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(21, 105);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(152, 22);
			this->dateTimePicker2->TabIndex = 1;
			this->dateTimePicker2->Value = System::DateTime(2020, 4, 2, 0, 0, 0, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &mainMenuForm::dateTimePicker2_ValueChanged);
			// 
			// txtRemark
			// 
			this->txtRemark->Location = System::Drawing::Point(9, 350);
			this->txtRemark->Name = L"txtRemark";
			this->txtRemark->Size = System::Drawing::Size(322, 84);
			this->txtRemark->TabIndex = 8;
			this->txtRemark->Text = L"";
			this->txtRemark->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainMenuForm::enterKey);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 326);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Notes";
			// 
			// grpBikeDetail
			// 
			this->grpBikeDetail->Controls->Add(this->label19);
			this->grpBikeDetail->Controls->Add(this->lblPriceDay);
			this->grpBikeDetail->Controls->Add(this->label21);
			this->grpBikeDetail->Controls->Add(this->label2);
			this->grpBikeDetail->Controls->Add(this->btnSubmit);
			this->grpBikeDetail->Controls->Add(this->lblOwnerName);
			this->grpBikeDetail->Controls->Add(this->txtError);
			this->grpBikeDetail->Controls->Add(this->lblBikePrice);
			this->grpBikeDetail->Controls->Add(this->lblBikeType);
			this->grpBikeDetail->Controls->Add(this->lblBikeName);
			this->grpBikeDetail->Controls->Add(this->label18);
			this->grpBikeDetail->Controls->Add(this->label17);
			this->grpBikeDetail->Controls->Add(this->txtRemark);
			this->grpBikeDetail->Controls->Add(this->label16);
			this->grpBikeDetail->Controls->Add(this->label11);
			this->grpBikeDetail->Controls->Add(this->label6);
			this->grpBikeDetail->Controls->Add(this->bikePicture);
			this->grpBikeDetail->Location = System::Drawing::Point(639, 12);
			this->grpBikeDetail->Name = L"grpBikeDetail";
			this->grpBikeDetail->Size = System::Drawing::Size(337, 524);
			this->grpBikeDetail->TabIndex = 9;
			this->grpBikeDetail->TabStop = false;
			this->grpBikeDetail->Text = L"Bike Detail";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 283);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 17);
			this->label19->TabIndex = 19;
			this->label19->Text = L"RM";
			// 
			// lblPriceDay
			// 
			this->lblPriceDay->AutoSize = true;
			this->lblPriceDay->Location = System::Drawing::Point(39, 283);
			this->lblPriceDay->Name = L"lblPriceDay";
			this->lblPriceDay->Size = System::Drawing::Size(16, 17);
			this->lblPriceDay->TabIndex = 18;
			this->lblPriceDay->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 266);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(170, 17);
			this->label21->TabIndex = 17;
			this->label21->Text = L"Total Rent (Days x Price) ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 231);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 17);
			this->label2->TabIndex = 16;
			this->label2->Text = L"RM";
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(210, 456);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(121, 62);
			this->btnSubmit->TabIndex = 10;
			this->btnSubmit->Text = L"Submit Reservation";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &mainMenuForm::btnSubmit_Click);
			// 
			// lblOwnerName
			// 
			this->lblOwnerName->AutoSize = true;
			this->lblOwnerName->Location = System::Drawing::Point(16, 38);
			this->lblOwnerName->Name = L"lblOwnerName";
			this->lblOwnerName->Size = System::Drawing::Size(0, 17);
			this->lblOwnerName->TabIndex = 15;
			// 
			// lblBikePrice
			// 
			this->lblBikePrice->AutoSize = true;
			this->lblBikePrice->Location = System::Drawing::Point(39, 231);
			this->lblBikePrice->Name = L"lblBikePrice";
			this->lblBikePrice->Size = System::Drawing::Size(16, 17);
			this->lblBikePrice->TabIndex = 14;
			this->lblBikePrice->Text = L"0";
			// 
			// lblBikeType
			// 
			this->lblBikeType->AutoSize = true;
			this->lblBikeType->Location = System::Drawing::Point(16, 127);
			this->lblBikeType->Name = L"lblBikeType";
			this->lblBikeType->Size = System::Drawing::Size(0, 17);
			this->lblBikeType->TabIndex = 13;
			// 
			// lblBikeName
			// 
			this->lblBikeName->AutoSize = true;
			this->lblBikeName->Location = System::Drawing::Point(16, 81);
			this->lblBikeName->Name = L"lblBikeName";
			this->lblBikeName->Size = System::Drawing::Size(0, 17);
			this->lblBikeName->TabIndex = 12;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 214);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(132, 17);
			this->label18->TabIndex = 4;
			this->label18->Text = L"Bike Price per Days";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 18);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(80, 17);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Bike Owner";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 110);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(71, 17);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Bike Type";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 64);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 17);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Bike Name";
			// 
			// bikePicture
			// 
			this->bikePicture->Location = System::Drawing::Point(144, 153);
			this->bikePicture->Name = L"bikePicture";
			this->bikePicture->Size = System::Drawing::Size(187, 110);
			this->bikePicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->bikePicture->TabIndex = 0;
			this->bikePicture->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataReservation);
			this->groupBox1->Location = System::Drawing::Point(983, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(480, 523);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Reserve Bike";
			// 
			// dataReservation
			// 
			this->dataReservation->AllowUserToAddRows = false;
			this->dataReservation->AllowUserToDeleteRows = false;
			this->dataReservation->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataReservation->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataReservation->Location = System::Drawing::Point(3, 18);
			this->dataReservation->Name = L"dataReservation";
			this->dataReservation->ReadOnly = true;
			this->dataReservation->RowHeadersWidth = 51;
			this->dataReservation->RowTemplate->Height = 24;
			this->dataReservation->Size = System::Drawing::Size(474, 502);
			this->dataReservation->TabIndex = 0;
			// 
			// mainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1475, 548);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->grpBikeDetail);
			this->Controls->Add(this->grpDetail);
			this->Controls->Add(this->grpBike);
			this->Controls->Add(this->grpStudent);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->lblRegisterDate);
			this->MaximumSize = System::Drawing::Size(1493, 595);
			this->MinimumSize = System::Drawing::Size(1493, 595);
			this->Name = L"mainMenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reservation Form";
			this->Activated += gcnew System::EventHandler(this, &mainMenuForm::mainMenuForm_Activated);
			this->Load += gcnew System::EventHandler(this, &mainMenuForm::mainMenuForm_Load);
			this->grpStudent->ResumeLayout(false);
			this->grpStudent->PerformLayout();
			this->grpBike->ResumeLayout(false);
			this->grpDetail->ResumeLayout(false);
			this->grpDetail->PerformLayout();
			this->grpBikeDetail->ResumeLayout(false);
			this->grpBikeDetail->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bikePicture))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataReservation))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:void fillListBox(void) {
				//String^ bikeListval = bikeList->Text;
		String^ con = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		MySqlCommand^ cmdData = gcnew MySqlCommand("SELECT * FROM bike_table ;", conData);
		MySqlDataReader^ myRead;
		try {
			conData->Open();
			myRead = cmdData->ExecuteReader();


			while (myRead->Read()) {


				String^ bName = myRead->GetString("bike_name");
				String^ bPrice = myRead->GetInt32("bike_price").ToString();
				String^ bType = myRead->GetString("bike_type");
				String^ bOwner = myRead->GetString("bike_owner");
				//Image^ bImage = myRead->GetByte("bike_img").To;
				//bikeList->Items->Add("Name:"+bName+" Bike Type:"+bType);
				bikeList->Items->Add(bName);
			}
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
			}

 private:void dateChanged(void) {

		   DateTime FirstDate = dateTimePicker1->Value;
		   DateTime SecondDate = dateTimePicker2->Value;
		   // Difference in days, hours, and minutes.
		   TimeSpan ts = SecondDate - FirstDate;
		   // Difference in days.
		   int differenceInDays = ts.Days;

		   String^ day = System::Convert::ToString(differenceInDays);
		   this->lblDay->Text = day;

		   if (differenceInDays > 7) {
			   txtError->Text = "Can`t rent more than 7 days";
			   lblPriceDay->Text = "0";
		   }
		   else if (differenceInDays < 0) {
			   txtError->Text = "Date Error";
			   lblPriceDay->Text = "0";
		   }
		   else if (differenceInDays == 0) {
			   lblPriceDay->Text = Convert::ToString(Convert::ToInt32(lblBikePrice->Text) * 0.70);
		   }
		   else if (differenceInDays<=7 && differenceInDays>=1)
		   {
			   txtError->Text = "";
			   calculatePrice();
		   }
	   }

private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	dateChanged();
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	dateChanged();
}

//logout button
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do You want to log out?", "Log out", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}

private: System::Void mainMenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
	lblMatrix->Text = word;
	fillListBox();

}
 private:void txtReadOnly(void) {
	 txtName->Enabled = false;
	 lblPhone->Enabled = false;
	 lblEmail->Enabled = false;
	 lbliD->Enabled = false;
	 lblPass->Enabled = false;
	 btnUpdate->Enabled = false;
	 txtError->Enabled = false;
}
private:void editButtonEnable(void) {
	txtName->Enabled = true;
	lblPhone->Enabled = true;
	lblEmail->Enabled = true;
	lbliD->Enabled = true;
	lblPass->Enabled = true;
	btnUpdate->Enabled = true;
}
private:void dataReservt(void) {
	//Code for datagridview
	String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	//MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM reservation_table WHERE DATEDIFF(mm, MyDateColumn, GETDATE()) = '"+cmbMonths->Text+"' AND DATEDIFF(yyyy, MyDateColumn, GETDATE()) = '"+txtYear->Text+"' AND reservation_response ='Yes';", conDatabase);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT  `reservation_response` as 'Response',`reservation_1stDate` as 'Start Date',`reservation_2ndDate` as 'End Date',`bike_name`as 'Bike Name',`reservation_matrix` as 'Matrix No.',`reservation_customer`as 'Name',`user_phoneNumber` as 'Rider Phone No.', `reservation_price` as 'TOTALAMOUNT' FROM `reservation_table` WHERE reservation_matrix='"+lblMatrix->Text+"';", conDatabase);
	//MySqlDataReader^ myReader;
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDatabase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dataReservation->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception ^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void mainMenuForm_Activated(System::Object^ sender, System::EventArgs^ e) {
	dataReservt();
	txtReadOnly();
	//label database connection
	String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM user_table where user_matrix='" + this->lblMatrix->Text + "';", conDatabase);
	MySqlDataReader^ dr;
	try {
		conDatabase->Open();
		dr = cmdDatabase->ExecuteReader();

		while (dr->Read()) {
			txtName->Text = dr->GetString(3);
			lblEmail->Text = dr->GetString(4);
			lbliD->Text = dr->GetString(5);
			lblPass->Text = dr->GetString(6);
			lblPhone->Text = dr->GetString(7);
			lblDormitory->Text = dr->GetString(8);
			txtFaculty->Text = dr->GetString(9);
			lblRegisterDate->Text = dr->GetString(10);
			lblRole->Text = dr->GetString(11);
			//lblName->Text = dr->GetString(3);
		}
		conDatabase->Close();
	}
	catch (Exception ^ ex) {
		MessageBox::Show(ex->Message);
	}

	//fillListBox();
}

	  
private: System::Void bikeList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ bikeListval=bikeList->Text;
	String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bike_table WHERE bike_name='"+ bikeListval +"';", conDatabase);
	MySqlDataReader^ myReader;
	try {
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();

		if (myReader->Read()) {
			
			
			String^ bikeName = myReader->GetString("bike_name");
			lblBikeName->Text = bikeName;
			String^ bikeType = myReader->GetString("bike_type");
			lblBikeType->Text = bikeType;
			String^ bikePrice = myReader->GetInt32("bike_price").ToString();
			lblBikePrice->Text = bikePrice;
			String^ bikeOwner = myReader->GetString("bike_owner");
			lblOwnerName->Text = bikeOwner;
			//Image^ bikeImage= myReader->GetString("bike_img");
		}
	}
	catch (Exception ^ ex) {
		MessageBox::Show(ex->Message);
	}
	dateChanged();
	//calculatePrice();
}
	   private:void calculatePrice(void) {
		   lblPriceDay->Text = Convert::ToString(Convert::ToInt32(lblBikePrice->Text) * Convert::ToInt32(lblDay->Text));
	   }
private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	checkDetail();
}
	   private:void checkDetail(void) {

		   Int32 priceDay = Convert::ToInt32(lblBikePrice->Text);
		   Int32 reserveDay = Convert::ToInt32(lblDay->Text);
		   if (reserveDay > 7 & reserveDay < 0) {
			   MessageBox::Show("Error in Reservation date");
			   bikeList->Items->Clear();
			   fillListBox();
		   }
		   else if (priceDay <= 0) {
			   MessageBox::Show("Error in Reservation price");
			   bikeList->Items->Clear();
			   fillListBox();
		   }
		   else {
			   saveData();
			   bikeList->Items->Clear();
			   fillListBox();
		   }
	   }
	   private:void resetData(void) {
		   lblOwnerName->Text = "";
		   lblBikeName->Text = "";
		   lblBikeType->Text = "";
		   lblDay->Text = "0";
		   lblBikePrice->Text = "0";
		   lblPriceDay->Text = "0";
	   }
private:void saveData(void) {
  String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
MySqlCommand^ cmdDatabase = gcnew MySqlCommand("INSERT INTO reservation_table(bike_name, reservation_1stDate, reservation_2ndDate, reservation_time,reservation_day, reservation_price, bike_owner, reservation_customer, reservation_matrix, user_phoneNumber,reservation_remark,reservation_response) VALUES ('" + this->lblBikeName->Text + "','" + this->dateTimePicker1->Text + "','" + this->dateTimePicker2->Text + "','" + this->dateTimePicker3->Text + "','" + this->lblDay->Text + "','" + this->lblPriceDay->Text + "','" + this->lblOwnerName->Text + "','" + this->txtName->Text + "','" + this->lblMatrix->Text + "','" + this->lblPhone->Text + "','" + this->txtRemark->Text + "','pending');", conDatabase);
 MySqlDataReader^ myReader;
try {
  conDatabase->Open();
	   myReader = cmdDatabase->ExecuteReader();
	   while (myReader->Read()) {
				   //count = count + 1;
	   }
   MessageBox::Show("your bike reservation has been added !! thank you for using inSolusi");
   resetData();
  }
   catch (Exception ^ ex) {
	   MessageBox::Show(ex->Message);
   }
}
	   private:System::Void enterKey(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ kea) {
		   if (kea->KeyCode == Keys::Enter) {
			   checkDetail();
		   }
	   }

private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	editButtonEnable();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("UPDATE user_table SET user_name='"+txtName->Text+"',user_email='" + lblEmail->Text + "',user_id='" + lbliD->Text + "',user_passportId='" + lblPass->Text + "',user_phoneNumber='" + lblPhone->Text + "' WHERE user_matrix='" + lblMatrix->Text + "';", conDatabase);
	MySqlDataReader^ myReader;
	if (MessageBox::Show("Confirm Update?", "Update User Detail", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		try {
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			while (myReader->Read()) {
				//count = count + 1;
			}
			bikeList->Items->Clear();
			fillListBox();
			MessageBox::Show(txtName->Text + " " + Environment::NewLine + "Detail Has Been Updated !!");
			
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
};
}
