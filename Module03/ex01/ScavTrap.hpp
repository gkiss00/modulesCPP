#ifndef SCAVTRAP
#define SCAVTRAP

#include <string>
#include <iostream>
#include <time.h>

class ScavTrap {
    private:
        unsigned int hit;
        const static unsigned int maxHit = 100;
        unsigned energie;
        const static unsigned int maxEnergie = 50;
        int lvl;     
        std::string name;
        unsigned int _meleedAttack;
        unsigned int _rangeAttack;
        unsigned int reductionDamage;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavTrap);
        ScavTrap &operator= (const ScavTrap &scavTrap);
        ~ScavTrap();

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamages(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer(std::string const &target);
};

#endif