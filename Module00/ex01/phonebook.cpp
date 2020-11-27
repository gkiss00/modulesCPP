#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    int     i;

    i = 0;
    while (i < 8)
        activated[i++] = 0;
}

void PhoneBook::addContact(int i){
    activated[i] = 1;
}

void PhoneBook::deleteContact(int i){
    if (activated[i] == 1)
    {
        contact[i].reset();
        activated[i] = 0;
    }
}

Contact *PhoneBook::getContacts(){
    return (contact);
}

Contact PhoneBook::getContact(int i){
    return (contact[i]);
}

int *PhoneBook::getActivated(){
    return (activated);
}

int PhoneBook::getActivated(int i){
    return (activated[i]);
}

int PhoneBook::getSize(){
    int i;
    int size;

    size = 0;
    i = 0;
    while (i < 8)
    {
        if (activated[i] == 1)
            ++size;
        ++i;
    }
    return (size);
}

std::string PhoneBook::tronk(std::string str)
{
    int         i;
    std::string tronked;
    std::string tmp;

    tronked = "";
    tmp = str;
    if (tmp.length() > 10)
    {
        tmp[9] = '.';
        tmp.erase(10);
    }
    else
    {
        i = 0;
        while(i < 10 - tmp.length())
        {
            tronked += " ";
            ++i;
        }
    }
    tronked += tmp;
    return (tronked);
}

void PhoneBook::printContacts(){
    int i;
    std::cout << "     Index| FirstName|  LastName|     Login" << std::endl;

    i = 0;
    while (i < 8)
    {
        if (activated[i] == 1)
            std::cout << "         " << i + 1 << "|" << tronk(contact[i].getFirstName()) << "|" << tronk(contact[i].getLastName()) << "|" << tronk(contact[i].getLogin()) << std::endl;
        ++i;
    }
}