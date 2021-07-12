#include "RadScorpion.hpp"
std::string radscorpion_str = "Rad Scorpion";

RadScorpion::RadScorpion() : Enemy(80, radscorpion_str)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int amount)
{
    Enemy::takeDamage(amount);
}