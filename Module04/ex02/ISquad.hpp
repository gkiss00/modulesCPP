#ifndef ISQUAD
#define ISQUAD

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class ISquad {
    public:
        virtual ~ISquad() {}
        virtual int getCount() const = 0;
        virtual ISpaceMarine *getUnit(int) const = 0;
        virtual int push(ISpaceMarine *spaceMarine) = 0;
};

#endif