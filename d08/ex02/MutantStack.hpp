#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <vector>


template<typename T>
class MutantStack:  public std::stack<T>
{
	private:
		std::vector<T> elements;
	public:

		MutantStack();
		MutantStack( MutantStack<T> const & src );
		~MutantStack();

		MutantStack<T> &		operator=( MutantStack const & rhs );

		std::vector<T> getContainer();

		void push(T e);
		void pop();

		class iterator
		{
			private :
				T *ptr;
			public :
				iterator() : ptr(0) {};
				iterator(T *p) : ptr(p) {};
				iterator &		operator=( iterator const & rhs )
				{
					ptr = rhs.getPtr();
				}

				T * getPtr(void) const { return ptr; };
				void setPtr(T * const p) { ptr = p; };

				T&		operator*(){ return (*ptr); }
				iterator  operator ++ ()   //prefix
				{
					iterator tmp = *this;
					ptr++;
					return tmp;
				}
				iterator   operator -- ()    //prefix
				{
					iterator tmp = *this;
					ptr--;
					return tmp;
				}
				iterator   operator ++ (int) //postfix
				{
					ptr++;
					return *this;
				}
				iterator   operator -- (int) //postfix
				{
					ptr--;
					return *this;
				}

				bool   operator == (iterator it) //postfix
				{
					return (it.getPtr() == this->getPtr());
				}
				bool   operator != (iterator it) //postfix
				{
					return (it.getPtr() != this->getPtr());
				}
		};

		MutantStack<T>::iterator begin();
		MutantStack<T>::iterator end();
};

#include "MutantStack.cpp"

#endif /* ***************************************************** MUTANTSTACK_H */