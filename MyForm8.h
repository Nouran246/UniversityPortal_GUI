#pragma once
#include <iostream>
#include<fstream>
#include"MyForm10.h"
#include "Header.h"
#ifndef MYFORM7_H
#define MYFORM7_H
using namespace std;
namespace MiuPortal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		MyForm8(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(159, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hello Admin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(460, 36);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Please Enter the id of the instructor ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(41, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 36);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ID :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 227);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(320, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm8::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(337, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 76);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm8::button1_Click);
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(583, 445);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm8";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm8";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inst_id = textBox1->Text;
		id = System::Convert::ToInt32(inst_id);
		if (id == 1)
		{
			ofstream inst;
			inst.open("1.txt");
			string name = "Ahmed Mahmoud";
			inst << name;
			this->Hide();
			MyForm10^ f10 = gcnew MyForm10("Ahmed Mamdouh");
			f10->ShowDialog();
		}
		else if (id == 2)
		{
			ofstream inst;
			inst.open("2.txt");
			inst << "Samy Mamdouh";
			this->Hide();
			MyForm10^ f10 = gcnew MyForm10("Samy Mamdouh");
			f10->ShowDialog();
		}
		else if (id == 3)
		{
			ofstream inst;
			inst.open("3.txt");
			inst << "Mai Selim";
			this->Hide();
			MyForm10^ f10 = gcnew MyForm10("Mai Selim");
			f10->ShowDialog();
		}
		else if (id == 4)
		{
			ofstream inst;
			inst.open("3.txt");
			inst << "Rokaya Mohamed";
			this->Hide();
			MyForm10^ f10 = gcnew MyForm10("Rokaya Mohamed");
			f10->ShowDialog();
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{

}
};
}
#endif; //!MYFORM10_H