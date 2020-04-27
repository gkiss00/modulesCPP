#include "Ice.hpp"

int Ice::totalxp = 0;

Ice::Ice()
{
    this->_xp = 0;
    this->type = "ice";
}
Ice::Ice(const Ice &ice)
{
    this->_xp = ice._xp;
    this->type = ice.type;
}
Ice &Ice::operator=(const Ice &ice)
{
    this->_xp = ice._xp;
    this->type = ice.type;
    return (*this);
}
Ice::~Ice()
{

}

unsigned int Ice::getTotalXP()
{
    return (this->totalxp);
}

AMateria *Ice::clone() const
{
    Ice *nw = new Ice();
    nw->_xp = this->_xp;
    nw->type = this->type;
    return (nw);
}
void Ice::use(ICharacter &target)
{
    this->totalxp += 10;
    this->_xp += 10;
    std::cout << "Ice : \"* shoots an ice bolt at " << target.getName() << "*\"" << std::endl;
}