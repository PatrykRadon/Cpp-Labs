#pragma once
#include "OneArg.h"
/*
@class klasa logiczna operatora ! (not)
*/
class NOT: public OneArg
{
public:
	bool result( bool Arg1 )const override;
};
