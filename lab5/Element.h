#pragma once

/*
@class polimorficzna baza wrappera dla zmiennych dowolnego typu
*/
class Element
{
public:
	Element() = default;
	virtual ~Element() = default;
	
};

/*
@class wrapper na element typu @CT
*/
template <class CT>
class TElement: public Element
{
public:
	 TElement(const CT& new_element): m_element{new_element} {}
	~TElement() = default;

	/*
	@fun zwraca oryginalny wrappowany element
	*/
	const CT& get() const
	{	
		return m_element;
	}

private:
	CT m_element;
	

};