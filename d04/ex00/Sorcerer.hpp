#ifndef __SORCERER_HPP__
# define __SORCERER_HPP__

class Sorcerer
{
    private :
        std::string name;
        std::string title;
    
    public :
        Sorcerer(void) = delete;
        Sorcerer(std::string name, std::string type);
        Sorcerer(Sorcerer &s);
        ~Sorcerer(void);

        Sorcerer &operator = (Sorcerer &s);
}
#endif