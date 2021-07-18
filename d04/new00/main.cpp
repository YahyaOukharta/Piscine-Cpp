#include "Animal.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    Animal a;
    Animal b("hhhh");

    a.makeSound();
    return (0);
    
}