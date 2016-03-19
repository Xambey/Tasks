#include "Transfer.h"



Transfer::Transfer()
{
	good_name = new char;
}

Transfer::Transfer(char* good_name)
{
	this->good_name = new char[strlen(good_name)];
	for (int i(0); i < strlen(good_name); i++)
	{
		this->good_name[i] = good_name[i];
	}
	delete[]good_name;
}

Transfer::~Transfer()
{
	delete[] good_name;
}

