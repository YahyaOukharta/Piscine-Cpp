#include "Cure.hpp"

std::string curestr = "cure";

Cure::Cure() : AMateria(curestr)
{

}

Cure::~Cure()
{
    
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}