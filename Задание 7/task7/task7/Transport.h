#pragma once
#include <string>

class Transport //класс имеющий информацию о машине
{
public:
	double distance; // дистанция
	double departure_time; // время выезда
	double arrival_time; // время прибытия
	double average_speed; // средняя скорость
	int begin; // индекс начала номера для данной машины
	int end; // индекс конца номера для данной машины

	Transport();
	virtual ~Transport();
};

