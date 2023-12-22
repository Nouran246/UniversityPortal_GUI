#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Sockets;

ref class instClass
{
public:
    String^ id;
    String^ name;
    String^ password;
    instClass()
    {
        List<String^>^ id = gcnew List<String^>();
        List<String^>^ name = gcnew List<String^>();
        List<String^>^ password = gcnew List<String^>();
    }
};  
//int main()
//    {
//        List< instClass^>^ instr = gcnew List< instClass^>();
//        StreamReader^ file = gcnew StreamReader("inst.txt");
//        String^ line;
//
//        // Skip the first line (header)
//        file->ReadLine();
//
//        while ((line = file->ReadLine()) != nullptr)
//        {
//            array<String^>^ columns = line->Split('\t');
//            instClass^ inst = gcnew  instClass();
//            inst->id = columns[0];
//            inst->name = columns[1];
//            inst->password = columns[2];
//            instr->Add(inst);
//        }
//    }
