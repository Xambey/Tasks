#pragma once
#include <string>

class Transfer //����������� �����
{
public:
	std::string destination; //����� ����������
	std::string good_name; //�������� ������
	std::string arrival_time; // ����� � ���� ��������

	virtual void print() = 0; // ����� ����������� �-���,
	Transfer(); // ������ �� ���������
	virtual ~Transfer(); // ����������� ����������
};

