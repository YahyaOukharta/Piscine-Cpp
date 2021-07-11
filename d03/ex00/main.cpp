#include "ClapTrap.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    ClapTrap c("TEST");
    ClapTrap f("alpha");

    c.attack("Enemey1.02");
    c.takeDamage(6);
    c.beRepaired(2);
    c.beRepaired(2);
    c.beRepaired(2);
    c.takeDamage(120);
    c.attack("Enemey1.02");

    f = c;
    f.attack("enemy");
    return (0);
}