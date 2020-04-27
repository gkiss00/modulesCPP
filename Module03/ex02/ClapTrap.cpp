#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->maxHit = 0;
    this->maxEnergie = 0;
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;     
    this->name = "Irobot";
    this->_meleedAttack = 0;
    this->_rangeAttack = 0;
    this->reductionDamage = 0;
    std::cout << "Parent constructor called" << std::endl;
}

ClapTrap::ClapTrap(unsigned int mh, unsigned int me, unsigned int ma, unsigned int ra, unsigned int rd)
{
    this->maxHit = mh;
    this->maxEnergie = me;
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;     
    this->name = "Irobot";
    this->_meleedAttack = ma;
    this->_rangeAttack = ra;
    this->reductionDamage = rd;
    std::cout << "Parent constructor called" << std::endl;
}


ClapTrap::ClapTrap(unsigned int mh, unsigned int me, unsigned int ma, unsigned int ra, unsigned int rd, std::string name)
{
    this->maxHit = mh;
    this->maxEnergie = me;
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;     
    this->name = name;
    this->_meleedAttack = ma;
    this->_rangeAttack = ra;
    this->reductionDamage = rd;
    std::cout << "Parent constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    this->maxHit = clapTrap.maxHit;
    this->maxEnergie = clapTrap.maxEnergie;
    this->hit = clapTrap.hit;
    this->energie = clapTrap.energie;
    this->lvl = clapTrap.lvl;     
    this->name = clapTrap.name;
    this->_meleedAttack = clapTrap._meleedAttack;
    this->_rangeAttack = clapTrap._rangeAttack;
    this->reductionDamage = clapTrap.reductionDamage;
    std::cout << "Parent constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &clapTrap)
{
    this->maxHit = clapTrap.maxHit;
    this->maxEnergie = clapTrap.maxEnergie;
    this->hit = clapTrap.hit;
    this->energie = clapTrap.energie;
    this->lvl = clapTrap.lvl;     
    this->name = clapTrap.name;
    this->_meleedAttack = clapTrap._meleedAttack;
    this->_rangeAttack = clapTrap._rangeAttack;
    this->reductionDamage = clapTrap.reductionDamage;
    std::cout << "Parent constructor called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Parent destructor called" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << this->name 
    << " attacks " 
    << target 
    << " from far far away, reducing his life from " 
    << this->_rangeAttack 
    << " HP." 
    << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << this->name 
    << " attacks " 
    << target 
    << " with his punch, reducing his life from " 
    << this->_meleedAttack 
    << " HP." 
    << std::endl;
}

void ClapTrap::takeDamages(unsigned int amount)
{
    if (this->reductionDamage >= amount)
        amount = 0;
    else
        amount = amount - this->reductionDamage;
    if (amount >= this->hit)
    {
        std::cout << "Je me meurs" << std::endl;
        this->hit = 0;
    }
    else
    {
        this->hit = this->hit - amount;
        std::cout << "Tu frappes comme une femme :: still " << this->hit << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit + amount > this->maxHit)
        this->hit = this->maxHit;
    else
        this->hit = this->hit + amount;
    std::cout << this->name << " prend du grog" << std::endl;
}