#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"
class Character 
{
    private:
        AWeapon *weapon;
        std::string const &name;
        int ap;

    public:
        Character(std::string const & name);
        ~Character();

        
        void recoverAP(void);
        void equip(AWeapon* w);
        void attack(Enemy* w);

        std::string const & getName() const;
        AWeapon *getWeapon() const;
        int getAP() const;
};

std::ostream &operator <<(std::ostream &os, Character &c);

#endif 