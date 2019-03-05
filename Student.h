#pragma once

#include "KP-func.h"
#include <sstream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace test {

	public ref class Student : public System::Windows::Forms::Form
	{		
		static int Second=0;
		static int Minute=0;
		String ^Sec;
	private: System::Windows::Forms::Label^  label3;
			 String ^Min;

	public:
		Student(void)
		{
			InitializeComponent();

		}

	protected:

		~Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  Timer;
	private: System::Windows::Forms::Label^  label2;
	private: System::ComponentModel::IContainer^  components;

	private:

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(26, 69);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(119, 24);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(26, 123);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(119, 24);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(311, 69);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(119, 24);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(311, 123);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(119, 24);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(413, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 48);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ответить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Student::button1_Click);
			// 
			// Timer
			// 
			this->Timer->Enabled = true;
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &Student::Timer_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"0:0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(22, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 7;
			// 
			// Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 237);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Name = L"Student";
			this->Text = L"Student";
			this->Load += gcnew System::EventHandler(this, &Student::Student_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	
	static int tv=0,vv=0;  //tv - общий счётчик вопросов (текущих), vv - счётчик правильных ответов
	
	private: System::Void Student_Load(System::Object^  sender, System::EventArgs^  e) {
			 Show();

		 fstream file;									//создать объект класса fstream
		 STR ex;									    //создать объект класса STR
		 const char name [16]="information.txt";        //имя файла с вопросами
		 file.open(name,ios::in | ios::out);			//открываем файл для чтения 
		 string st,o1,o2,o3,o4,o5,o51;
		 int a;
		 int kv = ex.kolstr(file)/6;					//подсчёт количества вопросов
		 		 

		 if (tv>=0 && tv<kv)
		  {a=tv*6;

		  ex.cht_a(name,a,st); a++;
		  ex.cht_a(name,a,o1); a++;
		  ex.cht_a(name,a,o2); a++;
		  ex.cht_a(name,a,o3); a++;
		  ex.cht_a(name,a,o4); a++;

		  label1->Text=gcnew String(st.c_str());
		  radioButton1->Text=gcnew String(o1.c_str());
		  radioButton2->Text=gcnew String(o2.c_str());
		  radioButton3->Text=gcnew String(o3.c_str());
		  radioButton4->Text=gcnew String(o4.c_str());

		  }

		    else if(tv==kv)
		 {radioButton1->Visible=false;
		  radioButton2->Visible=false;
		  radioButton3->Visible=false;
		  radioButton4->Visible=false;
		  button1->Enabled=false;
		  label1->Text="Тестирование завершено. Количество верных ответов = "+vv;
		  }
		file.close();
			 }	 
			

	private: System::Void Timer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 
             Second++;
			 if(Second==60)
			 {  Second=0;
				Minute++;
			 }
			 Sec=Convert::ToString(Second);				
			 Min=Convert::ToString(Minute);

			 label2->Text=Min + ":" + Sec;
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
        
	     fstream file;									//создать объект класса fstream
		 STR ex;									    //создать объект класса STR
		 const char name [16]="information.txt";        //имя файла с вопросами
		 file.open(name,ios::in | ios::out);			//открываем файл для чтения 
		 string st,o1,o2,o3,o4,o5,o51;
		 int a;
        int kv = ex.kolstr(file)/6;

		if (tv==kv-1)
		{
		  radioButton1->Visible=false;
		  radioButton2->Visible=false;
		  radioButton3->Visible=false;
		  radioButton4->Visible=false;
		  button1->Enabled=false;
		  label1->Text="Тестирование завершено. Количество верных ответов = "+vv;
		}

        else 
		{
         a=tv*6+5;
		 ex.cht_a(name,a,o5);
				 
		if (radioButton1->Checked)	
			o51="1";
		else if (radioButton2->Checked)
			o51="2";
		else if (radioButton3->Checked)
			o51="3";
		else if (radioButton4->Checked)
			o51="4";
		if (o51==o5) 
			   vv++;

		tv++;				 
		//label3->Text="tv = "+tv+" o5 = "+gcnew String(o5.c_str())+" o51 = "+gcnew String(o51.c_str())+" vv = "+vv;
		
		a=tv*6;

		  ex.cht_a(name,a,st); a++;
		  ex.cht_a(name,a,o1); a++;
		  ex.cht_a(name,a,o2); a++;
		  ex.cht_a(name,a,o3); a++;
		  ex.cht_a(name,a,o4); a++;

		  label1->Text=gcnew String(st.c_str());
		  radioButton1->Text=gcnew String(o1.c_str());
		  radioButton2->Text=gcnew String(o2.c_str());
		  radioButton3->Text=gcnew String(o3.c_str());
		  radioButton4->Text=gcnew String(o4.c_str());
		}
		file.close();
		 }

};
}
