#pragma once
#include <iostream>

class X
{
private:
	double x, y, z, v;
public:
	friend void print(X&);
	friend void run(X&);
	X();
	~X();
};

