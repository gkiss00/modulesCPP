#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;     
    this->name = "Irobot";
    this->_meleedAttack = 30;
    this->_rangeAttack = 20;
    this->reductionDamage = 5;
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
}


FragTrap::FragTrap(std::string name)
{
    this->hit = 100;
    this->energie = 100;
    this->lvl = 1;     
    this->name = name;
    this->_meleedAttack = 30;
    this->_rangeAttack = 20;
    this->reductionDamage = 5;
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    this->hit = fragTrap.hit;
    this->energie = fragTrap.energie;
    this->lvl = fragTrap.lvl;     
    this->name = fragTrap.name;
    this->_meleedAttack = fragTrap._meleedAttack;
    this->_rangeAttack = fragTrap._rangeAttack;
    this->reductionDamage = fragTrap.reductionDamage;
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &fragTrap)
{
    this->hit = fragTrap.hit;
    this->energie = fragTrap.energie;
    this->lvl = fragTrap.lvl;     
    this->name = fragTrap.name;
    this->_meleedAttack = fragTrap._meleedAttack;
    this->_rangeAttack = fragTrap._rangeAttack;
    this->reductionDamage = fragTrap.reductionDamage;
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "I'll be back" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << this->name 
    << " attacks " 
    << target 
    << " from far far away, reducing his life from " 
    << this->_rangeAttack 
    << " HP." 
    << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << this->name 
    << " attacks " 
    << target 
    << " with his punch, reducing his life from " 
    << this->_meleedAttack 
    << " HP." 
    << std::endl;
}

void FragTrap::takeDamages(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->hit + amount > this->maxHit)
        this->hit = this->maxHit;
    else
        this->hit = this->hit + amount;
    std::cout << this->name << " prend du grog" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    clock_t seconds; 
   
    seconds = clock(); 
    srand((seconds));
    int i = rand() % 5;
    std::string tab[5];
    tab[0] = " lance des babanes sur ";
    tab[1] = " enfonce un crayon dans l'oreille de ";
    tab[2] = " fusie du regard ";
    tab[3] = " foudrois du regard ";
    tab[4] = " inflige le tchitchi a ";
    if (this->energie < 25)
        std::cout << "Je dois recharger mes batteries" << std::endl;
    else
    {
        this->energie -= 25; 
        std::cout << this->name << tab[i] << target << std::endl;
    }  
}