#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__
#include <string>
#include <iostream>

class ClapTrap
{
    private :
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;

    public:
        ClapTrap(void);
        ClapTrap(ClapTrap const &trap);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap &operator = (ClapTrap &t);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setTrapStats(int hp, int ep, int ad);
        void setTrapName(std::string name);

        std::string getName(void) const;
        int getHP(void) const;
        int getEP(void) const;
        int getAD(void) const;

        void    displayStats(void);
};



#endif