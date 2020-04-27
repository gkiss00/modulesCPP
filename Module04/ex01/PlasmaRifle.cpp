#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{

}
PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle) : AWeapon(plasmaRifle)
{

}
PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle)
{
    this->name = plasmaRifle.name;
    this->damage = plasmaRifle.damage;
    this->ap = plasmaRifle.ap;
    return (*this);
}
PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack()  const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}