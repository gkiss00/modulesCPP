#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    this->name = "no_name";
    this->type = "no_type";
}

Sorcerer::Sorcerer(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
    std::cout << this->name << ", " << this->type << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
    this->name = sorcerer.name;
    this->type = sorcerer.type;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer)
{
    this->name = sorcerer.name;
    this->type = sorcerer.type;
    return (*this);
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->type << ", is dead, Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName()
{
    return (this->name);
}

std::string Sorcerer::getType()
{
    return (this->type);
}

void    Sorcerer::introduce()
{
    std::cout << "I am " << this->name << ", " << this->type << ", and I like ponies!" << std::endl;
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}