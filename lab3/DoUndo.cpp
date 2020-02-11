#include "DoUndo.h"

bool DoUndo::s_success = 0;

DoUndo::DoUndo(DoUndoAction* action): m_action{action}
{	
	s_success = 0;
	m_action->dodo();
}
DoUndo::~DoUndo()
{
	if(s_success == 0) m_action->undoFail();
	else m_action->undoOk();
	delete m_action;
}

void DoUndo::allok()
{
	s_success = 1;
}