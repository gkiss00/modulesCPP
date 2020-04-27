#include "Character.hpp"

Character::Character()
{
    this->name = "no_name";
    this->max = 4;
    this->nb = 0;
    this->inventaire = NULL;
}
Character::Character(std::string name)
{
    this->name = name;
    this->max = 4;
    this->nb = 0;
    this->inventaire = NULL;
}
Character::Character(const Character &character)
{
    this->name = character.name;
    this->max = 4;
    this->nb = character.nb;
    this->inventaire = new AMateria*[this->nb];
    for (int i = 0; i < this->nb ; ++i)
    {
        this->inventaire[i] = character.inventaire[i]->clone();
    }
}
Character &Character::operator=(const Character &character)
{
    for (int i = 0; i < this->nb ; ++i)
    {
        delete(this->inventaire[i]);
    }
    delete[](this->inventaire);
    this->name = character.name;
    this->max = 4;
    this->nb = character.nb;
    this->inventaire = new AMateria*[this->nb];
    for (int i = 0; i < this->nb ; ++i)
    {
        this->inventaire[i] = character.inventaire[i]->clone();
    }
    return (*this);
}
Character::~Character()
{
    for (int i = 0; i < this->nb ; ++i)
    {
        delete(this->inventaire[i]);
    }
    delete[](this->inventaire);
}
std::string const &Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{
    
    if (m != NULL)
    {
        for (int i = 0; i < this->nb; ++i)
        {
            if(this->inventaire[i] == m)
                return;
        }
        if (this->nb < this->max)
        {
            AMateria **tmp = new AMateria*[this->nb];
            for (int i = 0; i < this->nb; ++i)
            {
                tmp[i] = this->inventaire[i];
            }
            delete[](this->inventaire);
            this->inventaire = new AMateria*[this->nb + 1];
            for (int i = 0; i < this->nb; ++i)
            {
                this->inventaire[i] = tmp[i];
            }
            delete[](tmp);
            this->inventaire[this->nb] = m;
            this->nb++;
        }
    }
}
void Character::unequip(int idx)
{
    if (this->nb > 0 && idx >= 0 && idx < this->nb)
    {
        AMateria **tmp = new AMateria*[this->nb - 1];
        int i = 0;
        int j = 0;
        while (i < this->nb)
        {
            if (i != idx)
            {
                tmp[j] = this->inventaire[i];
                ++j;
            }
            ++i;
        }
        delete[](this->inventaire);
        this->inventaire = new AMateria*[this->nb - 1];
        for (int i = 0; i < this->nb; ++i)
        {
            this->inventaire[i] = tmp[i];
        }
        delete[](tmp);
        this->nb--;
    }
}
void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < this->nb)
    {
        this->inventaire[idx]->use(target);
    }
}