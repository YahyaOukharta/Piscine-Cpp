#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->setName(name);
}

Zombie::~Zombie()
{
    std::cout << "RIP Zombie '" << this->name << "'" << std::endl;
}

std::string Zombie::getName(void)
{
    return (this->name);
}

void        Zombie::setName(std::string n)
{
    this->name = n;
}

void        Zombie::announce(void)
{
    std::cout << "<" << this->name << ">  BraiiiiiiinnnzzzZ..." << std::endl;
}