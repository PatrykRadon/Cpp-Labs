#include "KeepInt.h"

KeepInt::KeepInt(int& init_value): m_current_value{init_value}, m_value_memory{init_value}
{
 /**/
}


void KeepInt::dodo()
{
	m_value_memory = m_current_value;
}

void KeepInt::undoOk()
{
	/**/
}

void KeepInt::undoFail()
{
	m_current_value = m_value_memory;
}