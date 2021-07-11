#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    setTrapStats(100,100,30);
    std::cout << "FragTrap <" << getName() << "> was contructed !" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    setTrapStats(100,100,30);
    std::cout << "FragTrap <" << getName() << "> was contructed !" << std::endl;
}

FragTrap::FragTrap(FragTrap const &trap) : ClapTrap(trap.getName())
{
    setTrapStats(100,100,30);
    std::cout << "FragTrap <" << getName() << "> was copied !" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "RIP FragTrap <" << getName() << ">" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout   << "FragTrap <" << getName() 
            << "> is requesting some high fives !!" << std::endl;
}

FragTrap &FragTrap::operator = (FragTrap &t)
{
    this->setTrapName(t.getName());
    this->setTrapStats(t.getHP(), t.getEP(), t.getAD());
    return (*this);
}
