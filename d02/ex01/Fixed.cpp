#include "Fixed.hpp"

int power (int n, int to)
{
    if (to == 0)
        return (1);
    return (n * pow(n, to - 1));
}

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
    val = n;
    val <<= n_fractional_bits;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    int real = (int)std::roundf(n);
    int floating = int(n * 1000) % 1000;
    if (floating >= power(2,this->n_fractional_bits))
        floating /= 10;
    std::cout << floating << std::endl;
    this->setRawBits(real);
    this->val <<= this->n_fractional_bits;
    this->val += floating;
    // val <<= n_fractional_bits;
    // val += (n * 100) % 256;
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
    float res = this->getRawBits() >> this->n_fractional_bits;
    int fract = this->getRawBits() % power(2, this->n_fractional_bits);

    float tmp = (float)fract;  // 0.423  0.42

    tmp /= 100;

    return (res + tmp);
}

void Fixed::operator = (const Fixed &n)
{
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(n.getRawBits());
}

std::ostream &operator<<(std::ostream& os, const Fixed &n)
{
    //os << (val >> n_fractional_bits) << "." << (val )
    os << n.toFloat();
    return (os);
}
