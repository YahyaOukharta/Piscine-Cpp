#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap() , FragTrap()
{
    // setTrapStats(FragTrap::getHP(), ScavTrap::getEP(), FragTrap::getAD());
    setTrapStats(FragTrap::getHP(), 50, FragTrap::getAD());
    std::cout << "DiamondTrap <" << getName() << "> was contructed !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ScavTrap(_name) , FragTrap(_name)
{
    ClapTrap::setName(_name + "_clap_name");
    this->name = _name;
    //setTrapStats(FragTrap::getHP(), ScavTrap::getEP(), FragTrap::getAD());
    setTrapStats(FragTrap::getHP(), 50, FragTrap::getAD());
    std::cout << "DiamondTrap <" << this->name << "> was contructed !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &trap) : ScavTrap(trap.getName()) , FragTrap(trap.getName())
{
    ClapTrap::setName(trap.getName() + "_clap_name");
    this->name = trap.getName();
    // setTrapStats(FragTrap::getHP(), ScavTrap::getEP(), FragTrap::getAD());
    setTrapStats(FragTrap::getHP(), 50, FragTrap::getAD());
    std::cout << "DiamondTrap <" << this->name << "> was copied !" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "RIP DiamondTrap <" << this->name << ">" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout  << "DiamondTrap <" << this->name << "> <" << getName() <<">" << std::endl;
}

void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::highFivesGuys()
{
    FragTrap::highFivesGuys();
}

void DiamondTrap::guardGate()
{
    ScavTrap::guardGate();
}