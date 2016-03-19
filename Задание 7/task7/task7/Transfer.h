#pragma once
#include <string>
#include <iostream>
class Transfer //абстрактный класс
{
public:
	std::string destination; //пункт назначения
	char* good_name; //название товара
	static char* all_numbers; // номера машин
	static int last_index; //число элементов numbers_cars на данный момент

	virtual void print() = 0; // чисто виртуальная ф-ция,
	Transfer(); 
	Transfer(char* good_name);
	virtual ~Transfer(); // виртуальный дeструктор
};

