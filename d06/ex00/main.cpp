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


    intRes = std::stoi(value);
    charRes = static_cast<char>(intRes);
    floatRes = std::stof(value);
    doubleRes = static_cast<double>(intRes);
    std::cout << intRes << std::endl;
    std::cout << charRes << std::endl;
    std::cout << floatRes << std::endl;
    std::cout << doubleRes << std::endl;

    return (0);

}