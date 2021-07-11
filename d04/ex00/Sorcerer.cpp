#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    
}

Sorcerer::Sorcerer(std::string _name, std::string _title)
{
    name = _name;
    title = _title;
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer &s)
{
    name = s.getName();
    title = s.getTitle();
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title 
        << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName(void)
{
    return (name);
}

std::string Sorcerer::getTitle(void)
{
    return (title);
}

std::ostream &operator << (std::ostream &os, Sorcerer &s)
{
    os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!";
    return (os);
}
