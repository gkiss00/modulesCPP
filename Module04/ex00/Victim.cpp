#include "Victim.hpp"

Victim::Victim()
{
    this->name = "no_name";
}

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "A random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim)
{
    this->name = victim.name;
    std::cout << "A random victim called " << this->name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &victim)
{
    this->name = victim.name;
    return (*this);
}

Victim::~Victim()
{
    std::cout << "The victim " << this->name << " died for no apparent reasons!" << std::endl;
}

std::string Victim::getName()
{
    return (this->name);
}

void    Victim::introduce()
{
    std::cout << "I am " << this->name << " ans I like otters" << std::endl;
}

void Victim::getPolymorphed() const
{
    std::cout << this->name << " was just polymorphed in a cute little sheep!" << std::endl;
}