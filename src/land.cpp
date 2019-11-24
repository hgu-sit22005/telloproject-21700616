#include "land.h"
#include <cstring>

Land::Land()
{
	command = new char[strlen("land 20")+1];
	strcpy(command, "land 20");
}

Land::Land(int_value)
{
	std::stringstream sstream;
	sstream<<"land "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Land::get_delay()
{ 
	return 5; 
}