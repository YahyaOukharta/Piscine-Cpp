#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal 
{
    private : 
        Brain *brain;

    public :

        Dog(Dog const &c);
        Dog(void);
        ~Dog(void);

        void makeSound() const;
        Brain const *getBrain() const;
        std::string const getType() const;

        Dog &operator=(Dog const &b);

};

#endif