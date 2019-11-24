#pragma once
#include "TelloPro.h"

class Down: public TelloPro
{
public:
	Down();
	Down(int_value);
	
public:
	double get_delay();
};
