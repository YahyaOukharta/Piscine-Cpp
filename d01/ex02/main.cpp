#include "ZombieEvent.hpp"

int main(int argc, char **argv)
{
    Zombie *z = new Zombie("hmed", "A7-0.2");

    z->announce();

    delete z;

    // ZombieEvent

    ZombieEvent *Z = new ZombieEvent();

    Z->setZombieType("v1-1.4.6");

    z = Z->newZombie("abfr");
    z->announce();

    delete z;

    for (int i = 0; i < 20; i++)
    {
        z = Z->randomChump();
        delete z;
    }
}