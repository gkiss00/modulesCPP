#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    
}

void HumanB::attack() const
{
    std::cout << this->name << " attack with " << ((Weapon*)this->weapon)->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}