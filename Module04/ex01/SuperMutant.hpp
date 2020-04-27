#ifndef SUPERMUTANT
#define SUPERMUTANT

#include "Enemy.hpp"
#include <string>
#include <iostream>

class SuperMutant : public Enemy{
    public:
        SuperMutant();
        SuperMutant(const SuperMutant &supermutant);
        SuperMutant &operator=(const SuperMutant &supermutant);
        ~SuperMutant();
        void takeDamage(int damage);
};

#endif