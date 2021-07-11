#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    setTrapStats(100,50,20);
    std::cout << "ScavTrap <" << getName() << "> was contructed !" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    setTrapStats(100,50,20);
    std::cout << "ScavTrap <" << getName() << "> was contructed !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &trap) : ClapTrap(trap.getName())
{
    setTrapStats(100,50,20);
    std::cout << "ScavTrap <" << getName() << "> was copied !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "RIP ScavTrap <" << getName() << ">" << std::endl;
}

void    ScavTrap::attack(std::string target)
{
    std::cout   << "ScavTrap <" << getName() 
                << "> attacks <" << target 
                << ">, causing <" << getAD()
                << "> points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void)
{
        std::cout   << "ScavTrap <" << getName() 
                << "> enters Gate Keeper Mode" << std::endl;
}

ScavTrap &ScavTrap::operator = (ScavTrap &t)
{
    this->setTrapName(t.getName());
    this->setTrapStats(t.getHP(), t.getEP(), t.getAD());
    return (*this);
}

//ssh-agent bash -c 'ssh-add ~/Desktop/id_rsa; git clone git@vogsphere-v2-bg.1337.ma:vogsphere/intra-uuid-08246f2a-3d05-429d-a4d8-ade1e49d32ab-3648286'
