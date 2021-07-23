#ifndef __CAT_HPP__
# define __CAT_HPP__
# include "Animal.hpp"

class Cat : public Animal 
{
    private : 

    public :

        Cat(void);
        ~Cat(void);

        void makeSound() const;
};

#endif