#include "Order.h"

int main(int argc, char** argv)
{
	Order<int> obj(5); //создаем объект и вводим его значения
	obj.set(3); //новые данные
	obj.print(); //вывод
	system("pause");
}