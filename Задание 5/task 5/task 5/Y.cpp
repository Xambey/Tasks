#include "Y.h"

Y::Y(int a, int b, int c) :X(a, b)
{
	y = new int;
	*y = c;
}
	
void Y::view()
{
	std::cout << "x1 = " << *x1 << " x2 = " << *x2 << " y = " << *y << std::endl;
}

void Y::set()
{
	std::cout << "Enter x1: ";
	std::cin >> *x1;
	std::cout << "Enter x2: ";
	std::cin >> *x2;
	std::cout << "Enter y: ";
	std::cin >> *y;
}

Y::~Y()
{
	delete y;
}

void Y::run()
{
	std::cout << "Result: " << pow(*x1,2) + pow(*x2,2) + pow (*y,2) << std::endl;
}
