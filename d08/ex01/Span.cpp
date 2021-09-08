#include "Span.hpp"


Span::Span()
{
}

Span::Span( const Span & src )
{
}

Span::~Span()
{
}

Span &				Span::operator=( Span const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
