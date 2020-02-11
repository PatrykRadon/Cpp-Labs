#include <iostream>
#include "num.h"

std::string num::text(bool outcome)
{
	if(outcome == true) return "TRUE";
	else return "FALSE";
}
