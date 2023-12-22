#pragma once
#include<iostream>
#include <fstream>
#include<string>
#include"MyForm9.h"
//#include"MyForm8.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace std;
using std::ofstream;
using std::ifstream;
namespace MiuPortal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
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
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(394, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Please Choose The Days of Subject 1 :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 299);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(394, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Please Choose The Days of Subject 2 :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(485, 489);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 53);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Saturday", L"Sunday", L"Monday", L"Tuesday",
					L"Wednesday", L"Thursday"
			});
			this->comboBox1->Location = System::Drawing::Point(154, 116);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(306, 24);
			this->comboBox1->TabIndex = 10;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Saturday", L"Sunday", L"Monday", L"Tuesday",
					L"Wednesday", L"Thursday"
			});
			this->comboBox2->Location = System::Drawing::Point(154, 197);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(306, 24);
			this->comboBox2->TabIndex = 10;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Saturday", L"Sunday", L"Monday", L"Tuesday",
					L"Wednesday", L"Thursday"
			});
			this->comboBox3->Location = System::Drawing::Point(154, 372);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(306, 24);
			this->comboBox3->TabIndex = 10;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Saturday", L"Sunday", L"Monday", L"Tuesday",
					L"Wednesday", L"Thursday"
			});
			this->comboBox4->Location = System::Drawing::Point(154, 459);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(306, 24);
			this->comboBox4->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(29, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 30);
			this->label3->TabIndex = 1;
			this->label3->Text = L" Day 1 :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 30);
			this->label4->TabIndex = 1;
			this->label4->Text = L" Day 2 :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(39, 372);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 30);
			this->label5->TabIndex = 1;
			this->label5->Text = L" Day 1 :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(39, 453);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 30);
			this->label6->TabIndex = 1;
			this->label6->Text = L" Day 2 :";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(656, 565);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm7";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm7";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (std::ofstream("1.txt").is_open())
	{
		System::String^ day1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
		System::String^ day2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
		System::String^ day3 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
		System::String^ day4 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
		std::ofstream file("1.txt", ios::app);
		file << msclr::interop::marshal_as<std::string>(day1);
		file << msclr::interop::marshal_as<std::string>(day2);
		file << msclr::interop::marshal_as<std::string>(day3);
		file << msclr::interop::marshal_as<std::string>(day4);
		file.close();
		this->Hide();
		MyForm9^ f9 = gcnew MyForm9();
		f9->ShowDialog();
	}
	if (std::ofstream("2.txt").is_open())
	{
		System::String^ day1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
		System::String^ day2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
		System::String^ day3 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
		System::String^ day4 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
		std::ofstream file("2.txt", ios::app);
		file << msclr::interop::marshal_as<std::string>(day1);
		file << msclr::interop::marshal_as<std::string>(day2);
		file << msclr::interop::marshal_as<std::string>(day3);
		file << msclr::interop::marshal_as<std::string>(day4);
		file.close();
		this->Hide();
		MyForm9^ f9 = gcnew MyForm9();
		f9->ShowDialog();
	}
	if (std::ofstream("3.txt").is_open())
	{
		System::String^ day1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
		System::String^ day2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
		System::String^ day3 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
		System::String^ day4 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
		std::ofstream file("3.txt", ios::app);
		file << msclr::interop::marshal_as<std::string>(day1);
		file << msclr::interop::marshal_as<std::string>(day2);
		file << msclr::interop::marshal_as<std::string>(day3);
		file << msclr::interop::marshal_as<std::string>(day4);
		file.close();
		this->Hide();
		MyForm9^ f9 = gcnew MyForm9();
		f9->ShowDialog();
	}
	if (std::ofstream("4.txt").is_open())
	{
		System::String^ day1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
		System::String^ day2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
		System::String^ day3 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
		System::String^ day4 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
		std::ofstream file("4.txt", ios::app);
		file << msclr::interop::marshal_as<std::string>(day1);
		file << msclr::interop::marshal_as<std::string>(day2);
		file << msclr::interop::marshal_as<std::string>(day3);
		file << msclr::interop::marshal_as<std::string>(day4);
		file.close();
		this->Hide();
		MyForm9^ f9 = gcnew MyForm9();
		f9->ShowDialog();
	}
}
	
};
}
//#endif // !MYFORM9_H
