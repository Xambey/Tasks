#pragma once
#include <string>
#include <iostream>
class Transfer //����������� �����
{
public:
	std::string destination; //����� ����������
	char* good_name; //�������� ������
	static char* all_numbers; // ������ �����
	static int last_index; //����� ��������� numbers_cars �� ������ ������

	virtual void print() = 0; // ����� ����������� �-���,
	Transfer(); 
	Transfer(char* good_name);
	virtual ~Transfer(); // ����������� �e��������
};

