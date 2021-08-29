#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Birth of an WrongAnimal, it has no type for now" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type)
{
    std::cout << "Birth of an WrongAnimal of type '" << type << "'" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &c): type(c.type)
{
    std::cout << "A WrongAnimal was copied" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "RIP WrongAnimal (base class)" << (type == "" ? "" : " of type " + type) << std::endl;
}

std::string const WrongAnimal::getType() const
{
    return (type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "A base WrongAnimal has no sound, are you sure of what you are doing ?" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &c)
{
    this->type = c.type;
    return (*this);
}