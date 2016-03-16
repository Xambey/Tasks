#include "A.h"
#include <iostream>


// вариант 3
int main(int argc, char**argv)
{
	A obj1(3.74 / 100, -0.825, 0.16 * 100);
	A obj2(1, 2, 3); //статическое выделение памяти

	A* p1 = &obj1; // указателю присваивается адрес объекта 1
	A* p2 = &obj2;

	obj1.print(); //прямой вывод
	obj2.print();

	p1->run();  //косвенный вывод
	p1->print();

	obj2.run();
	obj2.print();

	p1->set(1, 2, 3);
	p1->print();

	p2->set(9, 2, 4);
	p2->print();

	p1 = new A(5, 6, 7); //динамическое выделение памяти
	p2 = new A(9, 8, 7);

	p1->run();
	p1->print();

	p2->run();
	p2->print();

	system("pause");
	return 0;
}
