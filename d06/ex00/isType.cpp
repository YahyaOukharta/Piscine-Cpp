#include "isType.hpp"

bool isInt(std::string str)
{
    for(size_t i = 0;i < str.length();i++)
    {
        if (!isdigit(str[i]))
            return (0);
    }
    return(1);
}
bool isFloat(std::string str)
{
    std::string doublePart = str.substr(0,str.size() - 1);
    if (isDouble(doublePart) && str[str.size() - 1] == 'f')
        return (1);
    return (0);
}
bool isDouble(std::string str)
{
    if(str == "nan" || str == "-inf" || str == "+inf")
    return (1);
    size_t i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (i < str.length())
    {
        if (!isdigit(str[i]))
        {
            if (str[i] == '.') 
            {
                i++;
                break;
            }
            else
                return (0);
        }
        i++;
    }
    if (isdigit(str[i]))
    {
        while (i < str.length())
        {
            if (!isdigit(str[i]))
                return (0);
            i++;
        }
    }
    else
        return(0);
    return (1);
}
bool isChar(std::string str)
{
    return (str.length() == 3 && str[0] == '\'' &&str[2] == '\'');
}
 