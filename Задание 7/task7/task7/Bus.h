#pragma once

#include "Transfer.h"
#include "Transport.h"

class Bus : public Transfer, public Transport //класс автобус, с множественным наследованием
{
public:
	Bus();
	~Bus();
};

