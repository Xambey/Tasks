#define _CRT_SECURE_NO_WARNINGS
#include "String.h"

#define SIZE 255

String::String():value(new char[SIZE]){}
String::~String() { delete[]value; std::cout << "value is void " << std::endl; }

String::String(char*str)
{
	value = new char[SIZE];
	strcpy(str, value);
}

String& String::operator=(String& s) //оператор присваивания строки s1 в s2
{
		if (this == &s) {
			return *this;
		}
		value = s.value;
		return *this;
}

void String::print() //вывод полученной строки посимвольно
{
	for (unsigned int i = 0; i < strlen(value); i++)
		std::cout << value[i];
	std::cout << std::endl;
}

void String::set(char*s) //установка нового значения для строки
{
	unsigned int i = 0;
	for (; i < strlen(s); i++)
		value[i] = s[i];
	value[i] = '\0';
}
