#pragma once

//#include "pch.h"
#include "AdminForm.h"
#include "mainMenuForm.h"
#include "RegisterForm.h"
namespace insolusi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkRegister;
	protected:

	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtMatrix;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ lblError;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtMatrix = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(134, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 21);
			this->label3->TabIndex = 13;
			this->label3->Text = L"New Rider\?";
			// 
			// linkRegister
			// 
			this->linkRegister->AutoSize = true;
			this->linkRegister->Location = System::Drawing::Point(237, 178);
			this->linkRegister->Name = L"linkRegister";
			this->linkRegister->Size = System::Drawing::Size(72, 17);
			this->linkRegister->TabIndex = 4;
			this->linkRegister->TabStop = true;
			this->linkRegister->Text = L"Click Here";
			this->linkRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkRegister_LinkClicked);
			// 
			// btnLogin
			// 
			this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogin->Location = System::Drawing::Point(240, 136);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(82, 36);
			this->btnLogin->TabIndex = 3;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9));
			this->label2->Location = System::Drawing::Point(10, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9));
			this->label1->Location = System::Drawing::Point(12, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Matrix No";
			// 
			// txtMatrix
			// 
			this->txtMatrix->Location = System::Drawing::Point(85, 36);
			this->txtMatrix->Multiline = true;
			this->txtMatrix->Name = L"txtMatrix";
			this->txtMatrix->Size = System::Drawing::Size(142, 27);
			this->txtMatrix->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(85, 80);
			this->txtPassword->Multiline = true;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(142, 24);
			this->txtPassword->TabIndex = 2;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::enterKey);
			this->txtPassword->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::txtPassword_MouseDown);
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(81, 107);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(0, 20);
			this->lblError->TabIndex = 14;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 201);
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkRegister);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtMatrix);
			this->Controls->Add(this->txtPassword);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(352, 248);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(352, 248);
			this->Name = L"LoginForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private:void loginData(void) {
			String^ constring = L"uid=root;server=localhost;database=cpp_insolusi_db;port=3306";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM user_table where user_matrix='" + this->txtMatrix->Text + "' and user_password='" + this->txtPassword->Text + "';", conDatabase);
			MySqlDataReader^ myReader;
			try {
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				int count = 0;
				while (myReader->Read()) {
					count = count + 1;
				}
				if (count == 1) {
					lblError->Text ="";
					String^ input = txtMatrix->Text;
					//selection to another form
					lblError->Text ="";
					String^ role = myReader->GetString(11);
					String^ name = myReader->GetString(3);
					if (role == "administrator") {
						MessageBox::Show("Welcome " + name + "" + Environment::NewLine + " To inSolusi inc. Administrator Mode", "Welcome", MessageBoxButtons::OK, MessageBoxIcon::None);
						txtMatrix->Text = "";
						txtPassword->Text = "";
						AdminForm^ frm1 = gcnew AdminForm(this);
						frm1->Show();
						this->Hide();
					}
					else {
						MessageBox::Show("Welcome Rider " + name + ""+ Environment::NewLine +" To inSolusi inc.", "Welcome", MessageBoxButtons::OK, MessageBoxIcon::None);
						mainMenuForm^ frm2 = gcnew mainMenuForm(txtMatrix->Text);
						frm2->Show();
						this->Hide();
					}

				}
				else if (count > 1)
				{
					lblError->Text = "dupllicate matrix or password";
				}
				else {
					lblError->Text = "incorrect matrix or password";
				}
					
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
			loginData();
	}
	private:System::Void enterKey(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ kea) {
		if (kea->KeyCode == Keys::Enter) {
			loginData();
		}
	}
private: System::Void txtPassword_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtPassword->Text = "";
}
private: System::Void linkRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	txtMatrix->Text = "";
	txtPassword->Text = "";
	RegisterForm^ frm3 = gcnew RegisterForm(this);
	frm3->ShowDialog();
}
};
}
