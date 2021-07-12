#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & _name, int _apcost, int _ad) : name(_name)
{
    apcost = _apcost;
    ad = _ad;
}

AWeapon::~AWeapon()
{

}

std::string const &AWeapon::getName() const
{
    return (name);
}

int AWeapon::getAPCost() const 
{
    return (apcost);
}

int AWeapon::getDamage() const 
{
    return (ad);
}