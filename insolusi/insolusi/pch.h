// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here

#endif //PCH_H
#include "mainMenuForm.h"
#include "AdminForm.h"
#include "LoginForm.h"
#include "RegisterForm.h"

using namespace std;

using namespace System;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;

void OnFormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
    Form^ form = safe_cast<Form^>(sender);
    form->FormClosed -= gcnew FormClosedEventHandler(&OnFormClosed);
    if (Application::OpenForms->Count == 0) Application::Exit();
    else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(&OnFormClosed);
}

int main(cli::array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    insolusi::LoginForm nameObjectForm;
    Application::Run(% nameObjectForm);
    //Form1^ startupWindow = gcnew Form1;
    //startupWindow->FormClosed += gcnew FormClosedEventHandler(&OnFormClosed);
    //startupWindow->Show();
    //Application::Run();
    return 0;
}