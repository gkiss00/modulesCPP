#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

void HumanA::attack() const
{
    std::cout << this->name << " attack with " << ((Weapon)this->weapon).getType() << std::endl;
}