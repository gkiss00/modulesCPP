#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Comment est votre blanquette ?" << std::endl;
    this->maxHit = 100;
    this->maxEnergie = 50;
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;
    this->_meleedAttack = 20;
    this->_rangeAttack = 15;
    this->reductionDamage = 3;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Comment est votre blanquette ?" << std::endl;
    this->maxHit = 100;
    this->maxEnergie = 50;
    this->hit = this->maxHit;
    this->energie = this->maxEnergie;
    this->lvl = 1;
    this->_meleedAttack = 20;
    this->_rangeAttack = 15;
    this->reductionDamage = 3;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
    
    std::cout << "Comment est votre blanquette ?" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &scavTrap)
{
    ClapTrap::operator=(scavTrap);
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