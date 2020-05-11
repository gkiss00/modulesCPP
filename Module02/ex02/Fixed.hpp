#ifndef FIXED
#define FIXED

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
    private:
        int rawBits;
        const static int bit = 8;
        Fixed(const int nb, int x);
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();

        bool operator>(const Fixed &target);
        bool operator<(const Fixed &target);
        bool operator>=(const Fixed &target);
        bool operator<=(const Fixed &target);
        bool operator==(const Fixed &target);
        bool operator!=(const Fixed &target);

        Fixed operator+(const Fixed &target);
        Fixed operator-(const Fixed &target);
        Fixed operator*(const Fixed &target);
        Fixed operator/(const Fixed &target);

        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        
        static Fixed &min(Fixed &a, Fixed &b);
        const static Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        const static Fixed &max(const Fixed &a, const Fixed &b);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &target);


#endif