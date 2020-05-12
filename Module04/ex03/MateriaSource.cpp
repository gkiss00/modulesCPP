#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->nb = 0;
    this->max = 4;
    this->materia = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &ms)
{
    this->nb = ms.nb;
    this->max = 4;
    this->materia = new AMateria*[ms.nb];
    for (int i = 0; i < this->nb; ++i)
    {
        this->materia[i] = ms.materia[i]->clone();
    }
}
MateriaSource &MateriaSource::operator=(const MateriaSource &ms)
{
    
    for (int i = 0; i < this->nb; ++i)
    {
        delete(this->materia[i]);
    }
    delete(this->materia);
    this->nb = ms.nb;
    this->max = 4;
    this->materia = new AMateria*[ms.nb];
    for (int i = 0; i < this->nb; ++i)
    {
        this->materia[i] = ms.materia[i]->clone();
    }
    return (*this);
}
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->nb; ++i)
    {
        delete(this->materia[i]);
    }
    delete[](this->materia);
}
void MateriaSource::learnMateria(AMateria *m)
{
    if (this->nb < this->max)
    {
        AMateria **tmp = new AMateria*[this->nb];
        for (int i = 0; i < this->nb; ++i)
        {
            tmp[i] = this->materia[i];
        }
        delete[](this->materia);
        this->materia = new AMateria*[this->nb + 1];
        for (int i = 0; i < this->nb; ++i)
        {
            this->materia[i] = tmp[i];
        }
        this->materia[this->nb] = m;
        ++this->nb;
        delete[](tmp);
    }
}
AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < this->nb; ++i)
    {
        if (this->materia[i]->getType().compare(type) == 0 && type.compare("ice") == 0)
        {
            AMateria *ice = new Ice();
            return (ice);
        }
        if (this->materia[i]->getType().compare(type) == 0 && type.compare("cure") == 0)
        {
            AMateria *cure = new Cure();
            return (cure);
        }
    }
    return (NULL);
}