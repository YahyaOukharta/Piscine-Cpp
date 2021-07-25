#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
# include "ICharacter.hpp"
# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string const &type;

    public:
        AMateria(std::string const & type);
        virtual ~AMateria();

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif