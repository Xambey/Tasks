#pragma once
#include <string>

class Transport //����� ������� ���������� � ������
{
public:
	double distance; // ���������
	double departure_time; // ����� ������
	double arrival_time; // ����� ��������
	double average_speed; // ������� ��������
	int begin; // ������ ������ ������ ��� ������ ������
	int end; // ������ ����� ������ ��� ������ ������

	Transport();
	virtual ~Transport();
};

