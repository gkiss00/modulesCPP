#ifndef CURE
#define CURE

#include "AMateria.hpp"
#include <string>
#include <iostream>

class Cure : public AMateria {
    private:
        static int totalxp;
    public:
        Cure();
        Cure(const Cure &cure);
        Cure &operator=(const Cure &cure);
        ~Cure();

        unsigned int getTotalXP();

        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif