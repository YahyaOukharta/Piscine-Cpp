#include "Weapon.hpp"

Weapon::Weapon(void)
{
    this->setType("");
}

Weapon::Weapon(std::string t)
{
    this->setType(t);
}

void                Weapon::setType(std::string t)
{
    this->type = t;
}

const std::string   &Weapon::getType(void)
{
    return (this->type);
}
