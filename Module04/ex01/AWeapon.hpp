#ifndef AWEAPON
#define AWEAPON

#include <string>
#include <iostream>

class AWeapon {
    protected:
        std::string name;
        int damage;
        int ap;

    private:
        AWeapon();

    public:
        AWeapon(std::string const &name, int damage, int ap);
        AWeapon(const AWeapon &aweapon);
        AWeapon &operator=(const AWeapon &aweapon);
        virtual ~AWeapon();

        std::string getName();
        int getDamage() const;
        int getAPCost() const;
        virtual void attack() const = 0;
};

#endif