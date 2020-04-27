#ifndef SQUAD
#define SQUAD

#include "ISquad.hpp"
#include <string>
#include <iostream>

class Squad : public ISquad{
    private:
        int count;
        ISpaceMarine **squad;
    public:
        Squad();
        Squad(const Squad &squad);
        Squad &operator=(const Squad &squad);
        ~Squad();
        int getCount() const;
        ISpaceMarine *getUnit(int) const;
        int push(ISpaceMarine *spaceMarine);
};

#endif