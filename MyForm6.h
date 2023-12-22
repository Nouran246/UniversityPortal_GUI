#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"MyForm7.h"
#include"MyForm8.h"
#include <msclr\marshal_cppstd.h>
//#ifndef MYFORM7_H
//#define MYFORM7_H

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
	/// Summary for MyForm6
	/// </summary>
	
	
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(433, 406);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 57);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(347, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Please Enter the Subjects  :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(70, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 36);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Subject 1 :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(80, 318);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 36);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Subject 2 :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Data Structures & Algorithms            ", L"Database Management Systems ",
					L"Object Oriented Programming", L"Computer Organization", L"Algorithms Analysis & Design  ", L"Operating Systems", L"Computer Networks ",
					L"Web Development"
			});
			this->comboBox1->Location = System::Drawing::Point(229, 181);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(288, 24);
			this->comboBox1->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Data Structures & Algorithms            ", L"Database Management Systems ",
					L"Object Oriented Programming", L"Computer Organization", L"Algorithms Analysis & Design  ", L"Operating Systems", L"Computer Networks ",
					L"Web Development"
			});
			this->comboBox2->Location = System::Drawing::Point(229, 318);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(288, 24);
			this->comboBox2->TabIndex = 9;
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(672, 512);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm6";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm7^ f2 = gcnew MyForm7();
		if (std::ofstream("1.txt").is_open())
		{

			ofstream inst;
			inst.open("1.txt", ios::app);
			System::String^ subj1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ subj2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			std::ofstream file("1.txt", ios::app);
			file << msclr::interop::marshal_as<std::string>(subj1);
			file << msclr::interop::marshal_as<std::string>(subj2);
			this->Hide();
			
			f2->ShowDialog();
		}
		else if (std::ofstream("2.txt").is_open())
		{
			ofstream inst;
			inst.open("2.txt", ios::app);
			System::String^ subj1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ subj2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			std::ofstream file("2.txt", ios::app);
			file << msclr::interop::marshal_as<std::string>(subj1);
			file << msclr::interop::marshal_as<std::string>(subj2);
			this->Hide();
			
			f2->ShowDialog();
		}
		else if (std::ofstream("3.txt").is_open())
		{
			ofstream inst;
			inst.open("3.txt", ios::app);
			System::String^ subj1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ subj2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			std::ofstream file(".txt", ios::app);
			file << msclr::interop::marshal_as<std::string>(subj1);
			file << msclr::interop::marshal_as<std::string>(subj2);
			this->Hide();
		

			f2->ShowDialog();
		}
		else if (std::ofstream("4.txt").is_open())
		{
			ofstream inst;
			inst.open("4.txt", ios::app);
			System::String^ subj1 = comboBox1->Items[comboBox1->SelectedIndex]->ToString();
			System::String^ subj2 = comboBox2->Items[comboBox2->SelectedIndex]->ToString();
			std::ofstream file("4.txt", ios::app);
			file << msclr::interop::marshal_as<std::string>(subj1);
			file << msclr::interop::marshal_as<std::string>(subj2);
			this->Hide();
		
			f2->ShowDialog();
		}
	}
};
}
//#endif;
