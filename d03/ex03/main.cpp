#include "DiamondTrap.hpp"
int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    DiamondTrap d("diamond_test");

    d.whoAmI();
    d.displayStats();
    d.attack("enemy123");
    d.highFivesGuys();
    d.guardGate();
    return (0);
}

//clap (10,10,0) 
//scav (100,50,20)
//frag (100,100,30)
//diamond (100,50, 30)
