#ifndef FRAGTRAP
#define FRAGTRAP

#include <string>
#include <iostream>
#include <time.h>

class FragTrap {
    private:
        unsigned int hit;
        const static unsigned int maxHit = 100;
        unsigned energie;
        const static unsigned int maxEnergie = 100;
        int lvl;     
        std::string name;
        unsigned int _meleedAttack;
        unsigned int _rangeAttack;
        unsigned int reductionDamage;
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &fragTrap);
        FragTrap &operator= (const FragTrap &fragTrap);
        ~FragTrap();

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamages(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const &target);
};

#endif