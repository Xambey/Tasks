#define _CRT_SECURE_NO_WARNINGS
#include "String.h"


int main(int argc, char** argv)
{
	std::ofstream op("output.txt"); //создание потока для вывода в файл
	
	if (!op.is_open()) { //проверка что файл открыт
		std::cout << "Error open" << std::endl;
		return EXIT_FAILURE;
	}
	op.clear(); //очистка файла

	String s1("i'm static object1"), s2("i'm static object1");
	String* p1 = new String ("it's first string" );
	String* p2 = new String("it's second string");
	
	p1->print();
	p2->print();
	
	p1 = p2;

	p1->print();

	p2->set();
	p2->print();

	p2->set();
	p2->run();
	p2->print();

	p1->run();
	p1->print();

	op << p1->value << std::endl << p1->new_value;
	op << std::endl << p2->value << std::endl << p2->new_value << std::endl;

	p1 = &s1;
	p2 = &s2;

	p1->print();
	p2->print();

	s1.run();
	s2.run();
	op << s1.value << std::endl << s1.new_value;
	op << std::endl << s2.value << std::endl << s2.new_value;

	op.close();
	system("pause");
	return EXIT_SUCCESS;
}