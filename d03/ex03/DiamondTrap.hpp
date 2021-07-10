#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :
        std::string name;
    public:
        DiamondTrap(void);
        DiamondTrap(DiamondTrap const &trap);
        DiamondTrap(std::string name);
        ~DiamondTrap(void);

        void whoAmI(void);
        void attack(std::string target);
        void highFivesGuys(void);
        void guardGate();
};

#endif