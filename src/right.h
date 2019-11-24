#pragma once
#include "TelloPro.h"

class Right: public TelloPro
{
public:
	Right();
	Right(int_value);
	
public:
	double get_delay();
};
