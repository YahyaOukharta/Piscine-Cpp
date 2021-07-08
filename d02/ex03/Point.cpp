#include "Point.hpp"

Point::Point(void) : x(Fixed(0)),y(Fixed(0))
{
    ptr = &x;
}

Point::Point(Point &p) : x(Fixed(p.getX())),y(Fixed(p.getY()))
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
    // ((Fixed)this->x).setRawBits(p.getX().getRawBits());
    // ((Fixed)this->y).setRawBits(p.getY().getRawBits());
    x->setRawBits( p.getX());
}

Fixed Point::getX(void) const
{
    return (this->x);
}
Fixed Point::getY(void) const
{
    return (this->y);
}