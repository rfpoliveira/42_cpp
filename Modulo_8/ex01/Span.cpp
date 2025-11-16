#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(): numbers(), max_size(0){} 

Span::Span(unsigned int N): numbers(), max_size(N) {}

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

int Span::longestSpan(void) const
{
	if (numbers.size() < 2)
		return (0);
	std::list<int> temp = numbers;
	temp.sort();
	return(temp.back() - temp.front());
}

int Span::shortestSpan(void) const
{
	if (numbers.size() < 2)
		return (0);
	std::list<int> temp = numbers;
	temp.sort();

	int shortest_span = std::numeric_limits<int>::max();
	std::list<int>::iterator first = temp.begin();
	std::list<int>::iterator second = temp.begin();
	second++;
	for(; second != temp.end(); second++)
	{
		if ((*second - *first) < shortest_span)
			shortest_span = *second - *first;
		first++;
	}
	return (shortest_span);
}

void Span::add_mulitple(int n[], int lenght)
{
	for(int i = 0; i < lenght; i++)
		addNumber(n[i]);
}

void Span::print_span(void)
{
	std::list<int>::iterator it;

	for(it = numbers.begin(); it != numbers.end(); it++)
		std::cout << *it << std::endl;
}
