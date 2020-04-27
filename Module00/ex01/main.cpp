#include "phonebook.hpp"

static int checkIndex(PhoneBook *phoneBook, int index)
{
    if (index < 1 || index > 8)
    {
        std::cout << "Index hors interval\n";
        return (-1);
    }
    if (phoneBook[0].getActivated(index - 1) == 0)
    {
        std::cout << "Il n y a personne a cet index\n";
        return (-1);
    }
    return (index);
}

static void searchContact(PhoneBook *phoneBook)
{
    int index;
    phoneBook[0].printContacts();
    if (phoneBook[0].getSize() > 0)
    {
        std::cout << "Entrez un index pour voir les coordonees de la personne";
        do{
            std::cout << "index : ";
            while ( ! ( std::cin >> index ) ) 
            { 
                std::cerr << "Erreur de saisie.\n";
                std::cout << "index : ";
                std::cin.clear(); 
                std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
            }
        }while (checkIndex(phoneBook, index) == -1);
        phoneBook[0].getContact(index - 1).print();
    }
    else
    {
        std::cout << "votre annuaire est vide\n";
    }
    
}

static void addContact(PhoneBook *phoneBook)
{
    int     i;
    int     index;
    std::string tmp;

    i = 0;
    while (phoneBook[0].getActivated(i) != 0)
        ++i;
    if (i == 8)
    {
        std::cout << "votre annuaire telephonique est plein, voulez vous supprimez qql ?";
        do{
            std::cout << "(Y or N) : ";
            std::cin >> tmp;
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        }while (tmp.compare("Y") != 0 && tmp.compare("N") != 0);
        if (tmp.compare("N") == 0)
            return ;
        else
        {
            std::cout << "Entrez l index de la personne que vous souhaiter supprimer\n";
            do{
                std::cout << "index : ";
                while ( ! ( std::cin >> index ) ) 
                { 
                    std::cerr << "Erreur de saisie.\n";
                    std::cout << "index : ";
                    std::cin.clear(); 
                    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
                }
            }while (checkIndex(phoneBook, index) == -1);
            phoneBook[0].deleteContact(index - 1);
            i = index - 1;
        }    
    }
    std::cout << "Enregistrement de votre nouveau contact\n";
    phoneBook[0].getContacts()[i].setFirstName();
    phoneBook[0].getContacts()[i].setLastName();
    phoneBook[0].getContacts()[i].setNickName();
    phoneBook[0].getContacts()[i].setLogin();
    phoneBook[0].getContacts()[i].setPostalAddress();
    phoneBook[0].getContacts()[i].setEmailAddress();
    phoneBook[0].getContacts()[i].setPhoneNumber();
    phoneBook[0].getContacts()[i].setBirthdayDate();
    phoneBook[0].getContacts()[i].setFavoriteMeal();
    phoneBook[0].getContacts()[i].setUnderwearColor();
    phoneBook[0].getContacts()[i].setDarkestSecret();
    phoneBook[0].addContact(i);
}

int     main()
{
    PhoneBook *phoneBook = new PhoneBook();
    std::string cmd;

    while (true)
    {
        do
        {
            std::cout << "Veuillez entrer\n\
            ADD, pour ajouter un contact\n\
            SEARCH, pour rechercher un contact\n\
            EXIT, pour sortir\n";
            std::cin >> cmd;
        } while (cmd.compare("ADD") != 0 && cmd.compare("SEARCH") != 0 && cmd.compare("EXIT"));
        std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        if (cmd.compare("ADD") == 0)
            addContact(phoneBook);
        else if (cmd.compare("SEARCH") == 0)
            searchContact(phoneBook);
        else
            break;

    }
    delete(phoneBook);
    return (1);
}