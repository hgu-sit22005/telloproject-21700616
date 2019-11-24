#include "back.h"
#include <cstring>

Back::Back()
{
	command = new char[strlen("back 20")+1];
	strcpy(command, "back 20");
}

Back::Back(int_value)
{
	std::stringstream sstream;
	sstream<<"back "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Back::get_delay()
{ 
	return 5; 
}