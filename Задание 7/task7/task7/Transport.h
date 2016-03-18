#pragma once
#include <cstring>

class Transport //класс имеющий информацию о машине
{
public:
	double distance; // дистанция
	char* number_cars; // номера машин
	char* departure_time; // время и дата выезда
	double average_speed; // средняя скорость

	friend void run(); // время в пути
	Transport();
	Transport(int distance, char* number_cars, char* departure_time, double average_speed);
	virtual ~Transport();
};

