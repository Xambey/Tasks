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
	String(char*); //конструктор с установкой исходного значения строки
	String();
	~String();
	void print(); //вывод значений value и new_value 
	void set(); //устанавливает исходное значение
	void run(); //запуск задачи №27
	String& operator=(String& s); //перегрузка оператора присваивания
};

