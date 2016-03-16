#include "X.h"


X::~X()
{
	std::cout << "Object destroyed " << std::endl; 
	system("pause");
}
X::X()
{
	x = 3.74 / 100; //инициализация переменных
	y = -0.825;
	z = 0.16 * 100;
	v = 0;
}

void print(X& obj)
{
	std::cout << "Object: " << &obj << std::endl << "X = " << obj.x << std::endl << "Y = " << obj.y << std::endl << "Z = " << obj.z << std::endl << "V = " << obj.v << std::endl;
	std::cout << std::endl;
}

void run(X& obj)
{
	obj.v = (1 + pow(sin(obj.x + obj.y), 2)) * pow(obj.x, abs(obj.y)) / (abs(obj.x - (2 * obj.y) / (1 + pow(obj.x, 2) * pow(obj.y, 2)))) + pow(cos(atan(1 / obj.z)), 2);
}

