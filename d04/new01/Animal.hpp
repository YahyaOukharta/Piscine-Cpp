#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <string>
# include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();

        std::string const getType() const;
        virtual void makeSound() const;
};

#endif