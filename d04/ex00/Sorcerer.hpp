#ifndef __SORCERER_HPP__
# define __SORCERER_HPP__
# include <iostream>

class Sorcerer
{
    private :
        std::string name;
        std::string title;
        Sorcerer(void);

    public :
        Sorcerer(std::string name, std::string type);
        Sorcerer(Sorcerer &s);
        ~Sorcerer(void);

        Sorcerer &operator = (Sorcerer &s);

        std::string getName(void);
        std::string getTitle(void);
 };

std::ostream &operator << (std::ostream &os, Sorcerer &s);

#endif