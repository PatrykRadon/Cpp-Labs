#include "Logical.h"


bool Logical::eval( const TwoArg& LogicalOperator, bool FirstArg , bool SeconArg ){
	return LogicalOperator.result(FirstArg,SeconArg);
}

bool Logical::eval( const OneArg& LogicalOperator, bool FirstArg ){
	return LogicalOperator.result(FirstArg);
}