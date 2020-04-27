#ifndef NINJATRAP
#define NINJATRAP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

class NinjaTrap : public virtual ClapTrap{
    protected:
        NinjaTrap(int i);
    public:
        NinjaTrap();
        NinjaTrap(std::string name);
        NinjaTrap(const NinjaTrap &NinjaTrap);
        NinjaTrap &operator= (const NinjaTrap &NinjaTrap);
        ~NinjaTrap();

        void ninjaShoebox(const NinjaTrap &target);
        void ninjaShoebox(const FragTrap &target);
        void ninjaShoebox(const ScavTrap &target);
};

#endif