#include <iostream>
#include <exception>
#include "Executor.h"


Executor::Result::operator double(){

	if( valid == false ) throw false;
	return value;

}


Executor::Result Executor::secureRun( const Function& UsedFunction, double x ){

	Result SecureResult;
	try{
		SecureResult.value = UsedFunction( x );
		SecureResult.valid = true;
	}
	catch(bool &b_e){
		std::cout << "Boolean of value false thrown" ;
	}
	catch(const char* s_e){
		std::cout << "ERROR " << std::string( s_e ) << std::endl ;
		SecureResult.problem = std::string( s_e );
	}

	return SecureResult;

}