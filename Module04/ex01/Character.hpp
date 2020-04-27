#ifndef CHARACTER
#define CHARACTER

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

class Character {
    private:
        std::string name;
        int pa;
        AWeapon *weapon;

        Character();
    public:
        Character(std::string const &name);
        Character(const Character &character);
        Character &operator=(const Character &character);
        ~Character();

        std::string getName();
        int getPA();
        AWeapon *getWeapon();

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(Enemy *enemy);

};

#endif