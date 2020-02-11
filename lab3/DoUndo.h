#pragma once
#include "KeepInt.h"
/*
@class DoUndo klasa zapametujaca powodzenie opercji spod wskaznika m_action
*/

class DoUndo
{
public:
	/*
	@konst zaklada niepowodzenie operacji, oraz uruchamia metode inicjalizujaca akcje m_action
	*/
	DoUndo(DoUndoAction* action);
	/*
	@dest w razie powodzenia lub niepowodzenia operacji uruchamia odpowiedajace im metody w akcji m_action
	*/
	~DoUndo();
	
	/*
	@fun ustawia flage powodzenia operacji
	*/
	static void allok();

private:
	/*
	@arg1 flaga powodzenia operacji
	@arg2 wskaznik na operacje
	*/
	static bool s_success;
	DoUndoAction* m_action = nullptr;
};


