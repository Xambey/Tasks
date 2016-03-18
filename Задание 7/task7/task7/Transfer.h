#pragma once
#include <string>

class Transfer //абстрактный класс
{
public:
	std::string destination; //пункт назначения
	std::string good_name; //название товара
	std::string arrival_time; // время и дата прибытия

	virtual void print() = 0; // чисто виртуальная ф-ция,
	Transfer(); // ОБЪЕКТ НЕ СОЗДАЕТСЯ
	virtual ~Transfer(); // виртуальный диструктор
};

