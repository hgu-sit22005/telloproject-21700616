#pragma once
#include "TelloPro.h"

class Back: public TelloPro
{
public:
	Back();
	Back(int_value);
	
public:
	double get_delay();
};
