#ifndef __SORCERER_HPP__
# define __SORCERER_HPP__
# include <iostream>
# include "Victim.hpp"
class Sorcerer
{
    private :
        std::string name;
        std::string title;
        //Sorcerer(void);

    public :
        Sorcerer(std::string name, std::string type);
        Sorcerer(Sorcerer &s);
        ~Sorcerer(void);

        Sorcerer &operator = (Sorcerer &s);

        std::string getName(void);
        std::string getTitle(void);

        void polymorph(Victim const &v) const;
 };

std::ostream &operator << (std::ostream &os, Sorcerer &s);

#endif