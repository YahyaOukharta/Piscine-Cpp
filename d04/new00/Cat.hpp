#ifndef __CAT_HPP__
# define __CAT_HPP__
# include "Animal.hpp"

class Cat : public Animal 
{
    private : 

    public :

        Cat(void);
        Cat(Cat const &c);
        ~Cat(void);
        
        Cat &operator=(Cat const &c);

        void makeSound() const;
};

#endif