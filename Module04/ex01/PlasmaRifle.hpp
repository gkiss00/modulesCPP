#ifndef PLASMARIFLE
#define PLASMARIFLE

#include "AWeapon.hpp"
#include <string>
#include <iostream>

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &plasmaRifle);
        PlasmaRifle &operator=(const PlasmaRifle &plasmaRifle);
        ~PlasmaRifle();

        void attack() const;
};

#endif