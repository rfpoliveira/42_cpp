#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <limits>
# include <list>
# include <iterator>

class Span
{
	public:

		Span();
		Span(unsigned int N);
		Span( Span const & other );
		~Span();
		Span& operator=(Span const& other);

		void addNumber(int n);

		class maxsizeExeption: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: Span at max size already");
				}
		};

		void print_span(void);
	private:
		unsigned int max_size;
		std::list<int> numbers;
};

#endif