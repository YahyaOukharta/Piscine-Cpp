#include "OmarClass.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

OmarClass::OmarClass()
{
}

OmarClass::OmarClass( const OmarClass & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

OmarClass::~OmarClass()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

OmarClass &				OmarClass::operator=( OmarClass const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, OmarClass const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */