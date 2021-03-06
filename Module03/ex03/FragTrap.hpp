#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <time.h>

class FragTrap : public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &fragTrap);
        FragTrap &operator= (const FragTrap &fragTrap);
        ~FragTrap();

        void vaulthunter_dot_exe(std::string const &target);
};

#endif