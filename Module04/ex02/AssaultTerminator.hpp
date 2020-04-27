#ifndef ASSAULTTERMINATOR
#define ASSAULTTERMINATOR

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class AssaultTerminator : public ISpaceMarine{
    public:
        AssaultTerminator();
        AssaultTerminator(const AssaultTerminator &terminator);
        AssaultTerminator &operator=(const AssaultTerminator &terminator);
        ~AssaultTerminator();
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const ;
        void meleeAttack() const;
};

#endif