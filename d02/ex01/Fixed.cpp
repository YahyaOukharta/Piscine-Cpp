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

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    val = n;
    val <<= n_fractional_bits;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    val = (int)roundf(n);
    val <<= n_fractional_bits;
    val += (n * 100) % 256;
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


int Fixed::toInt(void) const
{

}

float Fixed::toFloat(void) const
{

}


void Fixed::operator = (const Fixed &n)
{
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(n.getRawBits());
}

2^n_fractional_bits;

ostream &Fixed::operator << (ostream& os, const Fixed &n)
{
    os << (val >> n_fractional_bits) << "." << (val )
}
