#include "HumanB.hpp"

Weapon def = Weapon("hand");

HumanB::HumanB(void) : weapon(def)
{

}

HumanB::HumanB(std::string n) : weapon(def)
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
