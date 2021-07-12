#ifndef __POWERFIST_HPP__
# define __POWERFIST_HPP__
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    protected:

    public :
        PowerFist();
        ~PowerFist();
        void attack() const;
};

# endif