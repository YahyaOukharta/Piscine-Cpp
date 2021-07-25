#ifndef __MATERIA_SOURCE_HPP__
# define __MATERIA_SOURCE_HPP__
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *memory[4];
        
        void init_mem();
        void free_mem();
        
    public :
        MateriaSource();
        ~MateriaSource();

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const & type);
};

#endif