#pragma once
#include "DoUndoAction.h"
/*
@class DoUndo klasa przechowujaca referencje do zmiennej int oraz wartosc nadana jej podczas inicjalizacji
*/


class KeepInt : public DoUndoAction 
{
public:
	/*
	@konst przechowuje referencje obiektu int w m_current_value oraz zapamietuje jej wartosc inicjalizacji w m_value_memory
	*/
	KeepInt(int& init_value);
	~KeepInt() = default;

	/*
	@fun dodo aktualizuje m_value_memory o wartosc m_current_value
	*/
	void dodo() override;  
	/*
	@fun undoOk pozostawia m_current_value nie zmieniona po destrukcji akcji
	*/
  	void undoOk() override;
  	/*
	@fun undoOk przywraca m_current_value na wartosc nadana jej podczas inicjalizacji obiektu klasy KeepInt
	*/
 	void undoFail() override;

private:

	int& m_current_value;
	/*
	!m_value_memory nie jest const na potrzeby rozszerzalnosci zadania, np gdyby inne operacje mialy tylko zaktualizowac zapamietany wynik
	*/
	int m_value_memory;
	
};