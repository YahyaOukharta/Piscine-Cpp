#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <string>
# include <iostream>
# include "Brain.hpp"
class Animal
{
    protected:
        std::string type;
        Animal();
        Animal(std::string type);

    public:

        //Animal(const Animal &a);

        virtual ~Animal();

        std::string const getType() const;
        virtual void makeSound() const;
};

#endif