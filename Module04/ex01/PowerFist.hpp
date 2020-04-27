#ifndef POWERFIST
#define POWERFIST

#include "AWeapon.hpp"
#include <string>
#include <iostream>

class PowerFist : public AWeapon {
    public:
        PowerFist();
        PowerFist(const PowerFist &powerfist);
        PowerFist &operator=(const PowerFist &powerfist);
        ~PowerFist();

        void attack() const;
};

#endif