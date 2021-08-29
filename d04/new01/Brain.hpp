#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__
# include <string>
# include <iostream>
class Brain
{
    public :
        std::string ideas[100];

        Brain();
        Brain(Brain const &b);
        ~Brain();

        Brain &operator=(Brain const &b);
};

#endif