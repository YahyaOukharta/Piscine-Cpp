#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "A WrongCat was born, meow" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "RIP WrongCat ~~" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong MEOOWW =^._.^=" << std::endl;
}