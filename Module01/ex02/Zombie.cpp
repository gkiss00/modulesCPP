#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "bob";
    this->type = "mormal";
    Zombie::advert();
}

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
    Zombie::advert();
}


void    Zombie::advert()
{
    std::cout << this->name << " " << this->type << " Je vais te graille." << std::endl;
}

void    Zombie::announce()
{
    std::cout << "I announce myself : " << this->name << " " << this->type << std::endl;
}