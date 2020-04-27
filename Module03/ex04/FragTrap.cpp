#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
    this->maxHit = 100;
    this->maxEnergie = 100;
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;
    this->_meleedAttack = 30;
    this->_rangeAttack = 20;
    this->reductionDamage = 5;
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
    this->maxHit = 100;
    this->maxEnergie = 100;
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;
    this->name = name;
    this->_meleedAttack = 30;
    this->_rangeAttack = 20;
    this->reductionDamage = 5;
}

FragTrap::FragTrap(int i) : ClapTrap()
{
    i = 0;
    this->maxHit = 100;
    this->hit = this->maxHit;
    this->_rangeAttack = 20;
    this->reductionDamage = 5;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &fragTrap)
{
    ClapTrap::operator=(fragTrap);
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "I'll be back" << std::endl;
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