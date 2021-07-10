#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap() , FragTrap()
{
    setTrapStats(FragTrap::getHP(), ScavTrap::getEP(), FragTrap::getAD());
    std::cout << "DiamondTrap <" << getName() << "> was contructed !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ScavTrap(_name) , FragTrap(_name)
{
    ClapTrap::setName(_name + "_clap_name");
    setTrapStats(FragTrap::getHP(), ScavTrap::getEP(), FragTrap::getAD());
    std::cout << "DiamondTrap <" << getName() << "> was contructed !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &trap) : ScavTrap(trap.getName()) , FragTrap(trap.getName())
{
    ClapTrap::setName(trap.getName() + "_clap_name");
    setTrapStats(FragTrap::getHP(), ScavTrap::getEP(), FragTrap::getAD());
    std::cout << "DiamondTrap <" << getName() << "> was copied !" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "RIP DiamondTrap <" << getName() << ">" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout   << "DiamondTrap <" << getName() 
            << ">  !!" << std::endl;
}