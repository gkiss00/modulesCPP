#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

#include <string>
#include <iostream>


std::ostream &operator<<(std::ostream &os, Sorcerer &sorcerer)
{
    os << "I am " << sorcerer.getName() << ", " << sorcerer.getType() << ", and I like ponies!";
    return (os);
}

std::ostream &operator<<(std::ostream &os, Victim &victim)
{
    os << "I am " << victim.getName() << ", and I like otters!";
    return (os);
}

int     main()
{
    Sorcerer *sorcerer = new Sorcerer("Gargamel", "Novice");
    std::cout << *sorcerer << std::endl;

    Victim *shtroumf = new Victim("Grand shtroumf");
    std::cout << *shtroumf << std::endl;

    Peon *peon = new Peon("Panpan");
    std::cout << *peon << std::endl;

    Peon peon2 = *peon;
    std::cout << peon2 << std::endl;

    sorcerer->polymorph(*shtroumf);
    sorcerer->polymorph(*peon);

    delete(peon);
    delete(shtroumf);
    delete(sorcerer);
    return (1);
}