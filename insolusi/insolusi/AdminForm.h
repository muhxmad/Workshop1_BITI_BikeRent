#pragma once
#include "ReservationListForm.h"
#include "BikeListForm.h"
#include "BikeRiderListForm.h"
#include "DailyReport.h"
namespace insolusi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		AdminForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminForm(Form^ obj1)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	protected:


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btnLogout;
	private: System::Windows::Forms::Button^ btnReservation;

	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ btnRider;

	private: System::Windows::Forms::Button^ btnBikeList;










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
			this->btnReservation = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnRider = (gcnew System::Windows::Forms::Button());
			this->btnBikeList = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnReservation
			// 
			this->btnReservation->BackColor = System::Drawing::Color::Goldenrod;
			this->btnReservation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnReservation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReservation->Location = System::Drawing::Point(139, 33);
			this->btnReservation->Name = L"btnReservation";
			this->btnReservation->Size = System::Drawing::Size(131, 75);
			this->btnReservation->TabIndex = 0;
			this->btnReservation->Text = L"Reservation List";
			this->btnReservation->UseVisualStyleBackColor = false;
			this->btnReservation->Click += gcnew System::EventHandler(this, &AdminForm::btnReservation_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox3->Controls->Add(this->btnReservation);
			this->groupBox3->Controls->Add(this->btnLogout);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->btnRider);
			this->groupBox3->Controls->Add(this->btnBikeList);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(443, 215);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Data Detail";
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::Color::Crimson;
			this->btnLogout->Location = System::Drawing::Point(12, 155);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(97, 34);
			this->btnLogout->TabIndex = 3;
			this->btnLogout->Text = L"Log Out";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &AdminForm::btnLogout_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Salmon;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(139, 114);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(131, 75);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Sale Report";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click);
			// 
			// btnRider
			// 
			this->btnRider->BackColor = System::Drawing::Color::DarkTurquoise;
			this->btnRider->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->btnRider->Location = System::Drawing::Point(300, 114);
			this->btnRider->Name = L"btnRider";
			this->btnRider->Size = System::Drawing::Size(131, 75);
			this->btnRider->TabIndex = 6;
			this->btnRider->Text = L"Rider List Name";
			this->btnRider->UseVisualStyleBackColor = false;
			this->btnRider->Click += gcnew System::EventHandler(this, &AdminForm::btnRider_Click);
			// 
			// btnBikeList
			// 
			this->btnBikeList->BackColor = System::Drawing::Color::Yellow;
			this->btnBikeList->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBikeList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->btnBikeList->Location = System::Drawing::Point(300, 33);
			this->btnBikeList->Name = L"btnBikeList";
			this->btnBikeList->Size = System::Drawing::Size(131, 75);
			this->btnBikeList->TabIndex = 5;
			this->btnBikeList->Text = L"Bike List Info";
			this->btnBikeList->UseVisualStyleBackColor = false;
			this->btnBikeList->Click += gcnew System::EventHandler(this, &AdminForm::btnBikeList_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 215);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox3);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AdminForm";
			this->Text = L"Admin Form";
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}
private: System::Void btnReservation_Click(System::Object^ sender, System::EventArgs^ e) {
	ReservationListForm^ frm1 = gcnew ReservationListForm(this);
	frm1->Show();
}
private: System::Void btnBikeList_Click(System::Object^ sender, System::EventArgs^ e) {
	BikeListForm^ frm2 = gcnew BikeListForm(this);
	frm2->Show();
}
private: System::Void btnRider_Click(System::Object^ sender, System::EventArgs^ e) {
	BikeRiderListForm^ frm3 = gcnew BikeRiderListForm(this);
	frm3->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	DailyReport^ frm4 = gcnew DailyReport(this);
	frm4->Show();
}
};
}
