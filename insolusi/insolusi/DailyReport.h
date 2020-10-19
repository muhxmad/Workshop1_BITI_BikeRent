#pragma once
#include <string>;
#include<math.h>;
namespace insolusi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DailyReport
	/// </summary>
	public ref class DailyReport : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		DailyReport(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DailyReport(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DailyReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataReportDate;
	protected:

	private: System::Windows::Forms::DateTimePicker^ datePicker;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtSearch;


	private: System::Windows::Forms::TextBox^ txtTotalPrice;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmbSearch;

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
			this->dataReportDate = (gcnew System::Windows::Forms::DataGridView());
			this->datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->txtTotalPrice = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbSearch = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataReportDate))->BeginInit();
			this->SuspendLayout();
			// 
			// dataReportDate
			// 
			this->dataReportDate->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataReportDate->Location = System::Drawing::Point(26, 89);
			this->dataReportDate->Name = L"dataReportDate";
			this->dataReportDate->RowHeadersWidth = 51;
			this->dataReportDate->RowTemplate->Height = 24;
			this->dataReportDate->Size = System::Drawing::Size(710, 238);
			this->dataReportDate->TabIndex = 0;
			// 
			// datePicker
			// 
			this->datePicker->CustomFormat = L"yyyy-MM-dd";
			this->datePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePicker->Location = System::Drawing::Point(26, 43);
			this->datePicker->Name = L"datePicker";
			this->datePicker->Size = System::Drawing::Size(118, 22);
			this->datePicker->TabIndex = 1;
			this->datePicker->CloseUp += gcnew System::EventHandler(this, &DailyReport::datePicker_CloseUp);
			this->datePicker->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &DailyReport::datePicker_KeyUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select Date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(479, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Search";
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(609, 45);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(127, 22);
			this->txtSearch->TabIndex = 1;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &DailyReport::txtSearch_TextChanged);
			// 
			// txtTotalPrice
			// 
			this->txtTotalPrice->Cursor = System::Windows::Forms::Cursors::No;
			this->txtTotalPrice->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTotalPrice->Location = System::Drawing::Point(792, 161);
			this->txtTotalPrice->Multiline = true;
			this->txtTotalPrice->Name = L"txtTotalPrice";
			this->txtTotalPrice->ReadOnly = true;
			this->txtTotalPrice->Size = System::Drawing::Size(130, 29);
			this->txtTotalPrice->TabIndex = 5;
			this->txtTotalPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12));
			this->label3->Location = System::Drawing::Point(742, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Total Order";
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Location = System::Drawing::Point(780, 113);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(0, 17);
			this->lblDate->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(743, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(170, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Total Price (Per day)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(742, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 29);
			this->label5->TabIndex = 10;
			this->label5->Text = L"RM";
			// 
			// cmbSearch
			// 
			this->cmbSearch->FormattingEnabled = true;
			this->cmbSearch->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Rider Name", L"Rider Matrix No.", L"Bike Name" });
			this->cmbSearch->Location = System::Drawing::Point(482, 43);
			this->cmbSearch->Name = L"cmbSearch";
			this->cmbSearch->Size = System::Drawing::Size(121, 24);
			this->cmbSearch->TabIndex = 11;
			this->cmbSearch->Text = L"Rider Name";
			// 
			// DailyReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 350);
			this->Controls->Add(this->cmbSearch);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->txtTotalPrice);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->datePicker);
			this->Controls->Add(this->dataReportDate);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"DailyReport";
			this->Text = L"DailyReport";
			this->Load += gcnew System::EventHandler(this, &DailyReport::DailyReport_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataReportDate))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void dataDateSelect() {
			//Code for datagridview
			String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			//MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM reservation_table WHERE DATEDIFF(mm, MyDateColumn, GETDATE()) = '"+cmbMonths->Text+"' AND DATEDIFF(yyyy, MyDateColumn, GETDATE()) = '"+txtYear->Text+"' AND reservation_response ='Yes';", conDatabase);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT `reservation_1stDate` as 'Start Date',`reservation_2ndDate` as 'Expired', `reservation_response` as 'Response',`bike_name`as 'Bike Name',`reservation_matrix` as 'Matrix No.',`reservation_customer`as 'Name',`user_phoneNumber` as 'Rider Phone No.', `reservation_price` as 'TOTAL AMOUNT (RM)' FROM `reservation_table` WHERE reservation_1stDate='" + this->datePicker->Text + "' AND reservation_response= 'Yes';", conDatabase);
			//MySqlDataReader^ myReader;
			try {
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDatabase;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbdataset;
				dataReportDate->DataSource = bSource;
				sda->Update(dbdataset);


			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}

	private: System::Void DailyReport_Load(Object^ sender, EventArgs^ e) {

	}

		   void searchItem() {
			   //Code for datagridview
			   String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
			   MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			   if (cmbSearch->Text == "Rider Name") {
				   MySqlCommand^ cmdRider = gcnew MySqlCommand("SELECT `reservation_1stDate` as 'Start Date',`reservation_2ndDate` as 'Expired', `reservation_response` as 'Response',`bike_name`as 'Bike Name',`reservation_matrix` as 'Matrix No.',`reservation_customer`as 'Name',`user_phoneNumber` as 'Rider Phone No.', `reservation_price` as 'TOTAL AMOUNT (RM)' FROM `reservation_table` WHERE reservation_customer LIKE '" + txtSearch->Text + "' AND reservation_response= 'Yes';", conDatabase);
				   //MySqlDataReader^ myReader;
				   try {
					   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
					   sda->SelectCommand = cmdRider;
					   DataTable^ dbdataset = gcnew DataTable();
					   sda->Fill(dbdataset);
					   BindingSource^ bSource = gcnew BindingSource();

					   bSource->DataSource = dbdataset;
					   dataReportDate->DataSource = bSource;
					   sda->Update(dbdataset);
				   }
				   catch (Exception^ ex) {
					   MessageBox::Show(ex->Message);
				   }
			   }
			   else if (cmbSearch->Text == "Rider Matrix No.") {
				   MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT `reservation_1stDate` as 'Start Date',`reservation_2ndDate` as 'Expired', `reservation_response` as 'Response',`bike_name`as 'Bike Name',`reservation_matrix` as 'Matrix No.',`reservation_customer`as 'Name',`user_phoneNumber` as 'Rider Phone No.', `reservation_price` as 'TOTAL AMOUNT (RM)' FROM `reservation_table` WHERE reservation_matrix LIKE '" + txtSearch->Text + "' AND reservation_response= 'Yes';", conDatabase);
				   try {
					   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
					   sda->SelectCommand = cmdDatabase;
					   DataTable^ dbdataset = gcnew DataTable();
					   sda->Fill(dbdataset);
					   BindingSource^ bSource = gcnew BindingSource();

					   bSource->DataSource = dbdataset;
					   dataReportDate->DataSource = bSource;
					   sda->Update(dbdataset);
				   }
				   catch (Exception^ ex) {
					   MessageBox::Show(ex->Message);
				   }
			   }
			   else if (cmbSearch->Text == "Bike Name") {
				   MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT `reservation_1stDate` as 'Start Date',`reservation_2ndDate` as 'Expired', `reservation_response` as 'Response',`bike_name`as 'Bike Name',`reservation_matrix` as 'Matrix No.',`reservation_customer`as 'Name',`user_phoneNumber` as 'Rider Phone No.', `reservation_price` as 'TOTAL AMOUNT (RM)' FROM `reservation_table` WHERE bike_name LIKE '" + txtSearch->Text + "' AND reservation_response= 'Yes';", conDatabase);
				   try {
					   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
					   sda->SelectCommand = cmdDatabase;
					   DataTable^ dbdataset = gcnew DataTable();
					   sda->Fill(dbdataset);
					   BindingSource^ bSource = gcnew BindingSource();

					   bSource->DataSource = dbdataset;
					   dataReportDate->DataSource = bSource;
					   sda->Update(dbdataset);
				   }
				   catch (Exception^ ex) {
					   MessageBox::Show(ex->Message);
				   }
			   }
		   
			   }
	   void calculatesum() {
		   double sum=0.00;
		   for (int i = 0;i < dataReportDate->RowCount;i++) {
			   if (dataReportDate->Rows[i] != nullptr && dataReportDate->Rows[i]->Cells[7]->Value != nullptr) {
					sum += Convert::ToDouble(dataReportDate->Rows[i]->Cells[7]->Value);
			   }
			   lblDate->Text = Convert::ToString(i);
		   }
		   txtTotalPrice->Text = Convert::ToString(sum);
		   double x;
		   double::TryParse(txtTotalPrice->Text, x);
		   txtTotalPrice->Text = x.ToString("#,0.00");
		   

	   }
private: System::Void datePicker_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ kea) {
	if (kea->KeyCode == Keys::Enter) {
		dataDateSelect();
		calculatesum();
	}
}
private: System::Void datePicker_CloseUp(System::Object^ sender, System::EventArgs^ e) {
	dataDateSelect();
	calculatesum();
}
private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	searchItem();
	calculatesum();
}
};
}
