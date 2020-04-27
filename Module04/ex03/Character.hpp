#ifndef CHARACTER
#define CHARACTER

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter {
    private:
        std::string name;
        int max;
        int nb;
        AMateria **inventaire;

        Character();
    public:
        Character(std::string name);
        Character(const Character &character);
        Character &operator=(const Character &character);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif