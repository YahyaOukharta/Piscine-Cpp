#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "Animal.hpp"

class Dog : public Animal 
{
    private : 

    public :

        Dog(void);
        ~Dog(void);

        void makeSound() const;
};

#endif