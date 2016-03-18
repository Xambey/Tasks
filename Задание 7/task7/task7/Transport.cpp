#include "Transport.h"

Transport::Transport()
{
	this->distance = distance;
	this->average_speed = average_speed;
	this->number_cars = new char;
	this->departure_time = new char;
}

Transport::Transport(int distance, char* number_cars, char* departure_time, double average_speed)
{
	this->distance = distance;
	this->average_speed = average_speed;

	this->number_cars = new char[strlen(number_cars)];
	
	for (int i(0); i < strlen(number_cars); i++)
	{
		this->number_cars[i] = number_cars[i];
	}

	this->departure_time = new char[strlen(departure_time)];
	
	for (int i(0); i < strlen(departure_time); i++)
	{
		this->departure_time[i] = departure_time[i];
	}
}


Transport::~Transport()
{
	delete[]departure_time;
	delete[]number_cars;
}
