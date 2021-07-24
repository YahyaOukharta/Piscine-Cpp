#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private :
        std::string const & name;
        AMateria *inventory[4];

        void    shift_inv(int idx);
        void    init_inv();
    public:
        Character(std::string const &name);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif