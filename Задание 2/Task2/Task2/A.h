#pragma once

#include <iostream>
#include <cmath>
class A
{
	double x, y, z, v; //���������� �������� �����
public:
	A(double x, double y, double z); //�����������
	inline void set(double x, double y, double z); //��������� ����� �������� x,y,z
	void print(void);
	void run(void);
};
