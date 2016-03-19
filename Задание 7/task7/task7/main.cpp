
#include "Bus.h"

int main(int argc, char** argv)
{
	Bus* airobus1 = new Bus("Moscow", "water", 19.00, 12.00, 60, "XYZ391");
	Bus* airobus2 = new Bus("New-York", "fishes", 6.00, 9.00, 75, "FCD124");

	airobus1->print();
	airobus2->print();
	system("pause");
	return 0;
}