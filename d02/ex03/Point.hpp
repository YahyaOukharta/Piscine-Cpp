#ifndef __POINT_HPP__
# define __POINT_HPP__
# include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;

    public:

        Point(void);
        Point(Point const &p);
        Point(float const x, float const y);
        ~Point(void);

        void operator = (const Point &p) ;

        Fixed getX(void) const;
        Fixed getY(void) const;
 
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif