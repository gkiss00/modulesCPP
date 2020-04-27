#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20, 15, 3)
{
    
    std::cout << "Comment est votre blanquette ?" << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 50, 20, 15, 3, name)
{
    std::cout << "Comment est votre blanquette ?" << std::endl;
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