#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__
# include <string>  


class Weapon
{
    private:
        std::string         type;
    
    public:
        Weapon(void);
        Weapon(std::string type);

        void                setType(std::string t);
        const std::string   &getType(void);
};
#endif