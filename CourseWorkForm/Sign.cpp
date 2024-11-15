#include "Registration.h"
#include "Sign.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace CourseWorkForm;
[STAThread]
void Sign(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CourseWorkForm::Sign form;
	Application::Run(% form);

}