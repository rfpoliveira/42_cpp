#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
	this->max_size = 0;
	this->numbers;
} 

Span::Span(unsigned int N)
{
	this->max_size = N;
	this->numbers;
}

Span::Span(const Span& other)
{
	this->max_size = other.max_size;
	std::list<int> copy(other.numbers);
	this->numbers = copy;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span(){}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span& Span::operator=(Span const& other)
{
	if ( this != &other )
	{
		this->max_size = other.max_size;
		std::list<int> copy(other.numbers);
		this->numbers = copy;
	}
	return *this;
}

/*
----------------------------------- MEMBER FUNCTIONS ------------------------------ 
 */

void Span::addNumber(int n)
{
		try
		{
			if (numbers.size() == max_size)
				throw (Span::maxsizeExeption());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return ;
		}
		numbers.push_back(n);
}

void Span::print_span(void)
{
	std::list<int>::iterator it;

	for(numbers.begin(); )
}
