#include "Character.hpp"

Character::Character(std::string const &_name) : name(_name)
{
    weapon = NULL;
    ap = 40;
}

Character::~Character()
{

}

void Character::recoverAP()
{
    ap += 10;
    if (ap > 40 ) ap = 40;
}

void Character::equip(AWeapon *w)
{
    weapon = w;
}

void Character::attack(Enemy* e)
{
    if (!weapon || ap < weapon->getAPCost()) return ;

    std::cout << name << " attacks " << e->getType() << " with a " << weapon->getName() 
        << std::endl;
    weapon->attack();
    ap -= weapon->getAPCost();
    e->takeDamage(weapon->getDamage());
    if (e->getHP() <= 0)
        delete e;
}

std::string const & Character::getName() const
{
    return (name);
}
AWeapon *Character::getWeapon() const
{
    return (weapon);
}
int Character::getAP() const
{
    return (ap);
}

std::ostream &operator <<(std::ostream &os, Character &c)
{
    os << c.getName() << " has " << c.getAP() << " AP and " 
        << (c.getWeapon() ? "wields a " + c.getWeapon()->getName() : "is unarmed") << std::endl;
    return (os);
}
