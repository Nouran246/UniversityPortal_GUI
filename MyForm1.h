#pragma once
#include<iostream>
#include <string>
#include"MyForm3.h"
#include"MyForm8.h"
#include "MyForm11.h"
#include"MyForm14.h"
namespace MiuPortal {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Net;
	using namespace System::Net::Sockets;


	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	/// 
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
		// Form8 definition here 
	};

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		/*static const int MAX_NAMES = 5;
		std::String^names[MAX_NAMES];
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);*/

		MyForm1(void)
		{
			InitializeComponent();
			//TODO: Add the constructor code here
		
		}
			
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(440, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please enter your id and password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password :";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 199);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(363, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 318);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(361, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(206, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 66);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(684, 519);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MIU Portal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//	StreamReader file("inst.txt", System::Text::Encoding::Default);
//	textBox1->Text = file.ReadLine();
//		this->Hide();
//		MyForm8^ f2 = gcnew MyForm8();
//		f2->ShowDialog();
//}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int id;
	cin >> id;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int password;
	cin >> password;
}
	private:System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ inputId = textBox1->Text;
		String^ inputPass = textBox2->Text;
		if (inputId->Length == 0 || inputPass->Length == 0)
		{
			MessageBox::Show("Please enter ID or Password", "ID or Password is empty", MessageBoxButtons::OK);
			return;
		}
		ifstream ids;
		ids.open("login.txt");
		string  line;
		int j = 0; int checker = 0;
		if (ids.is_open())
		{

			std::string idd = msclr::interop::marshal_as<std::string>(inputId);
			while ((!ids.eof()))
			{
				j++; getline(ids, line);
				if (line == idd)
				{
					int id = System::Convert::ToInt32(inputId);
					int pass = System::Convert::ToInt32(inputPass);

			     

					if (pass == (1000 + id))
					{
						checker = 1;
						if (id == 0)
						{
							
							MessageBox::Show("Hello Admin");
							this->Hide();
							MyForm8^ form8 = gcnew MyForm8();
							form8->Show();
							break;
						}
						else if (id == 1 || id == 2 || id == 3 || id == 4)
						{
							MessageBox::Show("Hello Instructor");
							this->Hide();
							MyForm11^ form11 = gcnew MyForm11();
							form11->Show();
							break;
						}
						else if (id == 5 || id == 6 || id == 7 || id == 8 || id == 9)
						{
							MessageBox::Show("Hello Student");
							this->Hide();
							MyForm14^ form14 = gcnew MyForm14();
							form14->Show();
							break;
						}
					}
				}
			}
			if (checker == 0)
			{
				MessageBox::Show("Not Found", "Try Again", MessageBoxButtons::OK);
			}

		}
		else
		{
			MessageBox::Show("couldnt open file");
		}
		ids.close();
		
		/*String^ id = this->textBox1->Text;
		String^ password = this->textBox2->Text;
		bool loginSuccessful = false;
		StreamReader^ input_file = File::OpenText("inst.txt");
		StreamWriter^ output_file = File::CreateText("inst.txt.out");
		String^ line;

		while ((line = input_file->ReadLine()) != nullptr)
		{
			if (id == "1" && password == "1100")
			{
				MessageBox::Show("Hello Admin");
				this->Hide();
				MyForm8^ form3 = gcnew MyForm8();
				form3->Show();
				break;
			}
			else if ((id == "2" && password == "2200") || (id == "3" && password == "3333") || (id == "4" && password == "4444") || (id == "5" && password == "5555"))
			{
			     MessageBox::Show("Instructor");
				 this->Hide();
			     MyForm11^ form11 = gcnew MyForm11();
			     form11->Show();
			     break;
			}
			else if ((id == "6" && password == "6666") || (id == "7" && password == "7777") || (id == "8" && password == "8888") || (id == "9" && password == "9999") || (id == "10" && password == "1010"))
			{
				MessageBox::Show("student");
				this->Hide();
				MyForm14^ form14 = gcnew MyForm14();
				form14->Show();
				break;
			}
			else {
				MessageBox::Show("Invalid id or password", "Please enter the correct one", MessageBoxButtons::OK);
				return;
			}*/
		//}
		//if (input_file)
		//{
		//	input_file->Close();
		//	output_file->Close();

		//}
	
		/*this->Hide();
		MyForm8^ f2 = gcnew MyForm8();
		f2->ShowDialog();*/
		/*StreamReader file("inst.txt", System::Text::Encoding::Default);
		   textBox1->Text = file.ReadLine();*/
	   }
			  
};
}
//// Get the entered ID and password from the UI controls
//String^ enteredId = txtId->Text;
//String^ enteredPassword = txtPassword->Text;
//
//// Open the file for reading
//StreamReader^ input_file = File::OpenText("inst.txt");
//
//// Search for the user's ID and password in the file
//bool loginSuccessful = false;
//String^ line;
//while ((line = input_file->ReadLine()) != nullptr)
//{
//	array<String^>^ columns = line->Split(',');
//	String^ id = columns[0];
//	String^ name = columns[1];
//	String^ password = columns[2];
//
//	if (enteredId == id && enteredPassword == password)
//	{
//		loginSuccessful = true;
//		break;
//	}
//}
//
//// Display a message if the login was not successful
//if (!loginSuccessful)
//{
//	MessageBox::Show("ID and password not in the system");
//}