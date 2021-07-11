#ifndef __VICTIM_HPP__
# define __VICTIM_HPP__
#include <iostream>

class Victim
{
    private :
        std::string name;
        Victim(void);

    public :
        Victim(std::string name);
        Victim(Victim &s);
        ~Victim(void);

        Victim &operator = (Victim &s);

        std::string getName(void);
};

std::ostream &operator << (std::ostream &os, Victim &v);

#endif