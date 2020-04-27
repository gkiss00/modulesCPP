#ifndef HUMAN
#define HUMAN

#include "Brain.hpp"
#include <string>

class Human
{
    private:
        const Brain brain;

    public:
        Human();
        ~Human();
        std::string identifier() const;
        const Brain &getBrain();
};

#endif