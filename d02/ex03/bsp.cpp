#include "Point.hpp"

Fixed tri_area(Point const a, Point const b, Point const c)
{
    //Fixed tmp = (a.getX() * b.getY()) + (b.getX() * c.getY()) + (c.getX() + a.getY()) 
  //  - ((a.getY() * b.getX()) + (b.getY() * c.getX()) + (c.getY() + a.getX()));

    Fixed tmp = ((b.getX() - a.getX()) * (c.getY() - a.getY())) 
        - ((c.getX() - a.getX()) * (b.getY() - a.getY()));
    return (Fixed::abs(tmp / 2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed tr_area , a1, a2, a3;
    tr_area = tri_area(a, b, c);
    a1 = tri_area(point, b, c);
    a2 = tri_area(a, point, c);
    a3 = tri_area(a, b, point);
    std::cout << "area : " << tr_area << ",areas : " << a1<< " " << a2 << " "<< a3 << ", sum of areas : "<< a1 + a2 + a3 << std::endl;
    return (tr_area == a1 + a2 + a3);
}