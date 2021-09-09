#include "Span.hpp"


Span::Span(unsigned int N): n(N)
{
}

Span::Span( const Span & src ): n(src.n)
{
	for(size_t i = 0; i < src.size(); i++)
		vec.push_back(src.getElement(i));
}

Span::~Span()
{
}
int Span::getElement(unsigned int idx) const
{
	if (size() >= n)
		throw OutOfBoundsException;
	return(vec[idx]);
}

size_t min(size_t a, unsigned int b)
{
	if ( a < b)
		return (a);
	else 
		return (b);
}

size_t Span::size() const
{
	return (min(vec.size(), n));
}

void Span::addNumber(int a)
{
	if (size() < n)
		vec.push_back(a);
	else
		throw OutOfBoundsException;
}

void Span::setN(int _n)
{
	n = _n;
}

int Span::getN(void) const
{
	return n;
}
int Span::shortestSpan(void) 
{
	tmp.clear();
	std::copy(vec.begin(), vec.end(), tmp.begin());
	std::sort(tmp.begin(), tmp.end());

	return n;
}
int Span::longestSpan(void) 
{
	tmp.clear();
	for(size_t i = 0; i < size(); i++)
	{	
		std::cout << i << std::endl;
		tmp.push_back(vec[i]);
	}
	std::sort(tmp.begin(), tmp.end());

	return (tmp[tmp.size() - 1] - tmp[0]);
}

Span &				Span::operator=( Span const & src )
{
	vec.clear();
	this->setN(src.getN()); 
	for(size_t i = 0; i < src.size(); i++)
		vec.push_back(src.getElement(i));
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Span const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }
