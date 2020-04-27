#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{    
    std::cout << "Torute Ninja tortue ninjaaaaa" << std::endl;
    this->maxHit = 60;
    this->maxEnergie = 120;
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;
    this->_meleedAttack = 60;
    this->_rangeAttack = 5;
    this->reductionDamage = 0;
}


NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Torute Ninja tortue ninjaaaaa" << std::endl;
    this->maxHit = 60;
    this->maxEnergie = 120;
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;
    this->_meleedAttack = 60;
    this->_rangeAttack = 5;
    this->reductionDamage = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &NinjaTrap) : ClapTrap(NinjaTrap)
{
    std::cout << "Torute Ninja tortue ninjaaaaa" << std::endl;
}

NinjaTrap &NinjaTrap::operator= (const NinjaTrap &NinjaTrap)
{
    ClapTrap::operator=(NinjaTrap);
    std::cout << "Torute Ninja tortue ninjaaaaa" << std::endl;
    return (*this);
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "I'll be back" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
    if (this->energie < 25)
        std::cout << "La pizza va me recquinquer" << std::endl;
    else
    {
        this->energie -= 25; 
        std::cout << "Cowabunga ! " << target.getName() << std::endl;
    }  
}

void NinjaTrap::ninjaShoebox(const FragTrap &target)
{
    if (this->energie < 25)
        std::cout << "La pizza va me recquinquer" << std::endl;
    else
    {
        this->energie -= 25; 
        std::cout << "Je suis ici pour empecher ton futur " << target.getName() << std::endl;
    } 
}

void NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
    if (this->energie < 25)
        std::cout << "La pizza va me recquinquer" << std::endl;
    else
    {
        this->energie -= 25; 
        std::cout << "Je suis sans pitié, sans scrupule, sans compassion, sans indulgence, pas sans intelligence. " << target.getName() << std::endl;
    } 
}