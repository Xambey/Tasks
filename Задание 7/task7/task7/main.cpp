
#include "Bus.h"

int main(int argc, char** argv)
{
	Bus* airobus1 = new Bus("Moscow", "car", 19.00, 12.00, 600, "ferrari");
	Bus* airobus2 = new Bus("New-York", "car", 6.00, 22.00, 750, "lamba");

	airobus1->print();
	airobus2->print();
	system("pause");
	return 0;
}