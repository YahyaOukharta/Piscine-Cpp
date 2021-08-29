#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed " << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructed " << std::endl;
}

Brain::Brain(Brain const &b)
{
    for(int i = 0; i < 100; i++)
        ideas[i] = b.ideas[i];
}

Brain &Brain::operator=(Brain const &b)
{
    for(int i = 0; i < 100; i++)
        ideas[i] = b.ideas[i];
    return (*this);
}
