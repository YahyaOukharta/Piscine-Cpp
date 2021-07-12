#include "PlasmaRifle.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    PlasmaRifle *r = new PlasmaRifle();

    r->attack();
    std::cout << r->getAPCost() << " " << r->getDamage() << " " << r->getName() << std::endl;
    return (0);
}