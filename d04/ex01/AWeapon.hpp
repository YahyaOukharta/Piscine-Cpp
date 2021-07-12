#ifndef __AWEAPON_HPP__
# define __AWEAPON_HPP__
# include <string>
# include <iostream>

class AWeapon
{
    protected :

        int apcost;
        int ad;
        std::string const &name;

    public :

        AWeapon(std::string const & name, int apcost, int damage);
        virtual ~AWeapon();
        std::string const &getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};

#endif