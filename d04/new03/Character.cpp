#include "Character.hpp"

Character::Character(std::string const &_name) : name(_name) 
{
    init_inv();
}

Character::~Character()
{
    
}


void    Character::shift_inv(int idx)
{

}

void    Character::init_inv()
{

}


std::string const & Character::getName() const
{

}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{

}