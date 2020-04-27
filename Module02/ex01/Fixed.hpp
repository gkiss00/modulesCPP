#ifndef FIXED
#define FIXED

class Fixed {
    private:
        int nb;
        const static int bit = 8;
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const Fixed &fixed);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed &operator= (const Fixed &fixed);
};

#endif