#include "strToTypes.hpp"

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