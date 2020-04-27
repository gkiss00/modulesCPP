#ifndef HUMANB
#define HUMANB

#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        const Weapon *weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon &weapon);
};


#endif