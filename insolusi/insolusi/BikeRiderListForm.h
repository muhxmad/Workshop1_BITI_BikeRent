#pragma once

namespace insolusi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BikeRiderListForm
	/// </summary>
	public ref class BikeRiderListForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		BikeRiderListForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BikeRiderListForm(Form^ obj1)
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
		~BikeRiderListForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnDelete;














	private: System::Windows::Forms::GroupBox^ grpBike;
	private: System::Windows::Forms::DataGridView^ RiderData;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ grpStudent;
	private: System::Windows::Forms::TextBox^ lblRole;
	private: System::Windows::Forms::RichTextBox^ txtFaculty;
	private: System::Windows::Forms::RichTextBox^ txtName;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblPass;
	private: System::Windows::Forms::Label^ lbliD;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblDormitory;
	private: System::Windows::Forms::Label^ lblMatrix;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ lblUserID;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ lblRegisterDate;
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->grpBike = (gcnew System::Windows::Forms::GroupBox());
			this->RiderData = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->grpStudent = (gcnew System::Windows::Forms::GroupBox());
			this->lblRegisterDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->lblUserID = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblRole = (gcnew System::Windows::Forms::TextBox());
			this->txtFaculty = (gcnew System::Windows::Forms::RichTextBox());
			this->txtName = (gcnew System::Windows::Forms::RichTextBox());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->lbliD = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblDormitory = (gcnew System::Windows::Forms::Label());
			this->lblMatrix = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->grpBike->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RiderData))->BeginInit();
			this->grpStudent->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(361, 502);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 36);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Refresh";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(660, 502);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(87, 36);
			this->btnDelete->TabIndex = 31;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &BikeRiderListForm::btnDelete_Click);
			// 
			// grpBike
			// 
			this->grpBike->Controls->Add(this->RiderData);
			this->grpBike->Location = System::Drawing::Point(12, 12);
			this->grpBike->Name = L"grpBike";
			this->grpBike->Size = System::Drawing::Size(346, 503);
			this->grpBike->TabIndex = 19;
			this->grpBike->TabStop = false;
			this->grpBike->Text = L"Rider List";
			// 
			// RiderData
			// 
			this->RiderData->AllowUserToAddRows = false;
			this->RiderData->AllowUserToDeleteRows = false;
			this->RiderData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RiderData->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RiderData->Location = System::Drawing::Point(3, 18);
			this->RiderData->Name = L"RiderData";
			this->RiderData->ReadOnly = true;
			this->RiderData->RowHeadersWidth = 51;
			this->RiderData->RowTemplate->Height = 24;
			this->RiderData->Size = System::Drawing::Size(340, 482);
			this->RiderData->TabIndex = 0;
			this->RiderData->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BikeRiderListForm::RiderData_CellClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(562, 502);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 36);
			this->button3->TabIndex = 32;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// grpStudent
			// 
			this->grpStudent->Controls->Add(this->lblRegisterDate);
			this->grpStudent->Controls->Add(this->label15);
			this->grpStudent->Controls->Add(this->lblUserID);
			this->grpStudent->Controls->Add(this->label5);
			this->grpStudent->Controls->Add(this->label2);
			this->grpStudent->Controls->Add(this->lblRole);
			this->grpStudent->Controls->Add(this->txtFaculty);
			this->grpStudent->Controls->Add(this->txtName);
			this->grpStudent->Controls->Add(this->lblEmail);
			this->grpStudent->Controls->Add(this->label22);
			this->grpStudent->Controls->Add(this->lblPhone);
			this->grpStudent->Controls->Add(this->label3);
			this->grpStudent->Controls->Add(this->lblPass);
			this->grpStudent->Controls->Add(this->lbliD);
			this->grpStudent->Controls->Add(this->label1);
			this->grpStudent->Controls->Add(this->lblDormitory);
			this->grpStudent->Controls->Add(this->lblMatrix);
			this->grpStudent->Controls->Add(this->label14);
			this->grpStudent->Controls->Add(this->label13);
			this->grpStudent->Controls->Add(this->label12);
			this->grpStudent->Controls->Add(this->label10);
			this->grpStudent->Controls->Add(this->label9);
			this->grpStudent->Location = System::Drawing::Point(364, 12);
			this->grpStudent->Name = L"grpStudent";
			this->grpStudent->Size = System::Drawing::Size(383, 484);
			this->grpStudent->TabIndex = 34;
			this->grpStudent->TabStop = false;
			this->grpStudent->Text = L"Rider Details";
			// 
			// lblRegisterDate
			// 
			this->lblRegisterDate->Cursor = System::Windows::Forms::Cursors::No;
			this->lblRegisterDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->lblRegisterDate->Location = System::Drawing::Point(254, 105);
			this->lblRegisterDate->Name = L"lblRegisterDate";
			this->lblRegisterDate->Size = System::Drawing::Size(113, 22);
			this->lblRegisterDate->TabIndex = 2149;
			this->lblRegisterDate->Value = System::DateTime(2020, 4, 7, 0, 0, 0, 0);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(262, 85);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 17);
			this->label15->TabIndex = 2146;
			this->label15->Text = L"Date Register";
			// 
			// lblUserID
			// 
			this->lblUserID->AutoSize = true;
			this->lblUserID->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblUserID->Location = System::Drawing::Point(49, 43);
			this->lblUserID->Name = L"lblUserID";
			this->lblUserID->Size = System::Drawing::Size(52, 19);
			this->lblUserID->TabIndex = 2148;
			this->lblUserID->Text = L"Id_No";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 17);
			this->label5->TabIndex = 2147;
			this->label5->Text = L"User ID No.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 2146;
			this->label2->Text = L"Matrix No.";
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
			this->txtFaculty->Location = System::Drawing::Point(38, 248);
			this->txtFaculty->Name = L"txtFaculty";
			this->txtFaculty->ReadOnly = true;
			this->txtFaculty->Size = System::Drawing::Size(235, 46);
			this->txtFaculty->TabIndex = 2144;
			this->txtFaculty->Text = L"";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->txtName->Location = System::Drawing::Point(38, 158);
			this->txtName->Name = L"txtName";
			this->txtName->ReadOnly = true;
			this->txtName->Size = System::Drawing::Size(235, 34);
			this->txtName->TabIndex = 2143;
			this->txtName->Text = L"";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblEmail->Location = System::Drawing::Point(46, 349);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(86, 19);
			this->lblEmail->TabIndex = 19;
			this->lblEmail->Text = L"User_Email";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(5, 332);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(42, 17);
			this->label22->TabIndex = 18;
			this->label22->Text = L"Email";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblPhone->Location = System::Drawing::Point(49, 211);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(87, 19);
			this->lblPhone->TabIndex = 17;
			this->lblPhone->Text = L"User_Phone";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 418);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Passport ID";
			// 
			// lblPass
			// 
			this->lblPass->AutoSize = true;
			this->lblPass->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblPass->Location = System::Drawing::Point(46, 435);
			this->lblPass->Name = L"lblPass";
			this->lblPass->Size = System::Drawing::Size(113, 19);
			this->lblPass->TabIndex = 15;
			this->lblPass->Text = L"User_Passport ";
			// 
			// lbliD
			// 
			this->lbliD->AutoSize = true;
			this->lbliD->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbliD->Location = System::Drawing::Point(46, 394);
			this->lbliD->Name = L"lbliD";
			this->lbliD->Size = System::Drawing::Size(74, 19);
			this->lbliD->TabIndex = 14;
			this->lbliD->Text = L"User_I/C";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 377);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Identification";
			// 
			// lblDormitory
			// 
			this->lblDormitory->AutoSize = true;
			this->lblDormitory->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblDormitory->Location = System::Drawing::Point(49, 314);
			this->lblDormitory->Name = L"lblDormitory";
			this->lblDormitory->Size = System::Drawing::Size(118, 19);
			this->lblDormitory->TabIndex = 8;
			this->lblDormitory->Text = L"User_Dormitory";
			// 
			// lblMatrix
			// 
			this->lblMatrix->AutoSize = true;
			this->lblMatrix->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblMatrix->Location = System::Drawing::Point(34, 102);
			this->lblMatrix->Name = L"lblMatrix";
			this->lblMatrix->Size = System::Drawing::Size(96, 19);
			this->lblMatrix->TabIndex = 6;
			this->lblMatrix->Text = L"User_Matrix";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(7, 228);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 17);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Faculty";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 297);
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
			this->label10->Location = System::Drawing::Point(7, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 17);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Phone No.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 133);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 17);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Name";
			// 
			// BikeRiderListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 550);
			this->Controls->Add(this->grpStudent);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->grpBike);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(777, 597);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(777, 597);
			this->Name = L"BikeRiderListForm";
			this->Text = L"BikeRiderListForm";
			this->Activated += gcnew System::EventHandler(this, &BikeRiderListForm::BikeRiderListForm_Activated);
			this->grpBike->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RiderData))->EndInit();
			this->grpStudent->ResumeLayout(false);
			this->grpStudent->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:void RiderList(void) {

		//Code for datagridview
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT `id_user`, `user_matrix`, `user_name`, `user_email`, `user_id`, `user_passportId`, `user_phoneNumber`, `user_dormitory`, `user_faculty`, `user_date_register`, `user_role` FROM `user_table`;", conDatabase);
		MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDatabase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			RiderData->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
private: System::Void BikeRiderListForm_Activated(System::Object^ sender, System::EventArgs^ e) {
	RiderList();
	lblRegisterDate->Enabled =false;
}
private: System::Void RiderData_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//DataGridViewRow^ row = BikeData->CurrentRow;
	if (RiderData->SelectedRows->Count > 0) // make sure user select at least 1 row 
	{
		Object^ id_user = RiderData->SelectedRows[0]->Cells[0]->Value;// +string.Empty;
		Object^ user_matrix = RiderData->SelectedRows[0]->Cells[1]->Value;
		Object^ user_name = RiderData->SelectedRows[0]->Cells[2]->Value;
		Object^ user_email= RiderData->SelectedRows[0]->Cells[3]->Value;
		Object^ user_id = RiderData->SelectedRows[0]->Cells[4]->Value;
		Object^ user_passportId = RiderData->SelectedRows[0]->Cells[5]->Value;
		Object^ user_phoneNumber = RiderData->SelectedRows[0]->Cells[6]->Value;
		Object^ user_dormitory = RiderData->SelectedRows[0]->Cells[7]->Value;
		Object^ user_faculty = RiderData->SelectedRows[0]->Cells[8]->Value;
		Object^ user_date_register = RiderData->SelectedRows[0]->Cells[9]->Value;
		Object^ user_role = RiderData->SelectedRows[0]->Cells[10]->Value;
		//string userId = BikeData->SelectedRows[0]->Cells[2]->Value;// +string.Empty;

		lblUserID->Text = Convert::ToString(id_user);
		lblMatrix->Text = Convert::ToString(user_matrix);
		txtName->Text = Convert::ToString(user_name);
		lblEmail->Text = Convert::ToString(user_email);
		lbliD->Text = Convert::ToString(user_id);
		lblPass->Text = Convert::ToString(user_passportId);
		lblPhone->Text = Convert::ToString(user_phoneNumber);
		lblDormitory->Text = Convert::ToString(user_dormitory);
		txtFaculty->Text = Convert::ToString(user_faculty);
		lblRegisterDate->Text = Convert::ToString(user_date_register);
		lblRole->Text = Convert::ToString(user_role);
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblMatrix->Text == "User_Matrix" ) {
		MessageBox::Show("No Data Selected", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else if(lblMatrix->Text == "admin") {
		MessageBox::Show("Cannot Deleted Data", "admin", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else {
		RiderDetailDelete();
	}
}
		public:void RiderDetailDelete(void) {
			String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("DELETE FROM user_table WHERE bike_id='" + this->lblMatrix->Text + "';", conDatabase);
			MySqlDataReader^ myReader;
			if (MessageBox::Show("Confirm To Delete " + lblMatrix->Text + " ?", "Delete Data", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				try {
					conDatabase->Open();
					myReader = cmdDatabase->ExecuteReader();
					while (myReader->Read()) {
						//count = count + 1;
					}
					MessageBox::Show(lblMatrix->Text + " " + Environment::NewLine + "Detail Has Been Deleted !!");
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
			}
		}
};
}
