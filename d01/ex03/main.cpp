#include "ZombieHorde.hpp"

int main(int argc, char **argv)
{
    ZombieHorde *horde = new ZombieHorde(10);
    delete horde;
    //system("leaks cpp");
    return (0);
}