#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{

}
PowerFist::PowerFist(const PowerFist &powerfist) : AWeapon(powerfist)
{

}
PowerFist &PowerFist::operator=(const PowerFist &powerfist)
{
    this->name = powerfist.name;
    this->damage = powerfist.damage;
    this->ap = powerfist.ap;
    return (*this);
}
PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}