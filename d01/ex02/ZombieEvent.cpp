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

unsigned int hash(unsigned long long state, int range)
{
    state %= 0xFFFFFFFF;
    state ^= 2747636419u;
    state *= 2654435769u;
    state ^= state >> 16;
    state *= 2654435769u;
    state ^= state >> 16;
    state *= 2654435769u;
    state %= 0xFFFFFFFF;

    return (((double)state / 4294967295.0) * (double)range);
}

static int c = SEED;

std::string ZombieEvent::randomString(int len)
{
    std::string rand = "";
    for (int i = 0; i < len; i++)
    {
        unsigned int val = hash(c, 'z'-'a');
        rand += val + 'a'; 
        c++;
    }
   
    return rand;
}