#include "Squad.hpp"

Squad::Squad()
{
    this->count = 0;
    this->squad = NULL;
}
Squad::Squad(const Squad &squad)
{
    this->count = squad.count;
    this->squad = new ISpaceMarine*[squad.count];
    for (int i = 0; i < squad.count; ++i)
    {
        this->squad[i] = squad.getUnit(i)->clone();
    }
}
Squad &Squad::operator=(const Squad &squad)
{
    
    for (int i = 0; i < this->count; ++i)
    {
        delete(this->squad[i]);
    }
    delete(this->squad);
    this->count = squad.count;
    this->squad = new ISpaceMarine*[squad.count];
    for (int i = 0; i < squad.count; ++i)
    {
        this->squad[i] = squad.getUnit(i)->clone();
    }
    return (*this);
}

Squad::~Squad()
{
    for (int i = 0; i < this->count; ++i)
    {
        delete(this->squad[i]);
    }
    delete(this->squad);
}

int Squad::getCount() const
{
    return (this->count);
}

ISpaceMarine *Squad::getUnit(int i) const
{
    if (i >= 0 && i < this->count)
        return (this->squad[i]);
    return (NULL);
}

int Squad::push(ISpaceMarine *spaceMarine)
{
    int stop = 0;
    if (spaceMarine == NULL)
        return (this->count);
    for (int i = 0; i < this->count; ++i)
    {
        if (this->squad[i] == spaceMarine)
            stop = 1;
    }
    if (stop == 0)
    {
        ISpaceMarine **tmp = new ISpaceMarine*[this->count + 1];
        for (int k = 0; k < this->count; ++k)
        {
            tmp[k] = this->squad[k];
        }
        delete[](squad);
        tmp[this->count] = spaceMarine;
        this->count += 1;
        this->squad = tmp;
    }
    else
        std::cout << "ISpaceMarine already in the squad" << std::endl;
    
    return (this->count);
}