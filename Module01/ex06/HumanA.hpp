#ifndef HUMANA
#define HUMANA

#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        const Weapon &weapon;
    public:
        HumanA(std::string name, const Weapon &weapon);
        void attack() const;
};


#endif