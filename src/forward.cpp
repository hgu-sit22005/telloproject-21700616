#include "forward.h"
#include <cstring>

Forward::Forward()
{
	command = new char[strlen("forward 20")+1];
	strcpy(command, "forward 20");
}

Forward::Forward(int_value)
{
	std::stringstream sstream;
	sstream<<"forward "<< _value;

	command=new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Forward::get_delay()
{ 
	return 5; 
}