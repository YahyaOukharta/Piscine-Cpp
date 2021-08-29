#ifndef __ICE_HPP__
# define __ICE_HPP__
# include "ICharacter.hpp"
#include <string>

class Ice : public AMateria
{
    protected:

    public:
        Ice();
        ~Ice();
        Ice(Ice const &c);
        Ice &operator=(Ice const &c);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif