#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

std::string     Human::identifier() const
{
    return (this->brain.identifier());
}

const Brain     &Human::getBrain()
{
    return (this->brain);
}