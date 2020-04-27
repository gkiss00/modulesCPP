#ifndef PONY
#define PONY

#include <string>

class Pony
{
    private:

    std::string race;
    int         age;
    int         size;

    public:

    Pony();
    Pony(std::string race, int age, int size);

    int     getAge();
    int     getSize();

    void    sauter();
    void    vieillir();
};

#endif