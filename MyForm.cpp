#include "MyForm.h"
#ifndef HEADER_H
#define HEADER_H
using namespace System;
using namespace System::Windows::Forms;
int id;
[STAThreadAttribute]

int main()
//void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MiuPortal::MyForm form;
	//Application::Run(gcnew MiuPortal::MyForm);
	Application::Run(%form);

}
#endif;

