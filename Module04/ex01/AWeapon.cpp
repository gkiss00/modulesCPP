#include "AWeapon.hpp"

AWeapon::AWeapon()
{
    this->name = "no_name";
    this->damage = 0;
    this->ap = 0;
}

AWeapon::AWeapon(std::string const &name, int damage, int ap)
{
    this->name = name;
    this->damage = damage;
    this->ap = ap;
}

AWeapon::AWeapon(const AWeapon &aweapon)
{
    this->name = aweapon.name;
    this->damage = aweapon.damage;
    this->ap = aweapon.ap;
}
AWeapon &AWeapon::operator=(const AWeapon &aweapon)
{
    this->name = aweapon.name;
    this->damage = aweapon.damage;
    this->ap = aweapon.ap;
    return (*this);
}
AWeapon::~AWeapon()
{

}

std::string AWeapon::getName()
{
    return (this->name);
}

int AWeapon::getDamage() const
{
    return (this->damage);
}

int AWeapon::getAPCost() const
{
    return (this->ap);
}