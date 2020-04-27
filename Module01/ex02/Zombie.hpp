#ifndef ZOMBIE
#define ZOMBIE

#include <string>
#include <iostream>

class Zombie {
    private:
        std::string name;
        std::string type;

    public:
        Zombie();
        Zombie(std::string name, std::string type);
        void    advert();
        void    announce();
};

#endif