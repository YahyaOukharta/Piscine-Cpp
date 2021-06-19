#ifndef __HUMAN_HPP__
# define __HUMAN_HPP__
# include "Brain.hpp"

class Human
{
    private:
        const Brain brain;

    public:
        Human(void);
        ~Human(void);
        std::string identify() const;
        Brain getBrain(void) const;

};

#endif
