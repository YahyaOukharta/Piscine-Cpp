#include "PowerFist.hpp"

std::string powerfist_str = "Power Fist";

PowerFist::PowerFist() : AWeapon(powerfist_str, 8, 50)
{

}

PowerFist::~PowerFist()
{

}

void PowerFist::attack(void) const 
{
    std::cout << "* pschhh... SBAM! *" << std:: endl;
}
