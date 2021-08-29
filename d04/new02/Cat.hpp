#ifndef __CAT_HPP__
# define __CAT_HPP__
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal 
{
    private : 
        Brain *brain;
    public :

        Cat(Cat const &c);
        Cat(void);
        ~Cat(void);

        void makeSound() const;
        std::string const getType() const;

        Brain const *getBrain() const;

        Cat &operator=(Cat const &c);
};

#endif