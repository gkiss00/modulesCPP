#include "SuperTrap.hpp"

SuperTrap::SuperTrap() :  ClapTrap(), FragTrap(1), NinjaTrap(1)
{
    std::cout << "Super is here" << std::endl;
    
}

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name), FragTrap(1), NinjaTrap(1)
{
    std::cout << name << " is here " << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap)
{
    this->hit = superTrap.hit;
    this->maxHit = superTrap.maxHit;
    this->energie = superTrap.energie;
    this->maxEnergie = superTrap.maxEnergie;
    this->lvl = superTrap.lvl;
    this->name = superTrap.name;
    this->_meleedAttack = superTrap._meleedAttack;
    this->_rangeAttack = superTrap._rangeAttack;
    this->reductionDamage = superTrap.reductionDamage;
}

SuperTrap &SuperTrap::operator= (const SuperTrap &superTrap)
{
    ClapTrap::operator=(superTrap);
    return (*this);
}

SuperTrap::~SuperTrap()
{
    std::cout << "La planet vivra." << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
}