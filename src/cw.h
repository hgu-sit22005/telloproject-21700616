#pragma once
#include "TelloPro.h"

class Cw: public TelloPro
{
public:
	Cw();
	Cw(int_value);
	
public:
	double get_delay();
};
