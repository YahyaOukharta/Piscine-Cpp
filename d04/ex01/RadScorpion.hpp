#ifndef __RADSCORPION_HPP__
# define __RADSCORPION_HPP__
# include "Enemy.hpp"
# include <string>
# include <iostream>

class RadScorpion : public Enemy
{
    protected :

    public :
        RadScorpion();
        virtual ~RadScorpion();

        void takeDamage(int amount);
}; 

#endif