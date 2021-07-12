#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    // PlasmaRifle *r = new PlasmaRifle();

    // r->attack();
    // std::cout << r->getAPCost() << " " << r->getDamage() << " " << r->getName() << std::endl;
    
    // PowerFist *p = new PowerFist();

    // p->attack();
    // std::cout << p->getAPCost() << " " << p->getDamage() << " " << p->getName() << std::endl;

    // SuperMutant *s = new SuperMutant();
    
    // std::cout << s->getHP() << " " << s->getType() << std::endl;
    // s->takeDamage(13);
    // std::cout << s->getHP() << " " << s->getType() << std::endl;

    // delete s;
    
    // RadScorpion *sc = new RadScorpion();
    
    // std::cout << sc->getHP() << " " << sc->getType() << std::endl;
    // sc->takeDamage(10);
    // std::cout << sc->getHP() << " " << sc->getType() << std::endl;

    // delete sc;

    
        Character* me = new Character("me");
        std::cout << *me;
        Enemy* b = new RadScorpion();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();
        me->equip(pr);
        std::cout << *me;
        me->equip(pf);
        me->attack(b);
        std::cout << *me;
        me->equip(pr);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
    return (0);
}