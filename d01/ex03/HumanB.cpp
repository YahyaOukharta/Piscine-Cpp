#include "HumanB.hpp"

HumanB::HumanB(void)
{
    this->weapon = NULL;
}

HumanB::HumanB(std::string n)
{
    this->setName(n);
}

HumanB::~HumanB(void)
{
    
}

void    HumanB::attack(void)
{
    if(this->weapon)
        std::cout << this->getName() << " attacks with his " << this->weapon->getType() << std::endl;
    else
        std::cout << "Unable to attack, no weapon" << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->weapon = &w;
}

void    HumanB::setName(std::string n)
{
    this->name = n;
}

std::string HumanB::getName(void)
{
    return (this->name);
}
