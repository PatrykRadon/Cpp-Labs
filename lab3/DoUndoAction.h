#pragma once
/*
@class DoUndoAction interfejs dla klas (akcji) mu pochodnych
*/
class DoUndoAction
{
public:
	DoUndoAction() = default;
	virtual ~DoUndoAction() = default;

	/*
	@fun dodo inicjalizuje akcje
	*/
	virtual void dodo() = 0;
	/*
	@fun undoOK zakancza akcje powodzeniem
	*/
	virtual void undoOk() = 0;
	/*
	@fun undoOK zakancza akcje niepowodzeniem
	*/
	virtual void undoFail() = 0;
};


