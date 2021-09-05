#include <iostream>
#include <string>
#include "strToTypes.hpp"
#include "isType.hpp"
int main(int ac, char **av)
{

    if (ac != 2) return 1;
    std::string value(av[1]);

    std::cout << "is int : " << isInt(value) << std::endl;
    std::cout << "is float : " << isFloat(value) << std::endl;
    std::cout << "is double : " << isDouble(value) << std::endl;
    std::cout << "is char : " << isChar(value) << std::endl;

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
        putFloat(floatRes, 0);
    }
    catch(std::exception &e)
    {
        putFloat(floatRes, 1);
    }
        try
    {
        doubleRes = std::stod(value);
        putDouble(doubleRes, 0);
    }
    catch(std::exception &e)
    {
        putDouble(doubleRes, 1);
    }


    return (0);
}