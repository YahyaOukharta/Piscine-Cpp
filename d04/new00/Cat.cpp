#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "A Cat was born, meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "RIP Cat ~~" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEOOWW =^._.^=" << std::endl;
}