#pragma once

namespace num
{
	/*
	@fun srednia zwraca srednia arytmetyczna calej tablicy @arg tab
	*/
	template<class T>
	double srednia(const T* tab, const int rozmiar)
	{
		double sum = 0;
		for (int i = 0; i < rozmiar ; ++i)
		{
			sum += tab[i];
		}

		return sum/rozmiar;
	}

	/*
	@fun srednia zwraca srednia arytmetyczna calej tablicy @arg tab
	*/
	template<class T, const int rozmiar>
	double srednia(const T (&tab)[rozmiar])
	{
		double sum = 0;
		for (int i = 0; i < rozmiar ; ++i)
		{
			sum += tab[i];
		}

		return sum/rozmiar;
	}

	/*
	@fun sprawdza czy @arg number jest liczba pierwsza
	@return true jesli tak, flase jesli nie
	*/
	template<class T>
	bool is_prime(const T number)
	{	
		
		for (int i = 2; i <= number/2; ++i)
		{
			if( number%i == 0 ) return false;
		}
		return true;
	}
	/*
	@fun sprawdza czy tablica @arg tab zawiera w przedziale < @arg start_n , @arg end_n ) same liczby pierwsze
	@return true jesli tak, flase jesli nie
	*/
	template<const int start_n, const int end_n, class T>
	bool czyWszystkiePierwszwe(const T* tab)
	{

		for (int i = start_n; i < end_n; ++i)
		{
			if(!is_prime<T>(tab[i]))
			{
				return false;
			} 
		}

		return true;
	}

	/*
	@fun zamienia wartosc logiczna na odpowiedni kominukat
	@return "TRUE" jesli true, oraz "FALSE" jesli false
	*/
	std::string text(bool outcome);
	
}