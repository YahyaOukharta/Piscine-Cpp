#include "Victim.hpp"


Victim::Victim(std::string _name)
{
    name = _name;
    std::cout << "Some random victim called " << name << " just appeared" << std::endl;
}

Victim::Victim(Victim &v)
{
    name = v.getName();
    std::cout << "Some random victim called " << name << " just appeared" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName(void) const
{
    return (name);
}

std::ostream &operator << (std::ostream &os, Victim &v)
{
    os << "I'm " << v.getName() << " and I like otters!" << std::endl;
    return (os);
}

void Victim::getPolymorphed(void) const
{
    std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}
