#pragma once
#include <iostream>
#include <cmath>

class X //базовый класс
{
protected:
	int *x1, *x2; //защищенные данные
public:
	X(int a, int b); //конструктор с инициализицией
	~X();
	virtual void view(); //виртуальные методы
	virtual void set();
	//виртуальный метод, означает, что его обязательно надо переопределить
	//в производном классе
};

