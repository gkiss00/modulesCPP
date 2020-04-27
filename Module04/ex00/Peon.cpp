#include "Peon.hpp"

Peon::Peon() : Victim()
{

}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &peon) : Victim(peon)
{
    std::cout << "Zog zog." << std::endl;
}
Peon &Peon::operator=(const Peon &peon)
{
    this->name = peon.name;
    std::cout << "Zog zog." << std::endl;
    return (*this);
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << this->name << " was just polymorphed into a pink pony!" << std::endl;
}