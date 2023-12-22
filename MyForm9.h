#pragma once
#include <iostream>
#include"MyForm13.h"
#include<fstream>
#ifndef MYFORM8_H
#define MYFORM8_H
#include <msclr\marshal_cppstd.h>
using std::ios;
using std::ofstream;
using std::ifstream;
using namespace std;
namespace MiuPortal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;



	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;

	private: System::ComponentModel::IContainer^ components;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(499, 444);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 64);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(573, 36);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Please enter your preferable time (Subject 1):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(573, 36);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Please enter your preferable time (Subject 2):";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(61, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 30);
			this->label3->TabIndex = 19;
			this->label3->Text = L"lecture 1:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(61, 172);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 30);
			this->label6->TabIndex = 22;
			this->label6->Text = L"lecture 2:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(61, 415);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 30);
			this->label4->TabIndex = 22;
			this->label4->Text = L"lecture 2:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(61, 307);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 30);
			this->label5->TabIndex = 19;
			this->label5->Text = L"lecture 1:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"8:30 -> 10:30", L"10:30 ->12:00", L"1:00 -> 2:30",
					L"2:30 -> 4:30", L"4:30 ->6:00"
			});
			this->comboBox1->Location = System::Drawing::Point(203, 95);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(288, 24);
			this->comboBox1->TabIndex = 23;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"8:30 -> 10:30", L"10:30 ->12:00", L"1:00 -> 2:30",
					L"2:30 -> 4:30", L"4:30 ->6:00"
			});
			this->comboBox2->Location = System::Drawing::Point(203, 178);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(288, 24);
			this->comboBox2->TabIndex = 24;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"8:30 -> 10:30", L"10:30 ->12:00", L"1:00 -> 2:30",
					L"2:30 -> 4:30", L"4:30 ->6:00"
			});
			this->comboBox3->Location = System::Drawing::Point(203, 307);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(288, 24);
			this->comboBox3->TabIndex = 24;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"8:30 -> 10:30", L"10:30 ->12:00", L"1:00 -> 2:30",
					L"2:30 -> 4:30", L"4:30 ->6:00"
			});
			this->comboBox4->Location = System::Drawing::Point(203, 421);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(288, 24);
			this->comboBox4->TabIndex = 24;
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(683, 520);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm9";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm9";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (std::ofstream("1.txt").is_open())
		{
			System::String^ lec1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ lec2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			System::String^ lec3 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ lec4 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			std::ofstream file("1.txt", ios::app);
			file << msclr::interop::marshal_as<std::string>(lec1);
			file << msclr::interop::marshal_as<std::string>(lec2);
			file << msclr::interop::marshal_as<std::string>(lec3);
			file << msclr::interop::marshal_as<std::string>(lec4);
			file.close();
			MessageBox::Show("You data has been saved succesfully");
			MyForm13^ form2 = gcnew MyForm13();
			form2->Show();
		}
		if (std::ofstream("2.txt").is_open())
		{
			System::String^ lec1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ lec2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			System::String^ lec3 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ lec4 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			std::ofstream file("2.txt", ios::app);
			file << msclr::interop::marshal_as<std::string>(lec1);
			file << msclr::interop::marshal_as<std::string>(lec2);
			file << msclr::interop::marshal_as<std::string>(lec3);
			file << msclr::interop::marshal_as<std::string>(lec4);
			file.close();
			MessageBox::Show("You data has been saved succesfully");
			MyForm13^ form2 = gcnew MyForm13();
			form2->Show();
		}
		if (std::ofstream("3.txt").is_open())
		{
			System::String^ lec1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ lec2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			System::String^ lec3 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ lec4 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			std::ofstream file("3.txt", ios::app);
			file << msclr::interop::marshal_as<std::string>(lec1);
			file << msclr::interop::marshal_as<std::string>(lec2);
			file << msclr::interop::marshal_as<std::string>(lec3);
			file << msclr::interop::marshal_as<std::string>(lec4);
			file.close();
			MessageBox::Show("You data has been saved succesfully");
			MyForm13^ form2 = gcnew MyForm13();
			form2->Show();
		}
		if (std::ofstream("4.txt").is_open())
		{
			System::String^ lec1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ lec2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			System::String^ lec3 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ lec4 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			std::ofstream file("4.txt", ios::app);
			file << msclr::interop::marshal_as<std::string>(lec1);
			file << msclr::interop::marshal_as<std::string>(lec2);
			file << msclr::interop::marshal_as<std::string>(lec3);
			file << msclr::interop::marshal_as<std::string>(lec4);
			file.close();
			MessageBox::Show("You data has been saved succesfully");
			MyForm13^ form2 = gcnew MyForm13();
			form2->Show();
		}

		
	}
};
}
#endif; //8
