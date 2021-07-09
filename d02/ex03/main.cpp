#include "Point.hpp"
#include <iostream>

int main(void)
{
    Point a(0,0);
    Point b(0,10);
    Point c(10,0);
    Point d(8.1,0);


    bsp(a,b,c,d);
    return 0;
}