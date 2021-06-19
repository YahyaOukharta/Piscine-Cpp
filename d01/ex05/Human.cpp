#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
}

std::string  Human::identify(void) const
{
   return this->brain.identify();
}

Brain Human::getBrain(void) const
{
    return (this->brain);
}