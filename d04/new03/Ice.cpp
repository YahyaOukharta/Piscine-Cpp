#include "Ice.hpp"
std::string icestr = "ice";
Ice::Ice() : AMateria(icestr)
{

}

Ice::~Ice()
{
    
}
Ice::Ice(Ice const &c) : AMateria(c.type)
{
}

Ice &Ice::operator=(Ice const &c)
{
    (void)c;
    return (*this);
}
AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}