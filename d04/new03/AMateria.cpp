#include "AMateria.hpp"

AMateria::AMateria(std::string const & _type) : type(_type)
{

}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
    return type;
}