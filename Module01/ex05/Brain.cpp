#include "Brain.hpp"

Brain::Brain()
{
    this->vie = 0;
}

std::string Brain::identifier() const
{
    std::stringstream address;
    long long int         i;

    i = (long long int)this;
    address << "0x" << std::hex << i;
    return (address.str());
}
