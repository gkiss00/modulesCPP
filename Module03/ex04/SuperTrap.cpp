#include "SuperTrap.hpp"

SuperTrap::SuperTrap() :  ClapTrap(), FragTrap(), NinjaTrap()
{
    std::cout << "Super is here" << std::endl;
    this->hit = this->FragTrap::hit;
    this->maxHit = this->FragTrap::maxHit;
    this->energie = this->NinjaTrap::energie;
    this->maxEnergie = this->NinjaTrap::maxEnergie;
    this->name = "default_name";
    this->_meleedAttack = this->NinjaTrap::_meleedAttack;
    this->_rangeAttack = this->FragTrap::_rangeAttack;
    this->reductionDamage = this->FragTrap::reductionDamage;
    
}

SuperTrap::SuperTrap(std::string const &name) : FragTrap(name)
{
    std::cout << name << " is here " << std::endl;
    this->hit = this->FragTrap::hit;
    this->maxHit = this->FragTrap::maxHit;
    this->energie = this->NinjaTrap::energie;
    this->maxEnergie = this->NinjaTrap::maxEnergie;
    this->_meleedAttack = this->NinjaTrap::_meleedAttack;
    this->_rangeAttack = this->FragTrap::_rangeAttack;
    this->reductionDamage = this->FragTrap::reductionDamage;
    std::cout << this->hit << " " << this->energie << " " << this->name << " " << this->_meleedAttack << " " << this->_rangeAttack << " " << this->reductionDamage << std::endl;
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