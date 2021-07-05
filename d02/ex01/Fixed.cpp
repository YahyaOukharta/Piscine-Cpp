#include "Fixed.hpp"

Fixed::Fixed(void) : val(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &n)
{
    std::cout << "Copy constructor called" << std::endl;
    this->val = n.getRawBits();
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->val);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->val = raw;
}

void Fixed::operator = (const Fixed &n)
{
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(n.getRawBits());
}
