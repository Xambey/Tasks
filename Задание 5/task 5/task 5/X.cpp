#include "X.h"
X::X(int a, int b)
{
	x1 = new int;
	x2 = new int;
	*x1 = a;
	*x2 = b;
}

void X::view()
{
	std::cout << "x1 = " << *x1 << " x2 = " << *x2 << std::endl;
}

void X::set()
{
	std::cout << "Enter x1: ";
	std::cin >> *x1;
	std::cout << "Enter x2: ";
	std::cin >> *x2;
}

X::~X()
{
	delete x1;
	delete x2;
}