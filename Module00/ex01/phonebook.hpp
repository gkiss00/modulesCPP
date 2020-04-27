#ifndef PHONEBOOK
#define PHONEBOOK

#include <string>
#include <iostream>
#include <cstdlib>
#include <string> // Pour pouvoir utiliser la classe string
#include <sstream> // Pour pouvoir manipuler la classe istringstream
#include <limits> // Permet d'avoir accès à la classe numeric_limmits
#include "contact.hpp"

class PhoneBook
{
    private:

    Contact     contact[8];
    int         activated[8];
    
    std::string tronk(std::string str);

    public:
    
    PhoneBook();

    Contact *getContacts();
    Contact getContact(int i);
    int *getActivated();
    int getActivated(int i);

    int getSize();

    void addContact(int i);
    void deleteContact(int i);
    void printContacts();
};

#endif