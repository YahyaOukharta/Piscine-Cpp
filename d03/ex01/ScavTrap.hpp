#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :

    public:
        ScavTrap(void);
        ScavTrap(ScavTrap const &trap);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap &operator = (ScavTrap &t);

        void attack(std::string target);
        void guardGate(void);
};

#endif