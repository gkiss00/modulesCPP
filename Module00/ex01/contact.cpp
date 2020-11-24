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
std::string Contact::getPhoneNumber(){
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

std::string Contact::trim(std::string str){
    int     start;
    int     end;
    
    start = str.find_first_not_of(" ");
    end = str.find_last_not_of(" ");
    str.erase(end + 1);
    str.erase(0, start);
    return (str);
}

void Contact::setFirstName(){
    std::string tmp;
    std::cout << "firstName : ";
    getline(std::cin, tmp);
    first_name = trim(tmp);
}

void Contact::setLastName(){
    std::string tmp;
    std::cout << "lastName : ";
    getline(std::cin, tmp);
    last_name = trim(tmp);
}

void Contact::setNickName(){
    std::string tmp;
    std::cout << "nickName : ";
    getline(std::cin, tmp);
    nick_name = trim(tmp);
}

void Contact::setLogin(){
    std::string tmp;
    std::cout << "login : ";
    getline(std::cin, tmp);
    login = trim(tmp);
}

void Contact::setPostalAddress(){
    std::string tmp;
    std::cout << "postalAddress : ";
    getline(std::cin, tmp);
    postal_address = trim(tmp);
}

int Contact::checkEmailFormat(std::string email){
    int i;
    int check1;
    int check2;

    i = 0;
    check1 = 0;
    check2 = 0;
    if (email.compare("") == 0)
        return (1);
    while (email[i] != '\0')
    {
        if (email[i] == '@' && i != 0)
            check1 = i;
        if (email[i] == '.' && i > check1 + 1)
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
        std::cout << "emailAddress : ";
        getline(std::cin, tmp);
    }while (checkEmailFormat(tmp) == -1);
    email_address = trim(tmp);
}

int Contact::checkPhoneFormat(std::string number){
    if (number.compare("") == 0)
        return (1);
    for(int i = 0; i < number.length(); ++i){
        if (number[i] < '0' || number[i] > '9')
        {
            std::cout << "format non valide\n";
            return (-1);
        }   
    }
    if (number.length() >= 8)
        return (1);
    std::cout << "format non valide\n";
    return (-1);
}

void Contact::setPhoneNumber(){
    std::string tmp;
    do{
        std::cout << "phoneNumber : ";
        getline(std::cin, tmp);
    }while(checkPhoneFormat(trim(tmp)) == -1);
    phone_number = trim(tmp);
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
    getline(std::cin, tmp);
    favorite_meal = trim(tmp);
}

void Contact::setUnderwearColor(){
    std::string tmp;
    std::cout << "underwearColor : ";
    getline(std::cin, tmp);
    underwear_color = trim(tmp);
}

void Contact::setDarkestSecret(){
    std::string tmp;
    std::cout << "darksetSecret : ";
    getline(std::cin, tmp);
    darkest_secret = trim(tmp);
}

void Contact::reset()
{
    first_name = "";
    last_name = "";
    nick_name = "";
    login = "";
    postal_address = "";
    email_address = "";
    phone_number = "";
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