#include "ccw.h"
#include <cstring>

Ccw::Ccw()
{
	command = new char[strlen("ccw 20")+1];
	strcpy(command, "ccw 20");
}

Ccw::Ccw(int_value)
{
	std::stringstream sstream;
	sstream<<"ccw "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Ccw::get_delay()
{ 
	return 5; 
}