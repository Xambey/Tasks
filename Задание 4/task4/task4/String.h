#pragma once
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ostream>
#include <locale>
#include <fstream>

class String
{
public:
	char* value;
	char* new_value;
	String(char*); //����������� � ���������� ��������� �������� ������
	String();
	~String();
	void print(); //����� �������� value � new_value 
	void set(); //������������� �������� ��������
	void run(); //������ ������ �27
	String& operator=(String& s); //���������� ��������� ������������
};

