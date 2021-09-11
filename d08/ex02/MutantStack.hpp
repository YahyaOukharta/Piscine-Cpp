#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <vector>


template<typename T>
class MutantStack :  public std::stack<T>
{
	private:
		std::vector<T> elements;
	public:

		MutantStack(){ };
		MutantStack( MutantStack const & src ){(void)src;};
		~MutantStack(){};

		MutantStack &		operator=( MutantStack const & rhs ){(void)rhs;return *this;};

		void push(T e)
		{
			elements.push_back(e);
			std::stack<T>::push(e);
		}

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
					return (*this);
				}

				T * getPtr(void) const { return ptr; };
				void setPtr(T * const p) { ptr = p; };

				T&		operator*()
				{
					return (*ptr);
				}

		};
		MutantStack::iterator begin()
		{
			return (MutantStack::iterator(&elements[0]));
		}
};



#endif /* ***************************************************** MUTANTSTACK_H */