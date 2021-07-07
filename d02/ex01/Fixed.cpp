#include "Fixed.hpp"

Fixed::Fixed(void) : val(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &n)
{
    std::cout << "Copy constructor called" << std::endl;
    this->val = n.getRawBits();
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    val = n << n_fractional_bits;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;

    float tmp = n * (1 << this->n_fractional_bits);

    this->setRawBits((int)std::roundf(tmp));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->val);
}

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->val = raw;
}


int Fixed::toInt(void) const
{
    return (this->getRawBits() >> this->n_fractional_bits);
}

float Fixed::toFloat(void) const
{
    return ((float)this->getRawBits() / (float)(1 << this->n_fractional_bits));
}

void Fixed::operator = (const Fixed &n)
{
    std::cout << "Assignation operator called" << std::endl;

    this->setRawBits(n.getRawBits());
}

std::ostream &operator<<(std::ostream& os, const Fixed &n)
{
    os << n.toFloat();
    return (os);
}
