#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
        std::string type;

    public:
        Zombie();
        Zombie(std::string name, std::string type);
        ~Zombie();

        std::string getType(void);
        std::string getName(void);

        void        setType(std::string type);
        void        setName(std::string name);
        void        announce(void);
};

#endif 