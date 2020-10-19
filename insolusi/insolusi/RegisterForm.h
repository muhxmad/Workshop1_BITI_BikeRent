#pragma once
//#include "pch.h"
#include<regex>
#include<stdio.h>
#include <ctime>
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >
#using <System.dll>
namespace insolusi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Text::RegularExpressions;
	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		RegisterForm(Form^ obj1)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtMatrix;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtPassword;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt2ndPassword;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ListBox^ lstFaculty;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ cmbDormitory;

	private: System::Windows::Forms::ComboBox^ cmbID;

	private: System::Windows::Forms::TextBox^ txtID;

	private: System::Windows::Forms::ComboBox^ cmbType;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Label^ lblDateRegister;
	private: System::Windows::Forms::Label^ lblEmailError;
	private: System::Windows::Forms::Label^ lblPasswordError;
	private: System::Windows::Forms::Label^ lblMatrixError;



	private: System::ComponentModel::IContainer^ components;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtMatrix = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt2ndPassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lstFaculty = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblMatrixError = (gcnew System::Windows::Forms::Label());
			this->lblPasswordError = (gcnew System::Windows::Forms::Label());
			this->lblDateRegister = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->cmbType = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblEmailError = (gcnew System::Windows::Forms::Label());
			this->cmbDormitory = (gcnew System::Windows::Forms::ComboBox());
			this->cmbID = (gcnew System::Windows::Forms::ComboBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtMatrix
			// 
			this->txtMatrix->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMatrix->Location = System::Drawing::Point(168, 126);
			this->txtMatrix->Multiline = true;
			this->txtMatrix->Name = L"txtMatrix";
			this->txtMatrix->Size = System::Drawing::Size(234, 35);
			this->txtMatrix->TabIndex = 8;
			this->txtMatrix->Leave += gcnew System::EventHandler(this, &RegisterForm::txtMatrix_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(127, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Matrix No";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(125, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txtPassword->Location = System::Drawing::Point(168, 257);
			this->txtPassword->Multiline = true;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(234, 36);
			this->txtPassword->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(125, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Confirmation Password";
			// 
			// txt2ndPassword
			// 
			this->txt2ndPassword->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->txt2ndPassword->Location = System::Drawing::Point(168, 198);
			this->txt2ndPassword->Multiline = true;
			this->txt2ndPassword->Name = L"txt2ndPassword";
			this->txt2ndPassword->PasswordChar = '*';
			this->txt2ndPassword->Size = System::Drawing::Size(234, 36);
			this->txt2ndPassword->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(289, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Phone No.";
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(384, 32);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(136, 22);
			this->txtPhone->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Full Name :";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(101, 35);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(182, 22);
			this->txtName->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(314, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Email :";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(384, 88);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(165, 22);
			this->txtEmail->TabIndex = 4;
			this->txtEmail->Text = L"example@yahoo.com";
			this->txtEmail->Leave += gcnew System::EventHandler(this, &RegisterForm::txtEmail_Leave);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(232, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"User Type";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 137);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Faculty :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 223);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 17);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Dormitory:";
			// 
			// lstFaculty
			// 
			this->lstFaculty->FormattingEnabled = true;
			this->lstFaculty->ItemHeight = 16;
			this->lstFaculty->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"FACULTY OF ELECTRONICS AND COMPUTER ENGINEERING",
					L"FACULTY OF ELECTRICAL ENGINEERING", L"FACULTY OF MECHANICAL ENGINEERING", L"FACULTY OF MANUFACTURING ENGINEERING", L"FACULTY OF INFORMATION AND COMMUNICATIONS TECHNOLOGY",
					L"FACULTY OF TECHNOLOGY MANAGEMENT AND TECHNOPRENEURSHIP", L"FACULTY OF ELECTRICAL AND ELECTRONIC ENGINEERING TECHNOLOGY", L"FACULTY OF MECHANICAL AND MANUFACTURING ENGINEERING TECHNOLOGY"
			});
			this->lstFaculty->Location = System::Drawing::Point(8, 157);
			this->lstFaculty->Name = L"lstFaculty";
			this->lstFaculty->Size = System::Drawing::Size(507, 52);
			this->lstFaculty->TabIndex = 5;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblMatrixError);
			this->groupBox1->Controls->Add(this->lblPasswordError);
			this->groupBox1->Controls->Add(this->lblDateRegister);
			this->groupBox1->Controls->Add(this->btnCancel);
			this->groupBox1->Controls->Add(this->btnSubmit);
			this->groupBox1->Controls->Add(this->cmbType);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtMatrix);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->txtPassword);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txt2ndPassword);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(12, 279);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(584, 389);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"User Detail";
			// 
			// lblMatrixError
			// 
			this->lblMatrixError->AutoSize = true;
			this->lblMatrixError->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMatrixError->ForeColor = System::Drawing::Color::Red;
			this->lblMatrixError->Location = System::Drawing::Point(408, 136);
			this->lblMatrixError->Name = L"lblMatrixError";
			this->lblMatrixError->Size = System::Drawing::Size(0, 17);
			this->lblMatrixError->TabIndex = 23;
			// 
			// lblPasswordError
			// 
			this->lblPasswordError->AutoSize = true;
			this->lblPasswordError->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPasswordError->ForeColor = System::Drawing::Color::Red;
			this->lblPasswordError->Location = System::Drawing::Point(174, 296);
			this->lblPasswordError->Name = L"lblPasswordError";
			this->lblPasswordError->Size = System::Drawing::Size(0, 17);
			this->lblPasswordError->TabIndex = 23;
			// 
			// lblDateRegister
			// 
			this->lblDateRegister->AutoSize = true;
			this->lblDateRegister->Font = (gcnew System::Drawing::Font(L"Plump MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDateRegister->Location = System::Drawing::Point(199, 351);
			this->lblDateRegister->Name = L"lblDateRegister";
			this->lblDateRegister->Size = System::Drawing::Size(161, 21);
			this->lblDateRegister->TabIndex = 4126;
			this->lblDateRegister->Text = L"Date_Register";
			// 
			// btnCancel
			// 
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->Location = System::Drawing::Point(6, 341);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(117, 42);
			this->btnCancel->TabIndex = 4125;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// btnSubmit
			// 
			this->btnSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSubmit->Location = System::Drawing::Point(461, 341);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(117, 42);
			this->btnSubmit->TabIndex = 11;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &RegisterForm::btnSubmit_Click);
			// 
			// cmbType
			// 
			this->cmbType->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmbType->FormattingEnabled = true;
			this->cmbType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Student", L"International Student", L"Staff", L"Alumni" });
			this->cmbType->Location = System::Drawing::Point(206, 56);
			this->cmbType->Name = L"cmbType";
			this->cmbType->Size = System::Drawing::Size(133, 24);
			this->cmbType->TabIndex = 7;
			this->cmbType->Text = L"Student";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblEmailError);
			this->groupBox2->Controls->Add(this->cmbDormitory);
			this->groupBox2->Controls->Add(this->cmbID);
			this->groupBox2->Controls->Add(this->txtID);
			this->groupBox2->Controls->Add(this->txtName);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->lstFaculty);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->txtEmail);
			this->groupBox2->Controls->Add(this->txtPhone);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(584, 261);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Rider Detail";
			// 
			// lblEmailError
			// 
			this->lblEmailError->AutoSize = true;
			this->lblEmailError->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmailError->ForeColor = System::Drawing::Color::Red;
			this->lblEmailError->Location = System::Drawing::Point(381, 110);
			this->lblEmailError->Name = L"lblEmailError";
			this->lblEmailError->Size = System::Drawing::Size(0, 17);
			this->lblEmailError->TabIndex = 22;
			// 
			// cmbDormitory
			// 
			this->cmbDormitory->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmbDormitory->FormattingEnabled = true;
			this->cmbDormitory->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"SATRIA", L"LESTARI", L"OTHERS" });
			this->cmbDormitory->Location = System::Drawing::Point(81, 220);
			this->cmbDormitory->Name = L"cmbDormitory";
			this->cmbDormitory->Size = System::Drawing::Size(169, 24);
			this->cmbDormitory->TabIndex = 6;
			this->cmbDormitory->Text = L"SATRIA";
			// 
			// cmbID
			// 
			this->cmbID->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cmbID->FormattingEnabled = true;
			this->cmbID->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Identification No.", L"Passport ID." });
			this->cmbID->Location = System::Drawing::Point(9, 88);
			this->cmbID->Name = L"cmbID";
			this->cmbID->Size = System::Drawing::Size(132, 24);
			this->cmbID->TabIndex = 20;
			this->cmbID->Text = L"Identification No.";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(147, 88);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(136, 22);
			this->txtID->TabIndex = 3;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 680);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximumSize = System::Drawing::Size(632, 727);
			this->MinimumSize = System::Drawing::Size(632, 727);
			this->Name = L"RegisterForm";
			this->Text = L"Rider Register ";
			this->Activated += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Activated);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	backForm();
}
	   public:void backForm(void) {
		   this->Close();
		   obj->Show();
	   }
			
private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt2ndPassword->Text==txtPassword->Text) {
		lblPasswordError->Text = "";
		UsernameErorrCheck();
		//User_check();
	}
	else if (txt2ndPassword->Text == "" && txtPassword->Text=="") {
		lblPasswordError->Text = "none";
	}
	else {
		lblPasswordError->Text = "Confirmation Password incorrect";
	}
}
	public:void Email_check(void)
	{
		Regex^ email = gcnew Regex("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
		if (!email->IsMatch(txtEmail->Text))
		{
			lblEmailError->Text ="Invalid Email";
		}
		else if((email->IsMatch(txtEmail->Text)))
		{
			lblEmailError->Text ="";
		}
	}
		  public:void UsernameErorrCheck(void) {
			  String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
			  MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM user_table where user_matrix='" + this->txtMatrix->Text + "';", conDatabase);
			  MySqlDataReader^ myReader;
			  try {
				  conDatabase->Open();
				  myReader = cmdDatabase->ExecuteReader();
				  int count = 0;
				  while (myReader->Read()) {
					  count = count + 1;
				  }
				  if (count == 1) {
					  
				  }
				  else
				  {
					  User_check();
				  }
			  }
			  catch (Exception ^ ex) {
				  MessageBox::Show(ex->Message);
			  }
		  }

		  public:void UsernameCheck(void) {
			  String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
			  MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM user_table where user_matrix='" + this->txtMatrix->Text + "';", conDatabase);
			  MySqlDataReader^ myReader;
			  try {
				  conDatabase->Open();
				  myReader = cmdDatabase->ExecuteReader();
				  int count = 0;
				  while (myReader->Read()) {
					  count = count + 1;
				  }
				  if (count == 1) {
					  lblMatrixError->Text = "matrix already exist";
				  }
				  else 
				  {
					  lblMatrixError->Text ="";
				  }
			  }
			  catch (Exception ^ ex) {
				  MessageBox::Show(ex->Message);
			  }
		  }

		  public:void User_check(void) {
			  if (cmbID->Text == "Identification No.") {
				  //("Malaysian");
				  saveMYUserData();
			  }
			  if (cmbID->Text == "Passport ID.") {
				  //("International");
				  saveMYUserData();
			  }
		  }

private: System::Void RegisterForm_Activated(System::Object^ sender, System::EventArgs^ e) {
	dateDetail();
}
	   private:void dateDetail(void) {
		   DateTime savedDate = DateTime::Now;
		   this->lblDateRegister->Text = savedDate.ToString("yyyy/MM/dd");
	   }
	private:void saveINTUserData(void) {
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("INSERT INTO user_table(user_matrix, user_password, user_name, user_email, user_id, user_passportId, user_phoneNumber, user_dormitory, user_faculty, user_date_register, user_role) VALUES ('" + this->txtMatrix->Text + "','" + this->txt2ndPassword->Text + "','" + this->txtName->Text + "','" + this->txtEmail->Text + "','None','" + this->txtID->Text + "',,'" + this->txtPhone->Text + "','" + this->cmbDormitory->Text + "','" + this->lstFaculty->Text + "','" + this->lblDateRegister->Text + "','" + this->cmbType->Text + "');", conDatabase);
		MySqlDataReader^ myReader;
		if (MessageBox::Show("Confirm Register?", "Registration", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			try {
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				while (myReader->Read()) {
					//count = count + 1;
				}
				MessageBox::Show("User Detail have Registered !!" + Environment::NewLine + " thank you for becoming part of inSolusi Rider");
				backForm();
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		
	}
	private:void saveMYUserData(void) {
		String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("INSERT INTO user_table(user_matrix, user_password, user_name, user_email, user_id, user_passportId, user_phoneNumber, user_dormitory, user_faculty, user_date_register, user_role) VALUES ('" + this->txtMatrix->Text + "','" + this->txt2ndPassword->Text + "','" + this->txtName->Text + "','" + this->txtEmail->Text + "','" + this->txtID->Text + "','None','" + this->txtPhone->Text + "','" + this->cmbDormitory->Text + "','" + this->lstFaculty->Text + "','" + this->lblDateRegister->Text + "','" + this->cmbType->Text + "');", conDatabase);
		MySqlDataReader^ myReader;
		if (MessageBox::Show("Confirm Register?", "Registration", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			try {
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				while (myReader->Read()) {
					//count = count + 1;
				}
				MessageBox::Show("User Detail have Registered !!" + Environment::NewLine + " thank you for becoming part of inSolusi Rider");
				backForm();
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
private: System::Void txtMatrix_Leave(System::Object^ sender, System::EventArgs^ e) {
	UsernameCheck();
}
private: System::Void txtEmail_Leave(System::Object^ sender, System::EventArgs^ e) {
	Email_check();
}
};
}
