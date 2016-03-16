#define _CRT_SECURE_NO_WARNINGS
#include "String.h"

int main(int argc, char** argv)
{
	String* s1 = new String ("it's first string" );
	String* s2 = new String("it's second string");
	
	s1->print();
	s2->print();
	
	s1 = s2;

	s1->print();

	s2->set("ololo i'm driver UFO");
	s2->print();

	system("pause");
	return 0;
}