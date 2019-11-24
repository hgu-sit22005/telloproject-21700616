#pragma once
#include "TelloPro.h"

class Forward: public TelloPro
{
public:
	Forward();
	Forward(int_value);
	
public:
	double get_delay();
};
