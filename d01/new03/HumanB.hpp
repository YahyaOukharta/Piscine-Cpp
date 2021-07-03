#ifndef __HUMAN_B__
# define __HUMAN_B__
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    private :
        Weapon      &weapon;
        std::string name;

    public :
        HumanB(void);
        HumanB(std::string name);
        ~HumanB(void);

        void        setName(std::string n);
        std::string getName(void);

        void        attack(void);
        void        setWeapon(Weapon &w);
};

#endif
