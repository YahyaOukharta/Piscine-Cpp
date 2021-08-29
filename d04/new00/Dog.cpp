#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "A Dog was born, woof" << std::endl;
}

Dog::Dog(Dog const &c): Animal("Dog")
{
    type = c.type;
    std::cout << "A Dog was copied, woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "RIP Dog ~~" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WOOOOF U・x・U" << std::endl;
}

Dog &Dog::operator=(Dog const &c)
{
    this->type = c.type;
    return (*this);
}