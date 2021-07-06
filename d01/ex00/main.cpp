#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    randomChump("Stack Zombie");

    std::cout << std::endl;

    Zombie *z = newZombie("Heap Zombie");
    z->announce();
    delete z;

    return (0);
