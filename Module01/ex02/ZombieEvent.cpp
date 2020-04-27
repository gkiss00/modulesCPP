#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent()
{
    this->setZombieType  = "drawned";
}

ZombieEvent::ZombieEvent(std::string type)
{
    this->setZombieType = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name, this->setZombieType);

    return (zombie);
}

void    ZombieEvent::randomChump()
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
    Zombie zombie(name, this->setZombieType);
    zombie.announce();
}