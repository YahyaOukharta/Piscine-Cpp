#include "Sorcerer.hpp"
#include "Victim.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    Sorcerer s("Sorcius", "Mage");
    std::cout << s << std::endl;

    Victim v("Victor");

    std::cout << v << std::endl;
    
    return (0);
}