#ifndef __ZOMBIE_EVENT_HPP__
# define __ZOMBIE_EVENT_HPP__
# include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string type;
        std::string randomString(int len);

    public:
        ZombieEvent(void);
        ZombieEvent(std::string type);
        void    setZombieType(std::string type);
        Zombie  *newZombie(std::string name);
        Zombie  *randomChump(void);

};
#endif