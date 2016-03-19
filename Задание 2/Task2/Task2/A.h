#pragma once

#include <iostream>
#include <cmath>
class A
{
	double x, y, z, v; //объявление закрытых полей
public:
	A(double x, double y, double z); //конструктор
	inline void set(double x, double y, double z); //установка новых значений x,y,z
	void print(void);
	void run(void);
};
