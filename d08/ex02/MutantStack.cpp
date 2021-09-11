#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack & src )
{
}
template<typename T>
MutantStack<T>::~MutantStack()
{
}
template<typename T>
MutantStack<T> &				MutantStack<T>::operator=( MutantStack const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}
