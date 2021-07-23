#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "A Dog was born, woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "RIP Dog ~~" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WOOOOF U・x・U" << std::endl;
}