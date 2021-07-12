#ifndef __PEON_HPP__
# define __PEON_HPP__
# include "Victim.hpp"

class Peon : public Victim 
{
    private:
        
    public :
        Peon(std::string name);
        Peon(Peon &s);
        ~Peon(void);

        void getPolymorphed(void) const;
};

#endif