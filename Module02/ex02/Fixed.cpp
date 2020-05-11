#include "Fixed.hpp"

//*****************************************************************************
//*****************************************************************************
//CONSTRUCTOR AND DESTRUCTOR
//*****************************************************************************
//*****************************************************************************

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

Fixed::Fixed(const int nb, int x)
{
    x = 0;
    this->rawBits = nb;
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

//*****************************************************************************
//*****************************************************************************
//GETTER AND SETTER
//*****************************************************************************
//*****************************************************************************

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
//*****************************************************************************
//*****************************************************************************
//OPERATOR DE COMPARAISON
//*****************************************************************************
//*****************************************************************************

bool Fixed::operator>(const Fixed &target)
{
    return (this->toFloat() > target.toFloat());
}
bool Fixed::operator<(const Fixed &target)
{
    return (this->toFloat() < target.toFloat());
}
bool Fixed::operator>=(const Fixed &target)
{
    return (this->toFloat() >= target.toFloat());
}
bool Fixed::operator<=(const Fixed &target)
{
    return (this->toFloat() <= target.toFloat());
}
bool Fixed::operator==(const Fixed &target)
{
    return (this->toFloat() == target.toFloat());
}
bool Fixed::operator!=(const Fixed &target)
{
    return (this->toFloat() != target.toFloat());
}

//*****************************************************************************
//*****************************************************************************
//OPERATOR MATHEMATIQUE
//*****************************************************************************
//*****************************************************************************

Fixed Fixed::operator+(const Fixed &target)
{
    return (Fixed(this->rawBits + target.rawBits, 0));
}
Fixed Fixed::operator-(const Fixed &target)
{
    return (Fixed(this->rawBits - target.rawBits, 0));
}
Fixed Fixed::operator*(const Fixed &target)
{
    return (Fixed(this->toFloat() * target.toFloat()));
}
Fixed Fixed::operator/(const Fixed &target)
{
    return (Fixed(this->toFloat() / target.toFloat()));
}

//*****************************************************************************
//*****************************************************************************
//OPERATOR D INCREMENTATION
//*****************************************************************************
//*****************************************************************************

Fixed Fixed::operator++()
{
    this->setRawBits(roundf((this->toFloat() + (float)(1 / pow(2, this->bit))) * (1 << this->bit)));
    return (*this);
}
Fixed Fixed::operator--()
{
    this->setRawBits(roundf((this->toFloat() - (float)(1 / pow(2, this->bit))) * (1 << this->bit)));
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed    tmp;

    tmp.setRawBits(this->getRawBits());
    this->setRawBits(roundf((this->toFloat() + (float)(1 / pow(2, this->bit))) * (1 << this->bit)));
    return (tmp);
}
Fixed Fixed::operator--(int)
{
    Fixed    tmp;

    tmp.setRawBits(this->getRawBits());
    this->setRawBits(roundf((this->toFloat() - (float)(1 / pow(2, this->bit)))) * (1 << this->bit));
    return (tmp);
}

//*****************************************************************************
//*****************************************************************************
//OPERATOR MAX MIN
//*****************************************************************************
//*****************************************************************************

Fixed min(Fixed &a, Fixed &b)
{
    Fixed tmp = (a < b ? a : b);
    return tmp;
}
Fixed max(Fixed &a, Fixed &b)
{
    Fixed tmp = (a > b ? a : b);
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a.toFloat() < b.toFloat() ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a.toFloat() > b.toFloat() ? a : b);
}