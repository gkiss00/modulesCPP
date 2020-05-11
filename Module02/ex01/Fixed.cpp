#include "Fixed.hpp"

Fixed::Fixed()
{
    this->rawBits = 0;
}

Fixed::Fixed(const int nb)
{
    this->setRawBits(nb << this->bit);
}

Fixed::Fixed(const float nb)
{
    this->setRawBits(roundf(nb * (1 << this->bit)));
}

Fixed::Fixed(const Fixed &fixed)
{
    this->setRawBits(fixed.getRawBits());
}


Fixed &Fixed::operator= (const Fixed &fixed)
{
    this->setRawBits(fixed.getRawBits());
    return(*this);
}

Fixed::~Fixed()
{
    
}

int Fixed::getRawBits(void) const
{
    return (this->rawBits);
}

void Fixed::setRawBits(int const raw)
{
    this->rawBits = raw;
}

int Fixed::toInt(void) const
{
    return (this->rawBits >> this->bit);
}

float Fixed::toFloat(void) const
{
    return (((float)this->rawBits) / (1 << this->bit));
}


std::ostream &operator<<(std::ostream &os, const Fixed &target)
{
    os << ((float)target.getRawBits()) / (1 << 8);
    return (os);
}