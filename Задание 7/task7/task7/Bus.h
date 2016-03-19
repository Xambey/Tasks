#pragma once

#include "Transfer.h"
#include "Transport.h"
#include <fstream>
#include <exception>

class Bus : public Transfer, public Transport //класс автобус, с множественным наследованием
{
public:
	Bus();
	Bus(std::string destination, char* good_name, double arrival_time, double departure_time, double average_speed, char* number_cars);
	~Bus();
	void print();
	friend inline double run(Bus& bus); // время в пути
};

double run(Bus& bus)
{
	std::ofstream n("OUTPUT.txt");
	double time(0);
	try
	{
		n.clear();
		if(!n.is_open())
		{
			throw "ERROR. File not found!";
		}

		n << "Destination: " << bus.destination << std::endl;
		n << "Good name is ";
		for (int i(0); i < strlen(bus.good_name); i++)
		{
			n << bus.good_name[i];
		}
		n << std::endl;
		n << "Arrival time: " << bus.arrival_time << std::endl;
		n << "Departure time: " << bus.departure_time << std::endl;
		n << "Average speed: " << bus.departure_time << std::endl;
		n << "Number of car: ";
		for (int i(bus.begin); i < bus.end; i++)
		{
			n << bus.number_cars[i];
		}
		n << std::endl;
		for (double i = bus.departure_time; i != bus.arrival_time; i++)
		{
			if (i == bus.arrival_time) break;
			if (i = 24) i = 0;
			++time;
		}
		n << "Distance: " << time * bus.average_speed << std::endl;
		n.close();
	}
	catch(char* str)
	{
		std::cout << str << std::endl;
		system("pause");
		return 1;
	}
	catch(...)
	{
		std::cout << "Exception not found";
		return 2;
	}
	return time;
}

