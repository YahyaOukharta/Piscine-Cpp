#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
#include <exception>
#include <algorithm>

class OutOfBoundsExcept: public std::exception
{
	const char* what() const throw()
	{
		return "Index Out of Bounds";
	};
};

class Span
{
	private:
		unsigned int n;
		std::vector<int> vec;
		std::vector<int> tmp;

 		OutOfBoundsExcept OutOfBoundsException;
	public:

		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		int getElement(unsigned int idx) const ;
		size_t size() const ;
		void addNumber(int a);

		void setN(int n);
		int	 getN()const ;
		
		int shortestSpan(void);
		int longestSpan(void);

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */