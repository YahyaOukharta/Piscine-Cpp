#include "HumanB.hpp"

HumanB::HumanB(void) : weapon(Weapon())
{

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
    std::cout << this->getName() << " attacks with his " << this->weapon.getType() << std::endl;

}

void    HumanB::setWeapon(Weapon &w)
{
    this->weapon = w;
}

void    HumanB::setName(std::string n)
{
    this->name = n;
}

std::string HumanB::getName(void)
{
    return (this->name);
}