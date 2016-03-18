#pragma once
#include <cstring>

class Transport //����� ������� ���������� � ������
{
public:
	double distance; // ���������
	char* number_cars; // ������ �����
	char* departure_time; // ����� � ���� ������
	double average_speed; // ������� ��������

	friend void run(); // ����� � ����
	Transport();
	Transport(int distance, char* number_cars, char* departure_time, double average_speed);
	virtual ~Transport();
};

