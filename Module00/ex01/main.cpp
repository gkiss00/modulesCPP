#include "phonebook.hpp"

static std::string trim(std::string str){
    int     start;
    int     end;
    
    start = str.find_first_not_of(" ");
    end = str.find_last_not_of(" ");
    str.erase(end + 1);
    str.erase(0, start);
    return (str);
}

static int checkIndex(PhoneBook *phoneBook, int index)
{
    if (index < 1 || index > 8)
    {
        std::cout << "Index hors interval" << std::endl;
        return (-1);
    }
    if (phoneBook[0].getActivated(index - 1) == 0)
    {
        std::cout << "Il n y a personne a cet index" << std::endl;
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
                std::cout << "Erreur de saisie" << std::endl;
                std::cout << "index : ";
                std::cin.clear(); 
                std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
            }
        }while (checkIndex(phoneBook, index) == -1);
        phoneBook[0].getContact(index - 1).print();
    }
    else
    {
        std::cout << "votre annuaire est vide" << std::endl;
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
    if (i == 1)
    {
        std::cout << "votre annuaire telephonique est plein, voulez vous supprimez qql ?";
        do{
            std::cout << "(Y or N) : ";
            getline(std::cin, tmp);
            tmp = trim(tmp);
        }while (tmp.compare("Y") != 0 && tmp.compare("N") != 0);
        if (tmp.compare("N") == 0)
            return ;
        else
        {
            std::cout << "Entrez l index de la personne que vous souhaiter supprimer" << std::endl;
            do{
                std::cout << "index : ";
                while ( ! ( std::cin >> index ) ) 
                {
                    std::cout << "Erreur de saisie" << std::endl;
                    std::cout << "index : ";
                }
            }while (checkIndex(phoneBook, index) == -1);
            phoneBook[0].deleteContact(index - 1);
            i = index - 1;
        }    
    }
    std::cout << "Enregistrement de votre nouveau contact" << std::endl;
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
    std::string tmp;

    while (true)
    {
        do
        {
            std::cout << "Veuillez entrer\n\
            ADD, pour ajouter un contact\n\
            SEARCH, pour rechercher un contact\n\
            EXIT, pour sortir\n";
            getline(std::cin, tmp);
            cmd = trim(tmp);
        } while (cmd.compare("ADD") != 0 && cmd.compare("SEARCH") != 0 && cmd.compare("EXIT"));
        if (cmd.compare("ADD") == 0)
            addContact(phoneBook);
        else if (cmd.compare("SEARCH") == 0)
            searchContact(phoneBook);
        else
            break;

    }
    delete(phoneBook);
    return (0);
}