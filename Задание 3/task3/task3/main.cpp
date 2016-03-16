#include "X.h"
//вариант 3

int main (int argc, char** argv)
{
	X* obj = new X; //выделение динамической памяти
	print(*obj); //вызов дружественных функций
	run(*obj);
	print(*obj);

	obj->~X(); //вызов деструктора (уничтожение объекта)
	return 0;
}