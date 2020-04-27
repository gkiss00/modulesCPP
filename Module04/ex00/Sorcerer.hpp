#ifndef SORCERER
#define SORCERER

#include "Victim.hpp"
#include <string>
#include <iostream>
#include <fstream>

class Sorcerer {
    private:
        std::string name;
        std::string type;

        Sorcerer();
    public:
        Sorcerer(std::string name, std::string type);
        Sorcerer(const Sorcerer &sorcerer);
        Sorcerer &operator=(const Sorcerer &sorcerer);
        ~Sorcerer();

        std::string getName();
        std::string getType();

        void introduce();
        void polymorph(const Victim &victim) const;
};

#endif