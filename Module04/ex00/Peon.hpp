#ifndef PEON
#define PEON

#include "Victim.hpp"
#include <string>
#include <iostream>

class Peon : public Victim{
    private:
        Peon();
    public:
        Peon(std::string name);
        Peon(const Peon &peon);
        Peon &operator=(const Peon &peon);
        virtual ~Peon();

        void getPolymorphed() const;
};

#endif