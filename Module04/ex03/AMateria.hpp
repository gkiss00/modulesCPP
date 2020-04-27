#ifndef AMATERIA
#define AMATERIA

#include "ICharacter.hpp"
#include "Character.hpp"
#include <string>
#include <iostream>

class ICharacter;

class AMateria {       
    protected:
        std::string type;
        unsigned int _xp;
        AMateria();
     
    public:
        AMateria(const std::string &type);
        AMateria(const AMateria &materia);
        AMateria &operator=(const AMateria &materia);
        virtual ~AMateria();

        const std::string &getType() const;
        unsigned int getXP() const;

        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
        virtual unsigned int getTotalXP() = 0;
};

#endif