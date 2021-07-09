#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
        
        void guardGate(void);
};

#endif