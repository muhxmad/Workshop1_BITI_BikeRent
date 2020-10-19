#pragma once

namespace insolusi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReservationListForm
	/// </summary>
	public ref class ReservationListForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		ReservationListForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ReservationListForm(Form^ obj1)
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
		~ReservationListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ grpBikeRental;
	protected:
	private: System::Windows::Forms::DataGridView^ ReservationTable;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ AcceptedReservationTable;
	private: System::Windows::Forms::Label^ lblReserveID;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtBikeName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtTotalPrice;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtOwnerBike;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lblPhone;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RichTextBox^ txtNote;
	private: System::Windows::Forms::TextBox^ txtPhone;


	private: System::Windows::Forms::TextBox^ txtMatrix;

	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txt1Date;
	private: System::Windows::Forms::TextBox^ txt2Date;
	private: System::Windows::Forms::TextBox^ txtTime;

	private: System::Windows::Forms::TextBox^ txtDay;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::ComboBox^ cmbResponse;
	private: System::Windows::Forms::Label^ label12;










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
			this->grpBikeRental = (gcnew System::Windows::Forms::GroupBox());
			this->ReservationTable = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->AcceptedReservationTable = (gcnew System::Windows::Forms::DataGridView());
			this->lblReserveID = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBikeName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtTotalPrice = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtOwnerBike = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtNote = (gcnew System::Windows::Forms::RichTextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtMatrix = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txt1Date = (gcnew System::Windows::Forms::TextBox());
			this->txt2Date = (gcnew System::Windows::Forms::TextBox());
			this->txtTime = (gcnew System::Windows::Forms::TextBox());
			this->txtDay = (gcnew System::Windows::Forms::TextBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->cmbResponse = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->grpBikeRental->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReservationTable))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AcceptedReservationTable))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpBikeRental
			// 
			this->grpBikeRental->Controls->Add(this->ReservationTable);
			this->grpBikeRental->Location = System::Drawing::Point(12, 12);
			this->grpBikeRental->Name = L"grpBikeRental";
			this->grpBikeRental->Size = System::Drawing::Size(290, 558);
			this->grpBikeRental->TabIndex = 1;
			this->grpBikeRental->TabStop = false;
			this->grpBikeRental->Text = L"Pending Rental Detail";
			// 
			// ReservationTable
			// 
			this->ReservationTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ReservationTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ReservationTable->Location = System::Drawing::Point(3, 18);
			this->ReservationTable->MultiSelect = false;
			this->ReservationTable->Name = L"ReservationTable";
			this->ReservationTable->ReadOnly = true;
			this->ReservationTable->RowHeadersWidth = 51;
			this->ReservationTable->RowTemplate->Height = 24;
			this->ReservationTable->Size = System::Drawing::Size(284, 537);
			this->ReservationTable->TabIndex = 0;
			this->ReservationTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReservationListForm::ReservationTable_CellClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->AcceptedReservationTable);
			this->groupBox1->Location = System::Drawing::Point(308, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(290, 558);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Accepted Rental Detail";
			// 
			// AcceptedReservationTable
			// 
			this->AcceptedReservationTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AcceptedReservationTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AcceptedReservationTable->Location = System::Drawing::Point(3, 18);
			this->AcceptedReservationTable->MultiSelect = false;
			this->AcceptedReservationTable->Name = L"AcceptedReservationTable";
			this->AcceptedReservationTable->ReadOnly = true;
			this->AcceptedReservationTable->RowHeadersWidth = 51;
			this->AcceptedReservationTable->RowTemplate->Height = 24;
			this->AcceptedReservationTable->Size = System::Drawing::Size(284, 537);
			this->AcceptedReservationTable->TabIndex = 0;
			this->AcceptedReservationTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReservationListForm::AcceptedReservationTable_CellClick);
			// 
			// lblReserveID
			// 
			this->lblReserveID->AutoSize = true;
			this->lblReserveID->Location = System::Drawing::Point(139, 28);
			this->lblReserveID->Name = L"lblReserveID";
			this->lblReserveID->Size = System::Drawing::Size(16, 17);
			this->lblReserveID->TabIndex = 22;
			this->lblReserveID->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 17);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Reservation ID No.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 288);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Bike Name";
			// 
			// txtBikeName
			// 
			this->txtBikeName->Location = System::Drawing::Point(66, 308);
			this->txtBikeName->Name = L"txtBikeName";
			this->txtBikeName->ReadOnly = true;
			this->txtBikeName->Size = System::Drawing::Size(143, 22);
			this->txtBikeName->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 17);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Date Start";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(245, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 17);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Date End";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 17);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Time to Rent";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(315, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 17);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Days To Rent";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 226);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 17);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Total Price Rent:";
			// 
			// txtTotalPrice
			// 
			this->txtTotalPrice->Location = System::Drawing::Point(129, 226);
			this->txtTotalPrice->Name = L"txtTotalPrice";
			this->txtTotalPrice->ReadOnly = true;
			this->txtTotalPrice->Size = System::Drawing::Size(100, 22);
			this->txtTotalPrice->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(267, 288);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 17);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Remark";
			// 
			// txtOwnerBike
			// 
			this->txtOwnerBike->Location = System::Drawing::Point(66, 358);
			this->txtOwnerBike->Name = L"txtOwnerBike";
			this->txtOwnerBike->ReadOnly = true;
			this->txtOwnerBike->Size = System::Drawing::Size(143, 22);
			this->txtOwnerBike->TabIndex = 33;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 338);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 17);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Bike Owner Name";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 17);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Rider Name";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(245, 66);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 17);
			this->label11->TabIndex = 34;
			this->label11->Text = L"User Matrix";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Location = System::Drawing::Point(245, 231);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(113, 17);
			this->lblPhone->TabIndex = 38;
			this->lblPhone->Text = L"Rider Phone No.";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnSubmit);
			this->groupBox2->Controls->Add(this->cmbResponse);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->txtNote);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->lblPhone);
			this->groupBox2->Controls->Add(this->txtPhone);
			this->groupBox2->Controls->Add(this->lblReserveID);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->txtMatrix);
			this->groupBox2->Controls->Add(this->txtName);
			this->groupBox2->Controls->Add(this->txtBikeName);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->txt1Date);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtOwnerBike);
			this->groupBox2->Controls->Add(this->txt2Date);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->txtTime);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->txtTotalPrice);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->txtDay);
			this->groupBox2->Location = System::Drawing::Point(604, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(472, 555);
			this->groupBox2->TabIndex = 39;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ReservationDetail";
			// 
			// txtNote
			// 
			this->txtNote->Location = System::Drawing::Point(270, 308);
			this->txtNote->Name = L"txtNote";
			this->txtNote->ReadOnly = true;
			this->txtNote->Size = System::Drawing::Size(194, 93);
			this->txtNote->TabIndex = 39;
			this->txtNote->Text = L"";
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(364, 228);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->ReadOnly = true;
			this->txtPhone->Size = System::Drawing::Size(100, 22);
			this->txtPhone->TabIndex = 37;
			// 
			// txtMatrix
			// 
			this->txtMatrix->Location = System::Drawing::Point(330, 66);
			this->txtMatrix->Name = L"txtMatrix";
			this->txtMatrix->ReadOnly = true;
			this->txtMatrix->Size = System::Drawing::Size(100, 22);
			this->txtMatrix->TabIndex = 33;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(103, 63);
			this->txtName->Name = L"txtName";
			this->txtName->ReadOnly = true;
			this->txtName->Size = System::Drawing::Size(126, 22);
			this->txtName->TabIndex = 35;
			// 
			// txt1Date
			// 
			this->txt1Date->Location = System::Drawing::Point(103, 103);
			this->txt1Date->Name = L"txt1Date";
			this->txt1Date->ReadOnly = true;
			this->txt1Date->Size = System::Drawing::Size(126, 22);
			this->txt1Date->TabIndex = 23;
			// 
			// txt2Date
			// 
			this->txt2Date->Location = System::Drawing::Point(318, 103);
			this->txt2Date->Name = L"txt2Date";
			this->txt2Date->ReadOnly = true;
			this->txt2Date->Size = System::Drawing::Size(128, 22);
			this->txt2Date->TabIndex = 25;
			// 
			// txtTime
			// 
			this->txtTime->Location = System::Drawing::Point(103, 163);
			this->txtTime->Name = L"txtTime";
			this->txtTime->ReadOnly = true;
			this->txtTime->Size = System::Drawing::Size(100, 22);
			this->txtTime->TabIndex = 27;
			// 
			// txtDay
			// 
			this->txtDay->Location = System::Drawing::Point(260, 163);
			this->txtDay->Name = L"txtDay";
			this->txtDay->ReadOnly = true;
			this->txtDay->Size = System::Drawing::Size(49, 22);
			this->txtDay->TabIndex = 29;
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(344, 513);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(122, 36);
			this->btnSubmit->TabIndex = 45;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &ReservationListForm::btnSubmit_Click);
			// 
			// cmbResponse
			// 
			this->cmbResponse->FormattingEnabled = true;
			this->cmbResponse->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"Cancel" });
			this->cmbResponse->Location = System::Drawing::Point(345, 460);
			this->cmbResponse->Name = L"cmbResponse";
			this->cmbResponse->Size = System::Drawing::Size(121, 24);
			this->cmbResponse->TabIndex = 44;
			this->cmbResponse->Text = L"pending";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(342, 440);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 17);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Response";
			// 
			// ReservationListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 582);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->grpBikeRental);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(993, 629);
			this->Name = L"ReservationListForm";
			this->Text = L"ReservationListForm";
			this->Activated += gcnew System::EventHandler(this, &ReservationListForm::ReservationListForm_Activated);
			this->grpBikeRental->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReservationTable))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AcceptedReservationTable))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReservationListForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		pendingReserve();
		AcceptedReserve();

	}
	private:void pendingReserve(void) {
		//Code for datagridview
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM reservation_table WHERE reservation_response ='pending';", conDatabase);
		//MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDatabase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			ReservationTable->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private:void AcceptedReserve(void) {
		//Code for datagridview
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM reservation_table WHERE reservation_response ='Yes';", conDatabase);
		//MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDatabase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			AcceptedReservationTable->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void ReservationTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (ReservationTable->SelectedRows->Count > 0) // make sure user select at least 1 row 
		{
			Object^ ReserveID = ReservationTable->SelectedRows[0]->Cells[0]->Value;// +string.Empty;
			Object^ bikeName = ReservationTable->SelectedRows[0]->Cells[1]->Value;
			Object^ FirstDate = ReservationTable->SelectedRows[0]->Cells[2]->Value;
			Object^ SecondDate = ReservationTable->SelectedRows[0]->Cells[3]->Value;
			Object^ ReserveTime = ReservationTable->SelectedRows[0]->Cells[4]->Value;
			Object^ ReserveDay = ReservationTable->SelectedRows[0]->Cells[5]->Value;
			Object^ ReservePrice = ReservationTable->SelectedRows[0]->Cells[6]->Value;
			Object^ bikeOwner = ReservationTable->SelectedRows[0]->Cells[7]->Value;
			Object^ riderName = ReservationTable->SelectedRows[0]->Cells[8]->Value;
			Object^ riderMatrix = ReservationTable->SelectedRows[0]->Cells[9]->Value;
			Object^ riderPhone = ReservationTable->SelectedRows[0]->Cells[10]->Value;
			Object^ ReserveNote = ReservationTable->SelectedRows[0]->Cells[11]->Value;
			Object^ ReserveResponse = ReservationTable->SelectedRows[0]->Cells[12]->Value;

			//string userId = BikeData->SelectedRows[0]->Cells[2]->Value;// +string.Empty;

			lblReserveID->Text = Convert::ToString(ReserveID);
			txtBikeName->Text = Convert::ToString(bikeName);
			txt1Date->Text = Convert::ToString(FirstDate);
			txt2Date->Text = Convert::ToString(SecondDate);
			txtTime->Text = Convert::ToString(ReserveTime);
			txtDay->Text = Convert::ToString(ReserveDay);
			txtTotalPrice->Text = Convert::ToString(ReservePrice);
			txtOwnerBike->Text = Convert::ToString(bikeOwner);
			txtName->Text = Convert::ToString(riderName);
			txtMatrix->Text = Convert::ToString(riderMatrix);
			txtPhone->Text = Convert::ToString(riderPhone);
			txtNote->Text = Convert::ToString(ReserveNote);
			cmbResponse->Text = Convert::ToString(ReserveResponse);
		}
	}
	private: System::Void AcceptedReservationTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (ReservationTable->SelectedRows->Count > 0) // make sure user select at least 1 row 
		{
			Object^ ReserveID = AcceptedReservationTable->SelectedRows[0]->Cells[0]->Value;// +string.Empty;
			Object^ bikeName = AcceptedReservationTable->SelectedRows[0]->Cells[1]->Value;
			Object^ FirstDate = AcceptedReservationTable->SelectedRows[0]->Cells[2]->Value;
			Object^ SecondDate = AcceptedReservationTable->SelectedRows[0]->Cells[3]->Value;
			Object^ ReserveTime = AcceptedReservationTable->SelectedRows[0]->Cells[4]->Value;
			Object^ ReserveDay = AcceptedReservationTable->SelectedRows[0]->Cells[5]->Value;
			Object^ ReservePrice = AcceptedReservationTable->SelectedRows[0]->Cells[6]->Value;
			Object^ bikeOwner = AcceptedReservationTable->SelectedRows[0]->Cells[7]->Value;
			Object^ riderName = AcceptedReservationTable->SelectedRows[0]->Cells[8]->Value;
			Object^ riderMatrix = AcceptedReservationTable->SelectedRows[0]->Cells[9]->Value;
			Object^ riderPhone = AcceptedReservationTable->SelectedRows[0]->Cells[10]->Value;
			Object^ ReserveNote = AcceptedReservationTable->SelectedRows[0]->Cells[11]->Value;
			Object^ ReserveResponse = AcceptedReservationTable->SelectedRows[0]->Cells[12]->Value;

			//string userId = BikeData->SelectedRows[0]->Cells[2]->Value;// +string.Empty;

			lblReserveID->Text = Convert::ToString(ReserveID);
			txtBikeName->Text = Convert::ToString(bikeName);
			txt1Date->Text = Convert::ToString(FirstDate);
			txt2Date->Text = Convert::ToString(SecondDate);
			txtTime->Text = Convert::ToString(ReserveTime);
			txtDay->Text = Convert::ToString(ReserveDay);
			txtTotalPrice->Text = Convert::ToString(ReservePrice);
			txtOwnerBike->Text = Convert::ToString(bikeOwner);
			txtName->Text = Convert::ToString(riderName);
			txtMatrix->Text = Convert::ToString(riderMatrix);
			txtPhone->Text = Convert::ToString(riderPhone);
			txtNote->Text = Convert::ToString(ReserveNote);
			cmbResponse->Text = Convert::ToString(ReserveResponse);
		}

	}

	private:void DeleteReserve(void) {
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("DELETE FROM reservation_table WHERE reservation_id='" + lblReserveID->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		if (MessageBox::Show("Exterminate the reservation?", "Reservation Detail", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			try {
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				while (myReader->Read()) {
					//count = count + 1;
				}
				MessageBox::Show("Detail Succesfully Deleted", "Reservation Detail", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}

	private:void acceptedReserve(void) {
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("UPDATE reservation_table SET reservation_response='" + cmbResponse->Text + "' WHERE reservation_id='" + lblReserveID->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		if (MessageBox::Show("Confirm Rented?", "Reservation Detail", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			try {
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				while (myReader->Read()) {
					//count = count + 1;
				}
				MessageBox::Show("Detail of "+ txtMatrix->Text + "" + Environment::NewLine + "where Reserve id. " + lblReserveID->Text + " " + Environment::NewLine + "is updated", "Reservation Detail", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void btnSubmit_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Convert::ToInt32(lblReserveID->Text) >= 1 ) {
			if (cmbResponse->Text == "Yes") {
				acceptedReserve();
			}
			else if (cmbResponse->Text == "Cancel") {
				DeleteReserve();
			}
		}
		else {
			MessageBox::Show("No Data Has Been Selected", "Reservation Detail", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

};
}
