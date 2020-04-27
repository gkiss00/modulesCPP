#include "Weapon.hpp"

Weapon::Weapon()
{
    this->type = "gun";
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}