#include "Cure.hpp"

int Cure::totalxp = 0;

Cure::Cure()
{
    this->_xp = 0;
    this->type = "cure";
}
Cure::Cure(const Cure &cure)
{
    this->_xp = cure._xp;
    this->type = cure.type;
}
Cure &Cure::operator=(const Cure &cure)
{
    this->_xp = cure._xp;
    this->type = cure.type;
    return (*this);
}
Cure::~Cure()
{

}

unsigned int Cure::getTotalXP()
{
    return (this->totalxp);
}

AMateria *Cure::clone() const
{
    Cure *nw = new Cure();
    nw->_xp = this->_xp;
    nw->type = this->type;
    return (nw);
}
void Cure::use(ICharacter &target)
{
    this->totalxp += 10;
    this->_xp += 10;
    std::cout << "Cure : \"* heals " << target.getName() << "'s wounds *" << std::endl;
}