#pragma once

#include "Transfer.h"
#include "Transport.h"

class Bus : public Transfer, public Transport //����� �������, � ������������� �������������
{
public:
	Bus();
	~Bus();
};

