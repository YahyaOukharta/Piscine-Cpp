#include "Brain.hpp"

Brain::Brain(void)
{
    this->add = (long long)this;
}

std::string Brain::identify(void) const
{
    std::stringstream stream;
    stream << "0x" << std::hex << this->add;
    return (stream.str());
}