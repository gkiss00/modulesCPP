#include "AMateria.hpp"

AMateria::AMateria()
{
    this->_xp = 0;
    this->type = "no_type";
}
AMateria::AMateria(const std::string &type)
{
    this->_xp = 0;
    this->type = type;
}
AMateria::AMateria(const AMateria &materia)
{
    this->_xp = materia._xp;
    this->type = materia.type;
}
AMateria &AMateria::operator=(const AMateria &materia)
{
    this->_xp = materia._xp;
    this->type = materia.type;
    return (*this);
}
AMateria::~AMateria()
{

}

const std::string &AMateria::getType() const
{
    return (this->type);
}
unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
    std::cout << target.getName() << std::endl;
}