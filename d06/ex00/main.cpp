#include <iostream>
#include <string>
#include "strToTypes.hpp"
#include "isType.hpp"
int main(int ac, char **av)
{
    if (ac != 2) return 1;
    std::string value(av[1]);

    int     intRes;
    char    charRes;
    float   floatRes;
    double  doubleRes;

    try
    {
        intRes = std::stoi(value);
        charRes = static_cast<char>(intRes);
        putChar(charRes, 0);
    }
    catch(std::exception &e)
    {
        putChar(charRes, 1);
    }

    try
    {
        intRes = std::stoi(value);
        putInt(intRes, 0);
    }
    catch(std::exception &e)
    {
        putInt(intRes, 1);
    }
    
    try
    {
        floatRes = std::stof(value);
        putFloat(floatRes, 0, value);
    }
    catch(std::exception &e)
    {
        putFloat(floatRes, 1, value);
    }

    try
    {
        doubleRes = std::stod(value);
        putDouble(doubleRes, 0, value);
    }
    catch(std::exception &e)
    {
        putDouble(doubleRes, 1, value);
    }
    return (0);
}