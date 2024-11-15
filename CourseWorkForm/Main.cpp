	#include "Sign.h"
	#include"Registration.h"
	#include"Functions.h"
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace CourseWorkForm;
	[STAThread]
	void main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		CourseWorkForm::Sign form;
		Application::Run(% form);
		
	}