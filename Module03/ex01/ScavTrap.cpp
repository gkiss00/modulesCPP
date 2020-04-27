#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;     
    this->name = "Irobot";
    this->_meleedAttack = 20;
    this->_rangeAttack = 15;
    this->reductionDamage = 3;
    std::cout << "Comment est votre blanquette ?" << std::endl;
}


ScavTrap::ScavTrap(std::string name)
{
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;     
    this->name = name;
    this->_meleedAttack = 30;
    this->_rangeAttack = 20;
    this->reductionDamage = 5;
    std::cout << "Comment est votre blanquette ?" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
    this->hit = ScavTrap.hit;
    this->energie = ScavTrap.energie;
    this->lvl = ScavTrap.lvl;     
    this->name = ScavTrap.name;
    this->_meleedAttack = ScavTrap._meleedAttack;
    this->_rangeAttack = ScavTrap._rangeAttack;
    this->reductionDamage = ScavTrap.reductionDamage;
    std::cout << "Comment est votre blanquette ?" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &ScavTrap)
{
    this->hit = ScavTrap.hit;
    this->energie = ScavTrap.energie;
    this->lvl = ScavTrap.lvl;     
    this->name = ScavTrap.name;
    this->_meleedAttack = ScavTrap._meleedAttack;
    this->_rangeAttack = ScavTrap._rangeAttack;
    this->reductionDamage = ScavTrap.reductionDamage;
    std::cout << "Comment est votre blanquette ?" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Avant de partir sale espion, fais-moi l'amour !" << std::endl;
    std::cout << "Non je ne crois pas non..." << std::endl;
    std::cout << "Pourquoi ?" << std::endl;
    std::cout << "Pas envie..." << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << this->name 
    << " attaque avec son arc " 
    << target 
     << " (J’aime me battre)"
    << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << this->name 
    << " attaque avec son charisme " 
    << target 
    << " (J’aime me battre)"
    << std::endl;
}

void ScavTrap::takeDamages(unsigned int amount)
{
    if (this->reductionDamage >= amount)
        amount = 0;
    else
        amount = amount - this->reductionDamage;
    if (amount >= this->hit)
    {
        std::cout << "Aurevoir " << this->name << std::endl;
        this->hit = 0;
    }
    else
    {
        this->hit = this->hit - amount;
        std::cout << "Restez derriere moi, j encaisse :: still  " << this->hit << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->hit + amount > this->maxHit)
        this->hit = this->maxHit;
    else
        this->hit = this->hit + amount;
    std::cout << "J'aime quand on m'enduit d'huile..." << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    clock_t seconds; 
   
    seconds = clock(); 
    srand((seconds));
    int i = rand() % 5;
    std::string tab[5];
    tab[0] = " ,veuillez-vous prendre un petit coup de polish.";
    tab[1] = " ,veuillez me faire des harengs pommes a l huile.";
    tab[2] = " ,jolie voiture ! Dommage qu'elle soit si sale ! Lavez la.";
    tab[3] = " ,jacques a dit a dit pas de charcuterie !";
    tab[4] = " ,trouvez qui pourrait bien en vouloir a Larmina";
    if (this->energie < 25)
        std::cout << "J'aime me beurrer la biscotte." << std::endl;
    else
    {
        this->energie -= 25; 
        std::cout << target << tab[i] << std::endl;
    }  
}