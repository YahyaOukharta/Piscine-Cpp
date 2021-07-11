#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    // ClapTrap c("TEST");
    // c.attack("Enemey1.02");
    // c.takeDamage(6);
    // c.beRepaired(2);
    // c.beRepaired(2);
    // c.beRepaired(2);
    // c.takeDamage(120);
    // c.attack("Enemey1.02");

    // ScavTrap s("SCAV");
    
    // s.attack("Targe");
    // s.attack("TARGEET");

    // s.guardGate();

    FragTrap f("Fraggie");
    FragTrap e("123456");

    f.highFivesGuys();
    f.displayStats();

    f = e;
    f.highFivesGuys();
    return (0);
}