#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>
#include <iostream>

class MateriaSource : public IMateriaSource {
    private:
        int max;
        int nb;
        AMateria **materia;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &ms);
        MateriaSource &operator=(const MateriaSource &ms);
        ~MateriaSource();
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);
};

#endif