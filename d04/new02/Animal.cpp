#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Birth of an animal, it has no type for now" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
    std::cout << "Birth of an animal of type '" << type << "'" << std::endl;
}

Animal::Animal(const Animal &a) : type(a.type)
{
    std::cout << "Copy of an animal of type '" << type << "'" << std::endl;
}

Animal::~Animal()
{
    std::cout << "RIP Animal (base class)" << (type == "" ? "" : " of type " + type) << std::endl;
}

std::string const Animal::getType() const
{
    return (type);
}

void Animal::makeSound() const
{
    std::cout << "A base animal has no sound, are you sure of what you are doing ?" << std::endl;
}