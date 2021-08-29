#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "Animal.hpp"

class Dog : public Animal 
{
    private : 

    public :

        Dog(void);
        Dog(Dog const &c);

        ~Dog(void);

        Dog &operator=(Dog const &c);

        void makeSound() const;
};

#endif