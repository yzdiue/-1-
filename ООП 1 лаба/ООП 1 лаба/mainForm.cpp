#include "mainForm.h"
#include "mainForm.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Rl1::mainForm form;
    Application::Run(% form);

}
