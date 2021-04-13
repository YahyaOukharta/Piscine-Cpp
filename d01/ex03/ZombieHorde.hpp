#ifndef __ZOMBIE_EVENT_HPP__
# define __ZOMBIE_EVENT_HPP__
# include "Zombie.hpp"

class ZombieHorde
{
    private:
        int         n;
        std::string type;
        Zombie      **horde;
        Zombie *randomChump(void);
        std::string randomString(int len);
    public:
        ZombieHorde(void);
        ZombieHorde(int n);
        ~ZombieHorde(void);
        void    announce(void);

};
#endif