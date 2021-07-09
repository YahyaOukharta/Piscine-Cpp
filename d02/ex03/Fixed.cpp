#include "Fixed.hpp"

Fixed::Fixed(void) : val(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &n)
{
    //std::cout << "Copy constructor called" << std::endl;
    this->val = n.getRawBits();
}

Fixed::Fixed(const int n)
{
    //std::cout << "Int constructor called" << std::endl;
    val = n << n_fractional_bits;
}

Fixed::Fixed(const float n)
{
    //std::cout << "Float constructor called" << std::endl;

    float tmp = n * (1 << this->n_fractional_bits);

    this->setRawBits((int)std::roundf(tmp));
}

Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
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

// Assignation operator

void Fixed::operator = (const Fixed &n)
{
    //std::cout << "Assignation operator called" << std::endl;

    this->setRawBits(n.getRawBits());
}

// output stream operator

std::ostream &operator<<(std::ostream& os, const Fixed &n)
{
    os << n.toFloat();
    return (os);
}

//Comparison operators

bool    operator < (const Fixed &f1, const Fixed &f2)
{
    return (f1.toFloat() < f2.toFloat());
}

bool    operator > (const Fixed &f1, const Fixed &f2)
{
    return (f1.toFloat() > f2.toFloat());
}

bool    operator <= (const Fixed &f1, const Fixed &f2)
{
    return (f1.toFloat() <= f2.toFloat());
}

bool    operator >= (const Fixed &f1, const Fixed &f2)
{
    return (f1.toFloat() >= f2.toFloat());
}

bool    operator == (const Fixed &f1, const Fixed &f2)
{
    return (f1.toFloat() == f2.toFloat());
}

bool    operator != (const Fixed &f1, const Fixed &f2)
{
    return (f1.toFloat() != f2.toFloat());
}

// Arithmetic operators

Fixed    operator + (const Fixed &f1, const Fixed &f2)
{
    return (Fixed(f1.toFloat() + f2.toFloat()));
}
Fixed    operator - (const Fixed &f1, const Fixed &f2)
{
    return (Fixed(f1.toFloat() - f2.toFloat()));
}
Fixed    operator * (const Fixed &f1, const Fixed &f2)
{
    return (Fixed(f1.toFloat() * f2.toFloat()));
}
Fixed    operator / (const Fixed &f1, const Fixed &f2)
{
    return (Fixed (f1.toFloat() / f2.toFloat()));
}

// min,max

Fixed   &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

Fixed   const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

Fixed   &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

Fixed   const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

// Increment / decrement

    //postfix
Fixed   Fixed::operator ++ (int) 
{
    Fixed tmp = Fixed(this->toFloat());
    this->setRawBits(this->getRawBits() + 1);
    return (tmp);
}

Fixed   Fixed::operator -- (int) 
{
    Fixed tmp = Fixed(this->toFloat());
    this->setRawBits(this->getRawBits() - 1);
    return (tmp);
}
    //prefix
Fixed   Fixed::operator ++ () 
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed   Fixed::operator -- () 
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

// abs

Fixed   const Fixed::abs(Fixed const &f1)
{
    if (f1 < 0)
        return (f1 * -1);
    else
        return (f1);
}

Fixed   Fixed::abs(Fixed &f1)
{
    if (f1 < 0)
        return (f1 * -1);
    else
        return (f1);
}