#ifndef ICE
#define ICE

#include "AMateria.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria {
    private:
        static int totalxp;
    public:
        Ice();
        Ice(const Ice &ice);
        Ice &operator=(const Ice &ice);
        ~Ice();

        unsigned int getTotalXP();

        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif