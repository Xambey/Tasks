#include "A.h"

A::A(double x, double y, double z):v(0) {
	set(x, y, z);
};

void A::set(double x, double y, double z)
{
	this->x = x; //установка новых значений
	this->y = y;
	this->z = z;
}

void A::print(void)
{
	std::cout << "Object: " << this << std::endl << "X = " << x << std::endl << "Y = " << y << std::endl << "Z = " << z << std::endl << "V = " << v << std::endl;
	std::cout << std::endl;
}

void A::run(void)
{
	v = (1 + pow(sin (x + y), 2) ) * pow(x, abs(y) ) / (abs(x-(2 * y) / (1 + pow(x , 2) * pow(y , 2) ) ) ) + pow(cos(atan(1 / z) ) , 2 );
}
