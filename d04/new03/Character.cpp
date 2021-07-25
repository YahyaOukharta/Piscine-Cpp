#include "Character.hpp"

Character::Character(std::string const &_name) : name(_name) 
{
    init_inv();
}

Character::Character(const Character &c) : name(c.name)
{
    init_inv();
    int i = 0;
    AMateria **inv = c.get_inv();
    while (inv[i])
    {
        inventory[i] = inv[i]->clone();
        i++;
    }
}

Character::~Character()
{
    
}

void    Character::shift_inv(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    int i = idx + 1;
    while (i < 4)
    {
        inventory[i - 1] = inventory[i];
        i++;
    }
    inventory[3] = 0;
}

void    Character::init_inv()
{
    inventory[0] = 0;
    inventory[1] = 0;
    inventory[2] = 0;
    inventory[3] = 0;
}

std::string const & Character::getName() const
{
    return ((std::string &)name);
}

void Character::equip(AMateria* m)
{
    if (!m) return;
    int i = 0;
    while (i < 4 && inventory[i] != 0)
        i++;
    if (i < 4)
    {    inventory[i] = m;
        std::cout << "equiped " << inventory[i]->getType() << " in slot " << i << std::endl;
    }
}

void Character::unequip(int idx)
{
    shift_inv(idx);
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !inventory[idx])
        return;
    std::cout << "target : " << (std::string)(target.getName() )<< " item at index " << idx<< std::endl;
    inventory[idx]->use(target);
}

AMateria **Character::get_inv() const
{
    return ((AMateria **)inventory);
}

Character &Character::operator = (const Character & c)
{
    init_inv();
    int i = 0;
    AMateria **inv = c.get_inv();
    while (inv[i])
    {
        inventory[i] = inv[i]->clone();
        i++;
    }
    return *this;
}
