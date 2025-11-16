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


		/*member functions: */

		int	shortestSpan(void) const;
		int longestSpan(void) const;
		void addNumber(int n);
		void add_mulitple(int n[], int lenght);


		/*exepctions :*/

		class maxsizeExeption: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: Span at max size already");
				}
		};



		/*utils :*/
		void print_span(void);

	private:
		std::list<int> numbers;
		unsigned int max_size;
};

#endif