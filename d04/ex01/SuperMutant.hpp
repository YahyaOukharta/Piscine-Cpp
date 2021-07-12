#ifndef __SUPERMUTANT_HPP__
# define __SUPERMUTANT_HPP__
# include "Enemy.hpp"
# include <string>
# include <iostream>

class SuperMutant : public Enemy
{
    protected :

    public :
        SuperMutant();
        virtual ~SuperMutant();

        void takeDamage(int amount);
}; 

#endif