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