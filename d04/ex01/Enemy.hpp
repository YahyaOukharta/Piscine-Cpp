#ifndef __ENEMY_HPP__
# define __ENEMY_HPP__
# include <string>

class Enemy 
{
    protected :
        int hit_points;
        std::string const &type;
    public :
        Enemy(int hp, std::string const &type);
        virtual ~Enemy();
        std::string const &getType() const;
        int getHP() const;

        virtual void takeDamage(int amount);
}; 

#endif