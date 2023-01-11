#include "LOADINGSCREEN.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectTICTACTOE::LOADINGSCREEN form;
	Application::Run(% form);
}

