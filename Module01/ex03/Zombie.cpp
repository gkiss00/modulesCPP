#include "Zombie.hpp"

Zombie::Zombie()
{
    std::string name;
    char        c;
    int         lenght;
    int         i;
    
    lenght = rand() % 10 + 2;
    name = "";
    i = 0;
    c = 'a';
    while (i < lenght)
    {
        name += c + (rand() % 26);
        ++i;
    }
    this->name = name;
    this->type = "drawned";
}

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}


void    Zombie::advert()
{
    std::cout << this->name << " " << this->type << " Je vais te graille." << std::endl;
}

void    Zombie::announce()
{
    std::cout << "I announce myself : " << this->name << " " << this->type << std::endl;
}