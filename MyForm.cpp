#include "MyForm.h"
#include <array>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CryptoGraphy::MyForm form;
	Application::Run(% form);
}
