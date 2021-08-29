#ifndef __CURE_HPP__
# define __CURE_HPP__
# include "AMateria.hpp"

class Cure : public AMateria
{
    protected:

    public:
        Cure();
        ~Cure();
        Cure(Cure const &c);
        Cure &operator=(Cure const &c);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif