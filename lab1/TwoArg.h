#pragma once
/*
@class flaga dwuargumentowego operatora logicznego
@inh dziedziczymy po niej w klasach logicznych AND oraz OR jak wynika z linijek od 19 do 27 pliku ltest.cpp
*/
class TwoArg
{ public:
	virtual bool result( bool First, bool Second ) const = 0;
};