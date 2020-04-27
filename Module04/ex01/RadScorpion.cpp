#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}
RadScorpion::RadScorpion(const RadScorpion &radscorpion) : Enemy(radscorpion)
{

}
RadScorpion &RadScorpion::operator=(const RadScorpion &radscorpion)
{
    this->hp = radscorpion.hp;
    this->type = radscorpion.type;
    return (*this);
}
RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}