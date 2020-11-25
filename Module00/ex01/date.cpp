#include "date.hpp"

std::string Date::trim(std::string str){
    int     start;
    int     end;
    
    start = str.find_first_not_of(" ");
    end = str.find_last_not_of(" ");
    str.erase(end + 1);
    str.erase(0, start);
    return (str);
}

bool Date::isNum(std::string str){
    if(str.length() == 0)
        return (false);
    for (int i = 0; i < str.length(); ++i){
        if (isdigit(str[i]) == false)
            return (false);
    }
    return (true);
}

int Date::getDay(){
    return (day);
}

int Date::getMonth(){
    return (month);
}

int Date::getYear(){
    return (year);
}

int Date::setDay(){
    int d;
    std::string tmp;

    do{
        d = -1;
        std::cout << "dateOfBirth day : ";
        getline(std::cin, tmp);
        tmp = trim(tmp);
        if(tmp.compare("") == 0)
            return (-1);
        if(isNum(tmp))
            d = atoi(tmp.c_str());
        else
            std::cout << "Erreur de saisie" << std::endl;
        if(d != -1 && (d <= 0 || d > 31))
            std::cout << "This day doesn't exist" << std::endl;
    }while(d <= 0 || d > 31);
    day = d;
    return (0);
}

void Date::setMonth(){
    int m;
    std::string tmp;

    do{
        m = -1;
        std::cout << "dateOfBirth month : ";
        getline(std::cin, tmp);
        tmp = trim(tmp);
        if(isNum(tmp))
            m = atoi(tmp.c_str());
        else
            std::cout << "Erreur de saisie" << std::endl;
        if(m != -1 && (m <= 0 || m > 12))
            std::cout << "This month doesn't exist" << std::endl;
    }while(m <= 0 || m > 12);
    month = m;
}

void Date::setYear(){
    int y;
    std::string tmp;

    do{
        y = -1;
        std::cout << "dateOfBirth year : ";
        getline(std::cin, tmp);
        tmp = trim(tmp);
        if(isNum(tmp))
            y = atoi(tmp.c_str());
        else
            std::cout << "Erreur de saisie" << std::endl;
    }while(y == -1);
    year = y;
}

void Date::setDate(){
    int d;
    int m;
    int y;

    d = setDay();
    if (d != -1){
        setMonth();
        setYear();
    }
}