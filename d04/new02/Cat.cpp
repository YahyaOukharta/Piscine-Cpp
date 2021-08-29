#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "A Cat was born, meow" << std::endl;
}

Cat::Cat(Cat const &c) : Animal("Cat")
{
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->ideas[i] = c.brain->ideas[i];
    std::cout << "A Cat was deep copied, meow" << std::endl;
}


Cat::~Cat()
{
    delete brain;
    std::cout << "RIP Cat ~~" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEOOWW =^._.^=" << std::endl;
}

Brain const *Cat::getBrain() const
{
    return brain;
}
Cat &Cat::operator=(Cat const &a)
{   
    type = a.type;
    if(brain)
        delete brain;
    brain = new Brain(*(a.brain));
    return (*this);
}

std::string const Cat::getType() const
{
    return (type);
}