#define _CRT_SECURE_NO_WARNINGS
#include "String.h"

#define SIZE 255
#include <complex>

String::String() 
{
	value = new char[SIZE];
	new_value = new char[SIZE];
	value[0] = '\0'; //��������� ������ ����� ������, ��� �����������
	new_value[0] = '\0';
}
String::~String() { delete[]value; delete[]new_value; std::cout << "all values is void " << std::endl; }

String::String(char*str)
{
	value = new char[SIZE];
	new_value = new char[SIZE];
	value[0] = '\0'; //��������� ������ ����� ������, ��� �����������
	new_value[0] = '\0';
	strcpy(value, str); //����������� value �������� ��������� ���������� ��� �������� ������ 
}

String& String::operator=(String& s) //�������� ������������ ������ s1 � s2
{
		if (this == &s) {
			return *this;
		}
		for (int i(0); i < SIZE; i++)
		{
			value[i] = s.value[i]; 
		}
		return *this; //���������� ������� ������, ��� ������ �� ������, ����� ���������� ���������� �++
}

void String::print() //����� ���������� ������ �����������
{
	int i(0);
	std::cout << "value = ";
	while (value[i] != '\0') { //���� �� ����� ������ ��...
		std::cout << value[i]; //������������ ����� ������
		i++;
	}
	i = 0;
	std::cout << std::endl << "new_value = ";
	while (new_value[i] != '\0') {
		std::cout << new_value[i];
		i++;
	}
	std::cout << std::endl << std::endl;
}

void String::set() //��������� ������ �������� ��� ������
{
	std::cout << "Enter string: ";
	std::cin.getline(value, SIZE,'\n');
}

void String::run()
{
	int m(0);
	if (strlen(value) % 5 == 0)
	{
		for (int i(0); i < strlen(value); i++)
		{
			if(value[i] >= 'a' && value[i] <= 'z')
			{
				new_value[m] = value[i];
				m++;
			}
		}
		new_value[m] = '\0';
	}
}