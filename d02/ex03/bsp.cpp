#include "Point.hpp"

Fixed tri_area(Point const a, Point const b, Point const c)
{
    Fixed tmp = ((b.getX() - a.getX()) * (c.getY() - a.getY())) 
        - ((c.getX() - a.getX()) * (b.getY() - a.getY()));
    return (Fixed::abs(tmp / 2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed tr_area, a1, a2, a3;
    tr_area = tri_area(a, b, c);
    a1 = tri_area(point, b, c);
    a2 = tri_area(a, point, c);
    a3 = tri_area(a, b, point);
    return (tr_area == a1 + a2 + a3 && a1 != Fixed(0) && a2 != Fixed(0) && a3 != Fixed(0));
}