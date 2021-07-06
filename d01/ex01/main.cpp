#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    int N = 4;

    Zombie * horde = zombieHorde(N, "HORDE ZOMBIE");

    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }

    delete[] (horde);

    return (0);
}