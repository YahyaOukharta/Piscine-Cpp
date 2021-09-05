#include "strToTypes.hpp"
#include <math.h>
int strToInt(std::string const &str)
{
    size_t n;
    return (std::stoi(str, &n));
}

char strToChar(std::string const &str)
{
    return ((char)str[1]);
}

float strToFloat(std::string const &str)
{
    size_t n;
    return (std::stof(str, &n));
}

float strToDouble(std::string const &str)
{
    size_t n;
    return (std::stod(str, &n));
}

void putChar(char c, bool impossible)
{
    std::cout <<"char: ";
    if(impossible)
        std::cout << "Impossible";
    else
    {
        if(isprint(c))
            std::cout << "'" << c << "'";
        else
            std::cout << "Non displayable";
    }
    std::cout << std::endl;
}

void putInt(int n, bool impossible)
{
    std::cout <<"int: ";
    if(impossible)
        std::cout << "Impossible";
    else
        std::cout << n ;
    std::cout << std::endl;
}
float roundd(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 1000 + .5);
    return (float)value / 100;
}
void putFloat(float n, bool impossible)
{
    std::cout <<"float: ";
    if(impossible)
        std::cout << "Impossible";
    else
    {
        std::cout << n ;
        // std::cout << "<"<<roundd(n - (int)n)<< ">" << std::endl;
        if(roundd(n - (int)n) < 0.001 )
            std::cout << ".0";
        std::cout << "f" ;
    }
    std::cout << std::endl;
}

void putDouble(double n, bool impossible)
{
    std::cout <<"double: ";
    if(impossible)
        std::cout << "Impossible";
    else
    {
        std::cout << n ;
        // std::cout << "<"<<roundd(n - (int)n)<< ">" << std::endl;
        if(roundd(n - (int)n) < 0.001 )
            std::cout << ".0";
    }
    std::cout << std::endl;
}