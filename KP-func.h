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

	int kolstr (fstream &file)					//����������� ���������� ����� � �����
	{   int g=0; string s;
		while (!file.eof())
			{getline(file, s);
             g++;
		    }
		return g;
    }

	                                                    
	void cht_a(const char *name, int &a, string &st) //������ �� ����� ������ � ������� �
	{ 
	  fstream file(name);
	  for (int i=0;i<=a;i++)
		getline(file,st); 	
	  file.close();
	}


	void perezap (const char *name1,const char *name2, int &k) //���������� � ����� �� ����� 1 � ���� 2
	{ fstream file1(name1); //���������� ����
	  fstream file2(name2); //������
		  
	  string buff; int i = 0; 

	  while (!file2.eof()&& i<k-1)
		{getline(file2,buff);
		 file1<<buff<<endl;			
		 i++;}

		 getline(file2,buff);					//����� � ����� ����� 2 �� ���� ������ ������
		 file1<<buff;
		 ofstream file22(name2);				//������� ��������� �����
		}

		void zap_izm(const char *name1,const char *name2, int &a, int &k, string &st, 
			                   string &o1,string &o2,string &o3,string &o4,string &o5)			
							   //������ ���������� ������� � ����
		{	string buff;
			fstream file1(name1);				//�������� ���� � ��������� � ��������
			fstream file2(name2);				//�������� ����
			
			for (int i=0;i<a;i++)				//������ � ����� �����, �� ���������� �������
			{getline(file1,buff);
			 file2<<buff<<endl;			
			}
			
			file2<<st<<endl;					//������ �������� ������ � ����
			file2<<o1<<endl;
			file2<<o2<<endl;
			file2<<o3<<endl;
			file2<<o4<<endl;
			file2<<o5<<endl;

			for (int i=0;i<6;i++)				//����� ������� ������������ �������� ���������� �����
				getline(file1,buff);
			 	
			for (int i=a;i<k-1;i++)				//������ ���������� ���������� �����
				{getline(file1,buff);
			 	 file2<<buff<<endl;			
				}
			getline(file1,buff);				//������ ��������� ������, ����� � ����� ����� 
			file2<<buff;						//�� ������������ ������ ������
			
			file1.close();
			file2.close();
			file1.open(name1,ios::trunc);
			file2.open(name2,ios::in | ios::out);

			perezap(name1,name2,k);
		    			     
			file1.close();
			file2.close();

		}
   

		void MarshalString ( String ^ s, string& os )	//������� System::String^ � std::string
		{
		 using namespace Runtime::InteropServices;
		 const char* chars=(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		 os = chars;
		 Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

};

#endif