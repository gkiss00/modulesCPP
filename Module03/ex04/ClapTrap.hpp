#ifndef CLAPTRAP
#define CLAPTRAP

#include <string>
#include <iostream>

class ClapTrap {
    protected:
        unsigned int hit;
        unsigned int maxHit;
        unsigned energie;
        unsigned int maxEnergie;
        int lvl;     
        std::string name;
        unsigned int _meleedAttack;
        unsigned int _rangeAttack;
        unsigned int reductionDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &clapTrap);
        ClapTrap &operator= (const ClapTrap &clapTrap);
        ~ClapTrap();

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamages(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
};

#endif