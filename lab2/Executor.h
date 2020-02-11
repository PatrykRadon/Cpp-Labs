#pragma once

namespace Executor{

	/* class Function
	* klasa bazowa dla funkcji z linijek 23-49  z plike etest
	*/
	class Function
	{
	public:
		//Function() = default;
		virtual ~Function() = default;
		/*func operator()
		* funktor dla klas pochodnych mogacy , w wypadku nieprawidlowego uzycia, wyrzucic wyjatek typu bool / const char* .
		*/
		virtual double operator()(double x) const = 0;
		
	};



	/* class Result
	* klasa przechowujaca wynik w trzech postaciach: wartosci value, powodzenia operacji valid oraz ewentualnego bledu operacji problem
	*/
	class Result
	{
	public:
		Result() = default;
		~Result() = default;


		/*func double()
		* konwerter zwracajacy wartosc value oraz wyrzucajacy wyjatek w wypadku gdy valid ma ustawiona wartosc true
		*/
		operator double();

		bool valid = false;
		double value;
		std::string problem = "";
	};

	/*func secureRun()
	* wywolanie funktora obiektu typu Function na argumencie x , z obsluga mozliwych wyrzucanych przez niego bledow
	*/

	Result secureRun(const Function& UsedFunction, double x);


};