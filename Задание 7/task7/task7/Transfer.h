#pragma once
#include <string>
#include <iostream>
class Transfer //����������� �����
{
public:
	std::string destination; //����� ����������
	char* good_name; //�������� ������
	static char* number_cars; // ������ �����
	static int index; //����� ��������� numbers_cars �� ������ ������

	virtual void print() = 0; // ����� ����������� �-���,
	Transfer(); 
	Transfer(char* good_name);
	virtual ~Transfer(); // ����������� ����������
};

