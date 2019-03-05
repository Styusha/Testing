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

	public ref class Editor : public System::Windows::Forms::Form
	{
	public:
		Editor(void)
		{
			InitializeComponent();
		}

	protected:

		~Editor()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button4;
	protected: 

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(592, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Шаг 1. Чтобы создать новый тест, введите количество вопросов от 1 до 50:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(21, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(149, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 22);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Editor::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(27, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(436, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"(для редактирования существующего теста пропустите этот шаг)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(361, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Шаг 2. Выберите вопрос для редактирования:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(23, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(264, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Шаг 3. Введите/измените вопрос:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(21, 183);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(585, 22);
			this->textBox2->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(26, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(435, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Введите/измените варианты ответа, отметьте верный:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(27, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Ответ 1.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(27, 275);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Ответ 2.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(27, 309);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 16);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Ответ 3.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(27, 340);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 16);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Ответ 4.";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(88, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(518, 22);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(88, 271);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(518, 22);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(88, 305);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(518, 22);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(88, 336);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(518, 22);
			this->textBox6->TabIndex = 16;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 243);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 278);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 312);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 19;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(12, 342);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 20;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(12, 427);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 20);
			this->label10->TabIndex = 21;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(461, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 32);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Editor::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(348, 368);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(258, 36);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Принять изменения в вопросе";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Editor::button3_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(259, 67);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 24;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(21, 121);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(585, 21);
			this->comboBox1->TabIndex = 25;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Editor::comboBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(88, 368);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 36);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Сохранить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Editor::button4_Click);
			// 
			// Editor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 462);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Editor";
			this->Text = L"Editor";
			this->Load += gcnew System::EventHandler(this, &Editor::Editor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Editor_Load(System::Object^  sender, System::EventArgs^  e) {
			 Show();										//показать окно формы
	 		 fstream file;									//создать объект класса fstream
			 STR ex;									    //создать объект класса STR
			 const char name [16]="information.txt";        //имя файла с вопросами
			 file.open(name,ios::in | ios::out);			//открываем файл для чтения/записи 
			 string st,str; int kol;
			 
			 if (file.is_open())
			{ {	//label11->Text="Файл открыт!";
				kol=ex.kolstr(file);					    //определение количества строк в файле
				//label11->Text=kol.ToString();  
				file.close();
			  }
							    
			 for (int a=0;a<kol;a+=6)						//заполнить строки в комбобоксе
			  {	ex.cht_a(name,a,st);
			    comboBox1->Items->Add(gcnew String(st.c_str()));
		      }
            button4->Enabled=false;
			 }
			 else label11->Text="Ошибка! Файл не открыт!";
			
	
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			//кнопка "ввод" для ввода кол-ва вопросов для теста; 
			//проверка введённого числа вопросов +	 
		    //Очищение полей TextBox, удаление информации в файле
             const char name [16]="information.txt";
			 int kol= int::Parse(this->textBox1->Text);
			 if (kol>30||kol<10) 
				label11->Text="Должно быть число от 10 до 30";
			 else 
			  { comboBox1->Items->Clear();
				ofstream file(name);		   					 //удаление инфы из файла
				label3->Text="Нет вопросов для редактирования";
				comboBox1->Enabled=false;
				button3->Enabled=false;
				button4->Enabled=true;
				label4->Text="Шаг 2. Ввод данных для тестирования. Введите вопрос №1";
							
			  }
	}

static int count=0;	
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //кнопка Сохранить (новый вопрос)
			 const char name [16]="information.txt";
			 fstream file;
			 STR ex;
			 				
			 String ^st,^o1,^o2,^o3,^o4;
			 string st1,o11,o21,o31,o41,o51;
			 int kol=int::Parse(this->textBox1->Text);
			 
			 if (count>=kol) 
				{label4->Text="Все вопросы записаны";
				 file.close();}
			 else
			 { 
			 file.open(name,ios::in | ios::app);				//открываем файл для записи в конец файла
			 st=textBox2->Text;									//считывание введённых данных 	
			 ex.MarshalString(st,st1);
			 o1=textBox3->Text;
			 ex.MarshalString(o1,o11);
			 o2=textBox4->Text;
			 ex.MarshalString(o2,o21);
			 o3=textBox5->Text;
			 ex.MarshalString(o3,o31);
			 o4=textBox6->Text;
			 ex.MarshalString(o4,o41);
			 							 
			 if (radioButton1->Checked==true)
				o51="1";
			 else if (radioButton2->Checked==true)
				o51="2";
			 else if (radioButton3->Checked==true)
				o51="3";
			 else if (radioButton4->Checked==true)
				o51="4";
			  if(st1==""||o11==""||o21==""||o31==""||o41==""||o51=="")
				  label10->Text="Введены не все данные! Вопрос не сохранён";
			  else{
			 if (count<(kol-1)) 
			 {
			 file<<st1<<endl;					//запись введённых данных в файл
			 file<<o11<<endl;
			 file<<o21<<endl;
			 file<<o31<<endl;
			 file<<o41<<endl;
			 file<<o51<<endl;
			 label4->Text="Шаг 2. Ввод данных для тестирования. Введите следующий вопрос:";
			 }
			 else 
			 {file<<st1<<endl;					//запись введённых данных в файл
			 file<<o11<<endl;
			 file<<o21<<endl;
			 file<<o31<<endl;
			 file<<o41<<endl;
			 file<<o51;
			 label4->Text="Все вопросы записаны";
             button4->Enabled=false;
			 }
			 count++;
			  
			 textBox2->Text="";
			 textBox3->Text="";
			 textBox4->Text="";
			 textBox5->Text="";
			 textBox6->Text="";
			  }}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Кнопка "Принять изменения в вопросе"
			 
			 fstream file1, file2;								// создаем объект класса fstream
			 STR ex;										    // создаем объект класса STR
			 const char name1 [16]="information.txt";			//имя файла с вопросами
			 const char name2 [9]="buff.txt";					//имя буферного файла
			 file1.open(name1,ios::in | ios::out);				//открываем файл для чтения/записи 
			 file2.open(name2,ios::in | ios::trunc);

			 String ^st,^o1,^o2,^o3,^o4;						//переменные для чтения с элементов формы
			 string st1,o11,o21,o31,o41,o51;					//переменные для записи в файл
			 int ind=0, kolv;
			 
			 kolv=ex.kolstr(file1);
			 file1.close();

			 ind =(comboBox1->SelectedIndex)*6;
			 
			 st=textBox2->Text;									//считывание введённых данных 	
			 ex.MarshalString(st,st1);
			 o1=textBox3->Text;
			 ex.MarshalString(o1,o11);
			 o2=textBox4->Text;
			 ex.MarshalString(o2,o21);
			 o3=textBox5->Text;
			 ex.MarshalString(o3,o31);
			 o4=textBox6->Text;
			 ex.MarshalString(o4,o41);
							 
			 if (radioButton1->Checked==true)
				o51="1";
			 else if (radioButton2->Checked==true)
				o51="2";
			 else if (radioButton3->Checked==true)
				o51="3";
			 else if (radioButton4->Checked==true)
				o51="4";
				
			 file1.open(name1,ios::in | ios::out);					   //открываем файл для чтения/записи 
			 file2.open(name2,ios::in | ios::out);
			 ex.zap_izm(name1,name2,ind,kolv,st1,o11,o21,o31,o41,o51);
			 file1.close();
			 file2.close();
			 label10->Text="Изменения для вопроса "+(comboBox1->SelectedIndex+1)+" сохранены";			
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Кнопка "Выход"
			 this->Close();
		 }

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//что происходит, если выбрана определённая строка в комбобоксе
	    //происходит заполнение вариантов ответа и правильного ответа
			 fstream file;											   // создаем объект класса fstream
			 STR ex;												   // создаем объект класса STR
			 const char name [16]="information.txt";				   //имя файла с вопросами
			 file.open(name,ios::in | ios::out);					   //открываем файл для чтения/записи 
			 string st;
			 int ind=0, otv;
		
			 ind = comboBox1->SelectedIndex;						   //получшение индекса выбранной строки comboBox1
		   //label10->Text=ind.ToString();
			 textBox2->Text=comboBox1->Text;						   //вывод вопроса в textbox для редактирования
																							
			ex.cht_a(name,ind=ind*6+1,st);							   //вывод вариантов ответа			
			textBox3->Text=gcnew String(st.c_str());//1
			ex.cht_a(name,ind+=1,st);
			textBox4->Text=gcnew String(st.c_str());//2
			ex.cht_a(name,ind+=1,st);
			textBox5->Text=gcnew String(st.c_str());//3
			ex.cht_a(name,ind+=1,st);
			textBox6->Text=gcnew String(st.c_str());//4
			ex.cht_a(name,ind+=1,st);			    //правильный ответ
			otv = atoi(st.c_str());

			if (otv==1)
				radioButton1->Checked=true;
			else if (otv==2)
				radioButton2->Checked=true;
			else if (otv==3)
				radioButton3->Checked=true;
			else if (otv==4)
				radioButton4->Checked=true;
		    
		 }

};
}
