#include "Cure.hpp"

std::string curestr = "cure";

Cure::Cure() : AMateria(curestr)
{

}

Cure::~Cure()
{
    
}
Cure::Cure(Cure const &c) : AMateria(c.type)
{
}

Cure &Cure::operator=(Cure const &c)
{
    (void)c;
    return (*this);
}
AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}