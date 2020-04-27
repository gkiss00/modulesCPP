#ifndef ZOMBIEHORDE
#define ZOMBIEHORDE

#include "Zombie.hpp"

class ZombieHorde {
    private:
        int number;
        Zombie *zombies;

        void    initiateHorde();

    public:
        ZombieHorde();
        ZombieHorde(int number);
        ~ZombieHorde();

        void announce();
 
};

#endif