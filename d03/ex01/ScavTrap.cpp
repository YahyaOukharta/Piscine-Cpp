#include "ScavTrap.hpp"

ScavTrap:ScavTrap(void)
{
    name = "";
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap <" << name << "> was contructed !" << std::endl;
}

ScavTrap:ScavTrap(std::string _name)
{
    name = _name;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap <" << name << "> was contructed !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &trap)
{
    name = trap.name;
    hit_points = trap.hit_points;
    energy_points = trap.energy_points;
    attack_damage = trap.attack_damage;
    std::cout << "ScavTrap <" << name << "> was copied !" << std::endl;
}

ScavTrap::guardGate(void)
{

}