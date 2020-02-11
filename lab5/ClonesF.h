#pragma once
#include <vector>
#include "Element.h"

/*
@struct pusta klasa wyjatku
*/
template <typename ST>
struct missing
{};


/*
@class klasa przechowujaca tablice danych dowolnego typu, ze zdolnoscia rozpoznawania przechowywanych typow i zwracania kopii przechowywanych elementow
@arg m_element_vector vector przechowujacy skladniki pochodne polimorficznego typu element
*/
class ClonesF
{
public:
	ClonesF() = default;
	~ClonesF();
	
	/*
	@fun funkcja sprawdza wszystkie elementy w klasie @this za elementem typu @T po czym zwraca kopie znalezionego elementu lub wyrzuca wyjatek w razie nieznalezienia
	*/
	template <typename T>
	const T clone() const;
	
	/*
	@fun funkcja dodaje na koncu vectora skladujacego wskaznik na oryginal elementu @clonable_object
	*/
	template <typename T>
	void add(const T& clonable_object);

private:

	std::vector<Element*> m_element_vector;

};



template <typename T>
const T ClonesF::clone() const
{	

	for(Element* el : m_element_vector)
	{
		if( dynamic_cast< TElement<T>* > (el) ) return dynamic_cast< TElement<T>* >(el)->get();
	}

	missing<T> Texcept;
	throw Texcept;

}

template <typename T>
void ClonesF::add(const T& clonable_object)
{
	m_element_vector.push_back ( new TElement<T>(clonable_object) );
}
