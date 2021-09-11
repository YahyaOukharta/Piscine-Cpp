#ifndef MUTANTSTACK_CPP
# define MUTANTSTACK_CPP
#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack & src ) : std::stack<T>(src.getContainer())
{
	elements = src.getContainer();
};

template<typename T>
MutantStack<T>::~MutantStack()
{
}



template<typename T>
void MutantStack<T>::pop()
{
	std::stack<T>::pop();
	elements.resize(std::stack<T>::size());
}

template<typename T>
void MutantStack<T>::push(T e)
{
	elements.push_back(e);
	std::stack<T>::push(e);
}

template<typename T>
std::vector<T> MutantStack<T>::getContainer()
{
	return (elements);
}

template<typename T>
MutantStack<T> &		MutantStack<T>::operator=( MutantStack const & rhs )
{
	elements = rhs.getContainer();
	while (!std::stack<T>::empty())
		std::stack<T>::pop();
	for (int i = 0; i < elements; i++)
		std::stack<T>::push(elements[i]);
	return *this;
}

template<typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (MutantStack<T>::iterator(&elements[0]));
}

template<typename T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (MutantStack::iterator(&elements[elements.size()]));
}

#endif