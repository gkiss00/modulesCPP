#ifndef CONTACT
#define CONTACT

#include <string>
#include <iostream>
#include <cstdlib>
#include <string> // Pour pouvoir utiliser la classe string
#include <sstream> // Pour pouvoir manipuler la classe istringstream
#include <limits> // Permet d'avoir accès à la classe numeric_limmits
#include "date.hpp"

class Contact
{
    private:

    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    Date birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;

    int checkEmailFormat(std::string email);
    int checkPhoneFormat(std::string number);
    std::string trim(std::string str);

    public:

    Contact();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getLogin();
    std::string getPostalAddress();
    std::string getEmailAddress();
    std::string getPhoneNumber();
    Date getBirthdayDate();
    std::string getFavoriteMeal();
    std::string getUnderwearColor();
    std::string getDarkestSecret();

    void setFirstName1(std::string str);
    void setFirstName();
    void setLastName();
    void setNickName();
    void setLogin();
    void setPostalAddress();
    void setEmailAddress();
    void setPhoneNumber();
    void setBirthdayDate();
    void setFavoriteMeal();
    void setUnderwearColor();
    void setDarkestSecret();

    void reset();
    void print();
};

#endif