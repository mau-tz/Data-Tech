#include "MyForm.h"
using namespace System;
using namespace Windows::Forms;

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Application::Run(gcnew Datatech::MyForm);
}