#ifndef __WRONG_ANIMAL_HPP__
# define __WRONG_ANIMAL_HPP__
# include <string>
# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &c);
        
        WrongAnimal &operator=(WrongAnimal const &c);

        ~WrongAnimal();

        std::string const getType() const;
        void makeSound() const;
};

#endif