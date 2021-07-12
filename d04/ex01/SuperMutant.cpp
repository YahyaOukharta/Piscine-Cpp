#include "SuperMutant.hpp"
std::string supermutant_str = "Super Mutant";

SuperMutant::SuperMutant() : Enemy(170, supermutant_str)
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
    amount -= 3;
    if (amount < 0) amount = 0;
    Enemy::takeDamage(amount);
}