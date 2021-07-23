#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << "A Dog was born, woof" << std::endl;
}

Dog::Dog(Dog const &d) : Animal("Dog")
{
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->ideas[i] = d.brain->ideas[i];

    std::cout << "A Dog was deep copied, woof" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "RIP Dog ~~" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WOOOOF U・x・U" << std::endl;
}