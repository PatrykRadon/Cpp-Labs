
#include "NOT.h"
#include "OR.h"
#include "AND.h"


namespace Logical {
bool eval( const TwoArg& LogicalOperator, bool FirstArg , bool SeconArg );
bool eval( const OneArg& LogicalOperator, bool FirstArg );
};