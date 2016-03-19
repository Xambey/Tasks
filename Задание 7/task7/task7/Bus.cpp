#include "Bus.h"

Bus::Bus()
{
	good_name = new char;
	all_numbers = new char;
	destination = "ERROR";
	distance = 0;
	arrival_time = 0.00;
	departure_time = 0.00;
	average_speed = 0;
	end = 0;
}

Bus::Bus(std::string destination, const char* good_name, double arrival_time, double departure_time, double average_speed, const char* number_cars)
{
	time = 0;

	this->arrival_time = arrival_time;
	this->departure_time = departure_time;
	this->begin = last_index;
	this->distance = 0;
	this->destination = destination;

	strcpy(this->good_name, good_name);

	this->arrival_time = arrival_time;
	this->departure_time = departure_time;
	this->average_speed = average_speed;

	end = last_index + strlen(number_cars);

	char* new_all_numbers = new char[end];

	for (int i(0); i < last_index; ++i)
		new_all_numbers[i] = all_numbers[i];

	for (int i(0); i < strlen(number_cars); ++i)
		new_all_numbers[last_index + i] = number_cars[i];

	last_index = end;

	if (all_numbers)
		delete[] all_numbers;
	all_numbers = new_all_numbers;
}

Bus::~Bus()
{
	delete[] good_name;
}

void Bus::print()
{
	std::cout << "Destination: " << destination << std::endl;
	std::cout << "Good name: ";
	for (int i(0); i < strlen(good_name); i++)
	{
		std::cout << good_name[i];
	}
	distance = run(*this) * average_speed;
	std::cout << std::endl << "Distance: " << distance << " kilometers" << std::endl;
	std::cout << "Arrival time: " << arrival_time << " hours" <<std::endl;
	std::cout << "Departure time: " << departure_time << " hours"<<std::endl;
	std::cout << "Average speed: " << average_speed <<" kilometers/hour" << std::endl;
	std::cout << "Transfer time: " << time << " hours" << std::endl;
	std::cout << "Number of car: ";

	for (int i(begin); i < end; i++)
	{
		std::cout << all_numbers[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
}
