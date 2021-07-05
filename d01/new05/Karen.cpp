#include "Karen.hpp"

Karen::Karen(void)
{
    this->loglevels[0] = Karen::debug;
    this->loglevels[1] = Karen::info;
    this->loglevels[2] = Karen::warning;
    this->loglevels[3] = Karen::error;
    this->levels[0] = "debug";
    this->levels[1] = "info";
    this->levels[2] = "warning";
    this->levels[3] = "error";
    
}
int index_of_level(std::string levels[4], std::string lvl)
{
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == lvl)
            return (i);
    }
    return (-1);
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
    int idx = index_of_level(this->levels, level);
    if (idx >= 0)
        loglevels[idx]();
    else
        std::cout << "INCORRECT LOG LEVEL '" << level << "'" << std::endl;
}
