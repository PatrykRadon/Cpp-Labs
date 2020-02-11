#include "ClonesF.h"


ClonesF::~ClonesF()
{
	for(Element* el : m_element_vector)
	{
		delete el;
	}
}