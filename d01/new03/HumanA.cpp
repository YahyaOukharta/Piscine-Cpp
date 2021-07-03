#include "HumanA.hpp"

HumanA::HumanA(Weapon &w) : weapon(w)
{
}

HumanA::HumanA(std::string n, Weapon &w): weapon(w)
{
    this->setName(n);
}

HumanA::~HumanA(void)
{
    
}

void    HumanA::attack(void)
{
    std::cout << this->getName() << " attacks with his " << this->weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon &w)
{
    this->weapon = w;
}

void    HumanA::setName(std::string n)
{
    this->name = n;
}

std::string HumanA::getName(void)
{
    return (this->name);
}