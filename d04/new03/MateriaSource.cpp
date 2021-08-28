#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    init_mem();
}

MateriaSource::~MateriaSource()
{
    free_mem();
}

void MateriaSource::init_mem()
{
    for(int i = 0; i < 4; i++)
        memory[i] = 0;
}
void MateriaSource::free_mem()
{
    for(int i = 0; i < 4; i++)
        if (memory[i]) delete memory[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    while (i < 4 && memory[i])
        i++;
    if (i < 4)
        memory[i] = m->clone();
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (memory[i] && memory[i]->getType() == type)
            return memory[i]->clone();
    }
    return (0);
}