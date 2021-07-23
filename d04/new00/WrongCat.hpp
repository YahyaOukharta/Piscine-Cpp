#ifndef __WRONG_CAT_HPP__
# define __WRONG_CAT_HPP__
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
    private : 

    public :

        WrongCat(void);
        ~WrongCat(void);

        void makeSound() const;
};

#endif