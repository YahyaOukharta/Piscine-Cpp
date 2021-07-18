#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <string>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();

        std::string getType();
        virtual void makeSound();
};

#endif