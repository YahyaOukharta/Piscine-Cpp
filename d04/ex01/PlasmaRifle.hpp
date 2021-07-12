#ifndef __PLASMA_RIFLE_HPP__
# define __PLASMA_RIFLE_HPP__
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    protected:

    public :
        PlasmaRifle();
        ~PlasmaRifle();
        void attack() const;
};

# endif