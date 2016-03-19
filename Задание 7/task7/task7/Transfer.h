#pragma once
#include <string>
#include <iostream>
class Transfer //абстрактный класс
{
public:
	std::string destination; //пункт назначения
	char* good_name; //название товара
	static char* number_cars; // номера машин
	static int index; //число элементов numbers_cars на данный момент

	virtual void print() = 0; // чисто виртуальная ф-ция,
	Transfer(); 
	Transfer(char* good_name);
	virtual ~Transfer(); // виртуальный диструктор
};

