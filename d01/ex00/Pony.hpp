#ifndef __PONY_HPP__
# define __PONY_HPP__
#include <iostream>
#include <string>

class Pony
{
    private:
        std::string name;
        int         size;
        int         age;

    public:
        Pony();
        Pony(std::string name, int age, int size);
        ~Pony();
        void    put_details();
};

#endif