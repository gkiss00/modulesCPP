#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <time.h>

class ScavTrap : public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavTrap);
        ScavTrap &operator= (const ScavTrap &scavTrap);
        ~ScavTrap();

        void challengeNewcomer(std::string const &target);
};

#endif