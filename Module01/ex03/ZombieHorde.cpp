#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
    this->number = 5;
}

ZombieHorde::ZombieHorde(int number)
{
    if (number <= 0)
        std::cout << "Not enough zombies to make an horde" << std::endl;
    else
        this->number = number;
    ZombieHorde::initiateHorde();
}

ZombieHorde::~ZombieHorde()
{
    std::cout << "The horde die" << std::endl;
    delete[] zombies;
}

void    ZombieHorde::initiateHorde()
{
    this->zombies = new Zombie[number];
}

void    ZombieHorde::announce(){
    int     i;

    i = 0;
    while (i < this->number)
    {
        this->zombies[i].announce();
        ++i;
    }
}