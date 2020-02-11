#pragma once
#include "TwoArg.h"
/*
@class klasa logiczna operatora &&
*/
class AND : public TwoArg
{
public:
	bool result( bool Arg1, bool Agr2 )const override;
};