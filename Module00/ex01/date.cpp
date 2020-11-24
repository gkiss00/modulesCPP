#include "date.hpp"

int Date::getDay(){
    return (day);
}

int Date::getMonth(){
    return (month);
}

int Date::getYear(){
    return (year);
}

void Date::setDay(){
    int d;
    do{
        std::cout << "dateOfBirth day : ";
        while ( ! ( std::cin >> d ) ) 
        { 
            std::cerr << "Erreur de saisie.\n";
            std::cout << "dateOfBirth day : ";
            std::cin.clear(); 
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        }
    }while(d <= 0 || d > 31);
    day = d;
}

void Date::setMonth(){
    int m;  
    do{
        std::cout << "dateOfBirth month : ";
        while ( ! ( std::cin >> m ) ) 
        { 
            std::cerr << "Erreur de saisie.\n";
            std::cout << "dateOfBirth month : ";
            std::cin.clear(); 
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        }
    }while(m <= 0 || m > 12);
    month = m;
}

void Date::setYear(){
    int y;
    std::cout << "dateOfBirth year : ";
    while ( ! ( std::cin >> y ) ) 
    { 
        std::cerr << "Erreur de saisie.\n";
        std::cout << "dateOfBirth year : ";
        std::cin.clear(); 
        std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
    }
    year = y;
}