#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Transfer.h"
#include "Transport.h"
#include <fstream>
#include <exception>

class Bus : public Transfer, public Transport //класс автобус, с множественным наследованием
{
public:
	Bus();
	Bus(std::string destination, const char* good_name, double arrival_time, double departure_time, double average_speed, const char* number_cars);
	~Bus();
	void print();
	friend inline double run(Bus& bus); // время в пути и вывод в файл
};

double run(Bus& bus)
{
	std::ofstream n("OUTPUT.txt",std::ios::app); //открыть в режиме дополнения записи
	bus.time = 0;
	try
	{
		if(!n.is_open())
		{
			throw "ERROR. File not found!"; //генерация исключения, файл не открыт
		}

		n << "Destination: " << bus.destination << std::endl;
		n << "Good name: ";

		for (int i(0); i < strlen(bus.good_name); i++)
		{
			n << bus.good_name[i];
		}
		n << std::endl;
		n << "Arrival time: " << bus.arrival_time << " hours" << std::endl;
		n << "Departure time: " << bus.departure_time << " hours" << std::endl;
		n << "Average speed: " << bus.departure_time << " kilometers/hour" << std::endl;
		n << "Number of car: ";

		for (int i(bus.begin); i < bus.end; i++)
		{
			n << bus.all_numbers[i];
		}
		n << std::endl;

		for (int i = bus.departure_time; i != bus.arrival_time; i++)
		{
			if (i == bus.arrival_time)
				break;
			if (i == 24)
				i = 0;
			++bus.time;
		}
		n << "Distance: " << bus.time * bus.average_speed << " kilometers" << std::endl;
		n << "Transfer time: " << bus.time << " hours" << std::endl << std::endl;
		n.close();
	}
	catch(char* str) //исключение на строку
	{
		std::cout << str << std::endl;
		system("pause");
		return 1;
	}
	catch(...)
	{
		std::cout << "Exception not found"; //если исключение не найдено
		return 2;
	}
	return bus.time;
}

