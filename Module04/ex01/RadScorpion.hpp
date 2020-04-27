#ifndef RADSCORPION
#define RADSCORPION

#include "Enemy.hpp"
#include <string>
#include <iostream>

class RadScorpion : public Enemy{
    public:
        RadScorpion();
        RadScorpion(const RadScorpion &radscorpion);
        RadScorpion &operator=(const RadScorpion &radscorpion);
        ~RadScorpion();
};

#endif