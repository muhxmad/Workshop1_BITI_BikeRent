#pragma once

namespace insolusi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BikeListForm
	/// </summary>
	public ref class BikeListForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		BikeListForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BikeListForm(Form^ obj1)
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
		~BikeListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ grpBike;
	protected:
	private: System::Windows::Forms::DataGridView^ BikeData;
	private: System::Windows::Forms::TextBox^ txtBikeName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtBikePrice;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtBikeOwnerPhone;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtOwner;
	private: System::Windows::Forms::Button^ btnDelete;



	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnRefresh;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblBikeID;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::ComboBox^ txtBikeType;

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
			this->grpBike = (gcnew System::Windows::Forms::GroupBox());
			this->BikeData = (gcnew System::Windows::Forms::DataGridView());
			this->txtBikeName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBikePrice = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtBikeOwnerPhone = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtOwner = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblBikeID = (gcnew System::Windows::Forms::Label());
			this->txtBikeType = (gcnew System::Windows::Forms::ComboBox());
			this->grpBike->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BikeData))->BeginInit();
			this->SuspendLayout();
			// 
			// grpBike
			// 
			this->grpBike->Controls->Add(this->BikeData);
			this->grpBike->Location = System::Drawing::Point(12, 12);
			this->grpBike->Name = L"grpBike";
			this->grpBike->Size = System::Drawing::Size(346, 503);
			this->grpBike->TabIndex = 2;
			this->grpBike->TabStop = false;
			this->grpBike->Text = L"Bike List";
			// 
			// BikeData
			// 
			this->BikeData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BikeData->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BikeData->Location = System::Drawing::Point(3, 18);
			this->BikeData->Name = L"BikeData";
			this->BikeData->ReadOnly = true;
			this->BikeData->RowHeadersWidth = 51;
			this->BikeData->RowTemplate->Height = 24;
			this->BikeData->Size = System::Drawing::Size(340, 482);
			this->BikeData->TabIndex = 0;
			this->BikeData->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BikeListForm::BikeData_CellClick);
			// 
			// txtBikeName
			// 
			this->txtBikeName->Location = System::Drawing::Point(451, 107);
			this->txtBikeName->Name = L"txtBikeName";
			this->txtBikeName->Size = System::Drawing::Size(146, 22);
			this->txtBikeName->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(369, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Bike Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(388, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Bike Type";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(406, 186);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Bike Price per Day";
			// 
			// txtBikePrice
			// 
			this->txtBikePrice->Location = System::Drawing::Point(541, 183);
			this->txtBikePrice->Name = L"txtBikePrice";
			this->txtBikePrice->Size = System::Drawing::Size(56, 22);
			this->txtBikePrice->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(364, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Bike Ownerphone";
			// 
			// txtBikeOwnerPhone
			// 
			this->txtBikeOwnerPhone->Location = System::Drawing::Point(391, 269);
			this->txtBikeOwnerPhone->Name = L"txtBikeOwnerPhone";
			this->txtBikeOwnerPhone->Size = System::Drawing::Size(206, 22);
			this->txtBikeOwnerPhone->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(364, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Bike Owner";
			// 
			// txtOwner
			// 
			this->txtOwner->Location = System::Drawing::Point(451, 224);
			this->txtOwner->Name = L"txtOwner";
			this->txtOwner->Size = System::Drawing::Size(146, 22);
			this->txtOwner->TabIndex = 9;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Lime;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Location = System::Drawing::Point(618, 111);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(87, 36);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Insert";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &BikeListForm::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::Red;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Location = System::Drawing::Point(618, 245);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(87, 36);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &BikeListForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Location = System::Drawing::Point(618, 176);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(87, 36);
			this->btnUpdate->TabIndex = 15;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &BikeListForm::btnUpdate_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(372, 30);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(87, 28);
			this->btnRefresh->TabIndex = 16;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &BikeListForm::btnRefresh_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(369, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 17);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Bike ID.";
			// 
			// lblBikeID
			// 
			this->lblBikeID->AutoSize = true;
			this->lblBikeID->Location = System::Drawing::Point(433, 73);
			this->lblBikeID->Name = L"lblBikeID";
			this->lblBikeID->Size = System::Drawing::Size(16, 17);
			this->lblBikeID->TabIndex = 18;
			this->lblBikeID->Text = L"0";
			// 
			// txtBikeType
			// 
			this->txtBikeType->FormattingEnabled = true;
			this->txtBikeType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Sport", L"City", L"Flip" });
			this->txtBikeType->Location = System::Drawing::Point(466, 145);
			this->txtBikeType->Name = L"txtBikeType";
			this->txtBikeType->Size = System::Drawing::Size(131, 24);
			this->txtBikeType->TabIndex = 19;
			this->txtBikeType->Text = L"Mountain";
			// 
			// BikeListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(713, 527);
			this->Controls->Add(this->txtBikeType);
			this->Controls->Add(this->lblBikeID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtBikeOwnerPhone);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtOwner);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtBikePrice);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtBikeName);
			this->Controls->Add(this->grpBike);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(731, 574);
			this->MinimizeBox = false;
			this->Name = L"BikeListForm";
			this->Text = L"Bike Detail Form";
			this->Activated += gcnew System::EventHandler(this, &BikeListForm::BikeListForm_Activated);
			this->Load += gcnew System::EventHandler(this, &BikeListForm::BikeListForm_Load);
			this->grpBike->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BikeData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BikeListForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BikeListForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		bikeList();
	}
	private:void bikeList(void) {

		//Code for datagridview
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT `bike_id`as 'ID No.', `bike_name` as 'Bike Name', `bike_type` as 'Bike Type', `bike_price` as 'Price', `bike_owner` as 'Owner Name', `bike_Ownerphone` as 'Owner Phone' FROM bike_table;", conDatabase);
		MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDatabase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			BikeData->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void BikeData_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//DataGridViewRow^ row = BikeData->CurrentRow;
		if (BikeData->SelectedRows->Count > 0) // make sure user select at least 1 row 
		{
			Object^ BikeID = BikeData->SelectedRows[0]->Cells[0]->Value;// +string.Empty;
			Object^ bikeName = BikeData->SelectedRows[0]->Cells[1]->Value;
			Object^ bikeType = BikeData->SelectedRows[0]->Cells[2]->Value;
			Object^ bikePrice = BikeData->SelectedRows[0]->Cells[3]->Value;
			Object^ bikeOwner = BikeData->SelectedRows[0]->Cells[4]->Value;
			Object^ bikeOwnerPhone = BikeData->SelectedRows[0]->Cells[5]->Value;
			//string userId = BikeData->SelectedRows[0]->Cells[2]->Value;// +string.Empty;

			lblBikeID->Text = Convert::ToString(BikeID);
			txtBikeName->Text = Convert::ToString(bikeName);
			txtBikeType->Text = Convert::ToString(bikeType);
			txtBikePrice->Text = Convert::ToString(bikePrice);
			txtOwner->Text = Convert::ToString(bikeOwner);
			txtBikeOwnerPhone->Text = Convert::ToString(bikeOwnerPhone);
		}
	}
	public:void BikeDetailDelete(void) {
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("DELETE FROM bike_table WHERE bike_id='" + this->lblBikeID->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		if (MessageBox::Show("Confirm To Delete "+ txtBikeName->Text +" ?", "Delete Data", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			try {
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				while (myReader->Read()) {
					//count = count + 1;
				}
				dataDeleteInReservation();
				MessageBox::Show(txtBikeName->Text + " " + Environment::NewLine + "Detail Has Been Deleted !!");
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
	public:void BikeDetailUpdate(void) {
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("UPDATE bike_table SET bike_name='" + this->txtBikeName->Text + "',bike_type='" + this->txtBikeType->Text + "',bike_price='" + this->txtBikePrice->Text + "',bike_owner='" + this->txtOwner->Text + "',bike_Ownerphone='" + this->txtBikeOwnerPhone->Text + "' WHERE bike_id='" + this->lblBikeID->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		if (MessageBox::Show("Confirm Update?", "Update Bike Detail", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			try {
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				while (myReader->Read()) {
					//count = count + 1;
				}
				MessageBox::Show(txtBikeName->Text + " " + Environment::NewLine + "Detail Has Been Updated !!");
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
	public:void BikeNameCheck(void) {
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bike_table where bike_name='" + this->txtBikeName->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			int count = 0;
			while (myReader->Read()) {
				count = count + 1;
			}
			if (count == 1) {
				(MessageBox::Show("Bike Name Already Exist", "Bike Detail", MessageBoxButtons::YesNo, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::Yes);
				//MessageBox::Show
			}
			else
			{
				addNewBike();
				//lblMatrixError->Text = "";
			}
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

		  private:void addNewBike(void) {
			  String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
			  MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDatabase = gcnew MySqlCommand("INSERT INTO `bike_table`( bike_name, bike_type, bike_price, bike_owner, bike_Ownerphone) VALUES ('" + this->txtBikeName->Text + "','" + this->txtBikeType->Text + "','" + this->txtBikePrice->Text + "','" + this->txtOwner->Text + "','" + this->txtBikeOwnerPhone->Text + "');", conDatabase);
			  MySqlDataReader^ myReader;
			  if (MessageBox::Show("Confirm Register?", "Registration", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				  try {
					  conDatabase->Open();
					  myReader = cmdDatabase->ExecuteReader();
					  while (myReader->Read()) {
						  //count = count + 1;
					  }
					  MessageBox::Show(txtBikeName->Text+" " + Environment::NewLine + "Detail Has Been Added !!");
				  }
				  catch (Exception ^ ex) {
					  MessageBox::Show(ex->Message);
				  }
			  }
		  }
	
private:void dataDeleteInReservation(void) {
	String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("DELETE FROM reservation_table WHERE bike_name='" + this->txtBikeName->Text + "';", conDatabase);
	MySqlDataReader^ myReader;
	//if (MessageBox::Show("Confirm To Delete " + txtBikeName->Text + " ?", "Delete Data", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		try {
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			while (myReader->Read()) {
				//count = count + 1;
			}
			//MessageBox::Show(txtBikeName->Text + " " + Environment::NewLine + "Detail Has Been Deleted !!");
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	//}
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	BikeNameCheck();
}
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	BikeDetailUpdate();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	BikeDetailDelete();
}
};
}
