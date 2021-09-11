#include "MutantStack.hpp"

int main()
{
    MutantStack<int> s;
    s.push(123456);
    
    MutantStack<int>::iterator it = s.begin();
    std::cout << *it << std::endl;
    return (0);
}