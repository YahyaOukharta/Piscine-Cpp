#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    name = "";
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
    std::cout << "ClapTrap <" << name << "> was contructed !" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
    std::cout << "ClapTrap <" << name << "> was contructed !" << std::endl;
}


ClapTrap::ClapTrap(ClapTrap const &trap)
{
    name = trap.name;
    hit_points = trap.hit_points;
    energy_points = trap.energy_points;
    attack_damage = trap.attack_damage;
    std::cout << "ClapTrap <" << name << "> was copied !" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "RIP ClapTrap <" << this->name << ">" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout   << "ClapTrap <" << name 
                << "> attacks <" << target 
                << ">, causing <" << attack_damage 
                << "> points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    hit_points -= amount;
    std::cout   << "ClapTrap <" << name 
                << "> was attacked, taking <" << amount
                << "> points of damage, leaving it with <" << hit_points
                << "> !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hit_points += amount;
    std::cout   << "ClapTrap <" << name 
                << "> was repaired, gaining <" << amount
                << "> points of damage, leaving it with <" << hit_points
                << "> !" << std::endl;
}