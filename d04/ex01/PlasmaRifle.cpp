#include "PlasmaRifle.hpp"

std::string plasmarifle_str = "Plasma Rifle";

PlasmaRifle::PlasmaRifle() : AWeapon(plasmarifle_str, 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std:: endl;
}
