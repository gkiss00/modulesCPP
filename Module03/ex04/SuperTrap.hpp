#ifndef SUPERTRAP
#define SUPERTRAP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

class SuperTrap : public FragTrap, public NinjaTrap {
    public:
        SuperTrap();
        SuperTrap(std::string const &name);
        SuperTrap(const SuperTrap &superTrap);
        SuperTrap &operator= (const SuperTrap &superTrap);
        ~SuperTrap();

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
};

#endif