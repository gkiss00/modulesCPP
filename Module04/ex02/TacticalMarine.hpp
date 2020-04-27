#ifndef TACTICALMARINE
#define TACTICALMARINE

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class TacticalMarine : public ISpaceMarine {
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine &marine);
        TacticalMarine &operator=(const TacticalMarine &marine);
        ~TacticalMarine();
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const ;
        void meleeAttack() const;
};

#endif