#include "Bus.h"

Bus::Bus()
{
	good_name = new char;
	number_cars = new char;
	destination = "ERROR";
	distance = 0;
	arrival_time = 0.00;
	departure_time = 0.00;
	average_speed = 0;
	end = 0;
}

Bus::Bus(std::string destination, char* good_name, double arrival_time, double departure_time, double average_speed, char* number_cars)
{
	this->arrival_time = arrival_time;
	this->departure_time = departure_time;
	this->end = 0;
	this->begin = index + 1;
	this->distance = 0;
	this->destination = destination;
	this->good_name = new char[strlen(good_name)];

	for (int i(0); i < strlen(good_name); i++)
	{
		this->good_name[i] = good_name[i];
	}
	delete[]good_name;
	this->arrival_time = arrival_time;
	this->departure_time = departure_time;
	this->average_speed = average_speed;
	this->number_cars = new char[strlen(number_cars)];
	
	int j = begin;
	for (int i(0); i < strlen(number_cars); ++i,++j)
	{
		this->number_cars[j] = number_cars[i];
	}
	index = j;
	end = j;
	delete[]number_cars;
}


Bus::~Bus()
{
	delete[]good_name;
	delete[]number_cars;
}

void Bus::print()
{
	std::cout << "Destination: " << destination << std::endl;
	std::cout << "Good name is ";
	for (int i(0); i < strlen(good_name); i++)
	{
		std::cout << good_name[i];
	}
	distance = run(*this) * average_speed;
	std::cout << std::endl << "Distance: " << distance << std::endl;
	std::cout << "Arrival time: " << arrival_time << std::endl;
	std::cout << "Departure time: " << departure_time << std::endl;
	std::cout << "Average speed: " << departure_time << std::endl;
	std::cout << "Number of car: ";
	for (int i(begin); i < end; i++)
	{
		std::cout << number_cars[i];
	}
	std::cout << std::endl;
}
