#include "Point.hpp"
#include <iostream>

int main(void)
{
    Point a(0.15, 1156);
    Point b(11256, 12.2);

    std::cout << a.getX() << " "<< a.getY() << std::endl;
    a = b;
    std::cout << b.getX() << " "<< b.getY() << std::endl;
    std::cout << a.getX() << " "<< a.getY() << std::endl;

    return 0;
}