#include "Point.hpp"

Point::Point(void) : x(Fixed(0)),y(Fixed(0))
{

}

Point::Point(Point const &p) : x(Fixed(p.getX())),y(Fixed(p.getY()))
{

}

Point::Point(float const _x, float const _y) : x(Fixed(_x)), y(Fixed(_y))
{

}

Point::~Point(void)
{

}

void Point::operator = (const Point &p)
{
    Fixed &_x = const_cast<Fixed &>(x);
    Fixed &_y = const_cast<Fixed &>(y);
    _x.setRawBits( p.getX().getRawBits());
    _y.setRawBits( p.getY().getRawBits());
}

Fixed Point::getX(void) const
{
    return (this->x);
}
Fixed Point::getY(void) const
{
    return (this->y);
}