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
        AMateria(std::string const & type);
        AMateria(AMateria const & m);
        AMateria &operator=(AMateria const &m);

    public:
        virtual ~AMateria();

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif