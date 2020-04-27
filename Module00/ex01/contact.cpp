#include "contact.hpp"

Contact::Contact()
{

}

void Contact::setFirstName1(std::string str){
    first_name = str;
}

std::string Contact::getFirstName(){
    return (first_name);
}
std::string Contact::getLastName(){
    return (last_name);
}
std::string Contact::getNickName(){
    return (nick_name);
}
std::string Contact::getLogin(){
    return (login);
}
std::string Contact::getPostalAddress(){
    return (postal_address);
}
std::string Contact::getEmailAddress(){
    return (email_address);
}
long int Contact::getPhoneNumber(){
    return (phone_number);
}
Date Contact::getBirthdayDate(){
    return (birthday_date);
}
std::string Contact::getFavoriteMeal(){
    return (favorite_meal);
}
std::string Contact::getUnderwearColor(){
    return (underwear_color);
}
std::string Contact::getDarkestSecret(){
    return (darkest_secret);
}

void Contact::setFirstName(){
    std::string tmp;
    std::cout << "firstName : ";
    std::cin >> tmp;
    first_name = tmp;
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void Contact::setLastName(){
    std::string tmp;
    std::cout << "lastName : ";
    std::cin >> tmp;
    last_name = tmp;
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void Contact::setNickName(){
    std::string tmp;
    std::cout << "nickName : ";
    std::cin >> tmp;
    nick_name = tmp;
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void Contact::setLogin(){
    std::string tmp;
    std::cout << "login : ";
    std::cin >> tmp;
    login = tmp;
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void Contact::setPostalAddress(){
    char  buffer[501];
    std::cout << "postalAddress : ";
    std::cin.getline(buffer, 500);
    postal_address = buffer;
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

int Contact::checkEmailFormat(std::string email){
    int i;
    int check1;
    int check2;

    i = 0;
    check1 = 0;
    check2 = 0;
    while (email[i] != '\0')
    {
        if (email[i] == '@' && i != 0)
            check1 = i;
        if (email[i] == '.' && i > check1)
            check2 = i;
        ++i;
    }
    if (check1 != 0 && check2 > check1 + 1 && i > check2 + 1)
        return (1);
    std::cout << "format non valide\n";
    return (-1);
}

void Contact::setEmailAddress(){
    std::string tmp;

    do{
        std::cin.clear();
        std::cout << "emailAddress : ";
        std::cin.clear();
        std::cin >> tmp;
    }while (checkEmailFormat(tmp) == -1);
    email_address = tmp;
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

int Contact::checkPhoneFormat(long int number){
    int i;

    i = 0;
    while (number != 0)
    {
        number /= 10;
        ++i;
    }
    if (i >= 8)
        return (1);
    std::cout << "format non valide\n" << "phoneNumber : ";
    return (-1);
}

void Contact::setPhoneNumber(){
    long int number;
    std::cout << "phoneNumber : ";
    do{
        while ( ! ( std::cin >> number ) ) 
        { 
            std::cerr << "Erreur de saisie.\n";
            std::cout << "phoneNumber : ";
            std::cin.clear(); 
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        }
    }while(checkPhoneFormat(number) == -1);
    phone_number = number;
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void Contact::setBirthdayDate(){
    birthday_date.setDay();
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
    birthday_date.setMonth();
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
    birthday_date.setYear();
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void Contact::setFavoriteMeal(){
    std::string tmp;
    std::cout << "favoriteMeal : ";
    std::cin >> tmp;
    favorite_meal = tmp;
    std::cin.clear(); 
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void Contact::setUnderwearColor(){
    std::string tmp;
    std::cout << "underwearColor : ";
    std::cin >> tmp;
    underwear_color = tmp;
    std::cin.clear(); 
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void Contact::setDarkestSecret(){
    char buffer[501];
    std::string tmp;
    std::cout << "darksetSecret : ";
    std::cin.getline(buffer, 500);
    darkest_secret = buffer;
}

void Contact::reset()
{
    first_name = "";
    last_name = "";
    nick_name = "";
    login = "";
    postal_address = "";
    email_address = "";
    phone_number = 0;
    nick_name = "";
    favorite_meal = "";
    underwear_color = "";
    darkest_secret = "";
}

void Contact::print(){
    std::cout << "Firstname : " << first_name << "\n";
    std::cout << "Lastname : " <<last_name << "\n";
    std::cout << "Nickanem : " <<nick_name << "\n";
    std::cout << "Login : " <<login << "\n";
    std::cout << "Postal address : " <<postal_address << "\n";
    std::cout << "Email address : " <<email_address << "\n";
    std::cout << "Phone number : " <<phone_number << "\n";
    std::cout << "Birthday date : " <<birthday_date.getDay() << "/" << birthday_date.getMonth() << "/" << birthday_date.getYear() << "\n";
    std::cout << "Favorite meal : " <<favorite_meal << "\n";
    std::cout << "Underwear color : " <<underwear_color << "\n";
    std::cout << "Darkest secret : " <<darkest_secret << "\n";
}