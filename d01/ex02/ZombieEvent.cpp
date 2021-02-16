#include "ZombieEvent.hpp"
#include <random>
#include <ctime>

ZombieEvent::ZombieEvent(void)
{

}

ZombieEvent::ZombieEvent(std::string t)
{
 this->type = t;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
 return (new Zombie(name, this->type));
}

void ZombieEvent::setZombieType(std::string t)
{
 this->type = t;
}

Zombie *ZombieEvent::randomChump(void)
{
 std::string name = this->randomString(5);
 Zombie *z = new Zombie(name, this->type);
 z->announce();

 return (z);
}
static int c;
int randVal(int range)
{
    std::srand(std::time(nullptr) + (c++) * 50);
    return (std::rand() / ((RAND_MAX + 1u) / range));
}

std::string ZombieEvent::randomString(int len)
{
    std::string rand = "";
    for (int i = 0; i < len; i++)
    {
        rand += randVal('z'-'a') + 'a'; 
    }
    return rand;
}