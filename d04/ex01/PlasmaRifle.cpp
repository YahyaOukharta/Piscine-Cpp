#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack(void) const 
{
    std::cout << "* piouuu piouuu piouuu *" << std:: endl;
}