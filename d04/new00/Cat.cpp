#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "A Cat was born, meow" << std::endl;
}
Cat::Cat(Cat const &c): Animal("Cat")
{
    this->type = c.type;
    std::cout << "A Cat was copied, meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "RIP Cat ~~" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEOOWW =^._.^=" << std::endl;
}

Cat &Cat::operator=(Cat const &c)
{
    this->type = c.type;
    return (*this);
}


