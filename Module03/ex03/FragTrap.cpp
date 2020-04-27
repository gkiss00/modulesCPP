#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30, 20, 5)
{
    
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 30, 20, 5, name)
{
    
    std::cout << "Je veux tes vetements tes bottes, et ta moto" << std::endl;
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