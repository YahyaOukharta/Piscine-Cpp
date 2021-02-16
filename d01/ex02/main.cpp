#include "Zombie.hpp"

int main(int argc, char **argv)
{
    Zombie *z = new Zombie("hmed", "A7-0.2");

    z->announce();

    delete z;
}