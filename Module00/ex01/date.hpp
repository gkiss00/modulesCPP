#ifndef DATE
#define DATE

#include <string>
#include <iostream>
#include <cstdlib>
#include <string> // Pour pouvoir utiliser la classe string
#include <sstream> // Pour pouvoir manipuler la classe istringstream
#include <limits> // Permet d'avoir accès à la classe numeric_limmits

class Date
{
    private:

    int day;
    int month;
    int year;

    public:

    int getDay();
    int getMonth();
    int getYear();
    void setDay();
    void setMonth();
    void setYear();
};

#endif