#ifndef FIXED
#define FIXED

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
    private:
        int rawBits;
        const static int bit = 8;
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed &fixed);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed &operator=(const Fixed &fixed);

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &target);


#endif