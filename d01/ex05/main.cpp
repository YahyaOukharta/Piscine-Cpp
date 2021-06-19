#include "Human.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Human bob;

    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
    
}