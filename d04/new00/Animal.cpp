#include "Animal.hpp"
#include <iostream>
Animal::Animal()
{
    std::cout << "Birth of an animal, it has no type for now" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
    std::cout << "Birth of an animal of type '" << type << "'" << std::endl;
}

Animal::~Animal()
{
    std::cout << "RIP Animal (base class)" << (type == "" ? "" : " of type " + type) << std::endl;
}

std::string Animal::getType()
{
    return (type);
}

void Animal::makeSound()
{
    std::cout << "A base animal has no sound, are you sure of what you are doing ?" << std::endl;
}