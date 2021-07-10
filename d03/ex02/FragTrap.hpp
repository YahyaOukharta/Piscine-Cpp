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
        
        void highFivesGuys(void);
};

#endif