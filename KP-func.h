#ifndef KP_FUNC_H
#define KP_FUNC_H

#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
using namespace System;

class STR {
	
public:

	int kolstr (fstream &file)					//определение количества строк в файле
	{   int g=0; string s;
		while (!file.eof())
			{getline(file, s);
             g++;
		    }
		return g;
    }

	                                                    
	void cht_a(const char *name, int &a, string &st) //чтение из файла строки с номером а
	{ 
	  fstream file(name);
	  for (int i=0;i<=a;i++)
		getline(file,st); 	
	  file.close();
	}


	void perezap (const char *name1,const char *name2, int &k) //перезапись к строк из файла 1 в файл 2
	{ fstream file1(name1); //записывает сюда
	  fstream file2(name2); //отсюда
		  
	  string buff; int i = 0; 

	  while (!file2.eof()&& i<k-1)
		{getline(file2,buff);
		 file1<<buff<<endl;			
		 i++;}

		 getline(file2,buff);					//чтобы в конце файла 2 не было пустой строки
		 file1<<buff;
		 ofstream file22(name2);				//очистка буферного файла
		}

		void zap_izm(const char *name1,const char *name2, int &a, int &k, string &st, 
			                   string &o1,string &o2,string &o3,string &o4,string &o5)			
							   //запись изменённого вопроса в файл
		{	string buff;
			fstream file1(name1);				//исходный файл с вопросами и ответами
			fstream file2(name2);				//буферный файл
			
			for (int i=0;i<a;i++)				//запись в буфер строк, до изменённого вопроса
			{getline(file1,buff);
			 file2<<buff<<endl;			
			}
			
			file2<<st<<endl;					//запись введённых данных в файл
			file2<<o1<<endl;
			file2<<o2<<endl;
			file2<<o3<<endl;
			file2<<o4<<endl;
			file2<<o5<<endl;

			for (int i=0;i<6;i++)				//таким образом организовано удаление заменяемых строк
				getline(file1,buff);
			 	
			for (int i=a;i<k-1;i++)				//запись оставшихся нетронутых строк
				{getline(file1,buff);
			 	 file2<<buff<<endl;			
				}
			getline(file1,buff);				//запись последней строки, чтобы в конце файла 
			file2<<buff;						//не записывалась пустая строка
			
			file1.close();
			file2.close();
			file1.open(name1,ios::trunc);
			file2.open(name2,ios::in | ios::out);

			perezap(name1,name2,k);
		    			     
			file1.close();
			file2.close();

		}
   

		void MarshalString ( String ^ s, string& os )	//перевод System::String^ в std::string
		{
		 using namespace Runtime::InteropServices;
		 const char* chars=(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		 os = chars;
		 Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

};

#endif