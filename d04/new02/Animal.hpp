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
        Animal(const Animal &a);
        Animal &operator=(Animal const &a);

    public:

        virtual ~Animal();

        virtual std::string const getType() const = 0;
        virtual void makeSound() const = 0;

};

#endif