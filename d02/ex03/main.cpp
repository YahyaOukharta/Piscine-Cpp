#include "Point.hpp"
#include <iostream>

int main(void)
{
    // Inside
    Point a(0,0);
    Point b(0,10.5);
    Point c(10.5,0);
    Point d(2,2);

    bool inside = bsp(a,b,c,d);
    std::cout << inside << std::endl;

    // on the edge
    a = Point(0,0);
    b = Point(0,10);
    c = Point(10,0);
    d = Point(5,0);

    inside = bsp(a,b,c,d);
    std::cout << inside << std::endl;

    // outside
    a = Point(0,0);
    b = Point(0,10);
    c = Point(10,0);
    d = Point(8,6);

    inside = bsp(a,b,c,d);
    std::cout << inside << std::endl;
    return 0;
}