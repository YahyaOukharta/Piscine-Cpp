#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private :

    public:
        FragTrap(void);
        FragTrap(FragTrap const &trap);
        FragTrap(std::string name);
        ~FragTrap(void);

        FragTrap &operator = (FragTrap &t);
        void highFivesGuys(void);
};

#endif