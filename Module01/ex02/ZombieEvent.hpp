#ifndef ZOMBIEEVENT
#define ZOMBIEEVENT

#include "Zombie.hpp"
#include <string>
#include <iostream>

class ZombieEvent {
    private:
        std::string setZombieType;

    public:
        ZombieEvent();
        ZombieEvent(std::string type);
        Zombie *newZombie (std::string name);
        void    randomChump();
};

#endif