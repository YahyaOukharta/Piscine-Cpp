#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->setName(name);
    this->setType(type);
}

Zombie::~Zombie()
{
}

std::string Zombie::getName(void)
{
    return (this->name);
}

std::string Zombie::getType(void)
{
    return (this->type);
}

void        Zombie::setName(std::string n)
{
    this->name = n;
}

void        Zombie::setType(std::string t)
{
    this->type = t;
}

void        Zombie::announce(void)
{
    std::cout << "<" << this->name << " (" << (this->type == "" ? "unknown" : this->type) << ")> BraiiiiiiinnnzzzZ..." << std::endl;
}