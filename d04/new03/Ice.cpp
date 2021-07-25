#include "Ice.hpp"
std::string icestr = "ice";
Ice::Ice() : AMateria(icestr)
{

}

Ice::~Ice()
{
    
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}