#include "Intern.hpp"

Intern::Intern()
{

}
Intern::Intern(const Intern &target)
{
    (void)target;
}
Intern &Intern::operator=(const Intern &target)
{
    (void)target;
    return (*this);
}
Intern::~Intern()
{

}

std::string Intern::getUpperString(std::string target)
{
    for (std::string::iterator it=target.begin(); it != target.end(); ++it)
    {
        *it = toupper(*it);
    }
    return (target);
}

std::string Intern::getConcatenedString(std::string target)
{
    std::locale loc;
    std::string concatenedString;
    concatenedString = "";
    for (std::string::iterator it=target.begin(); it != target.end(); ++it)
    {
        if(std::isalpha(*it, loc))
            concatenedString += *it;
    }
    return (concatenedString);
}

Form *Intern::makeForm(std::string type, std::string target)
{
    Form *finale;
    Form **tab = new Form*[3];
    tab[0] = new PresidentialPardonForm(target);
    tab[1] = new ShrubberyCreationForm(target);
    tab[2] = new RobotomyRequestForm(target);
    std::string str[3];
    str[0] = "PresidentialPardon";
    str[1] = "ShrubberyCreation";
    str[2] = "RobotomyRequest";
    for (int j = 0; j < 3; ++j)
    {
        if (getUpperString(str[j]).compare(getUpperString(getConcatenedString(type))) == 0)
        {
            for (int k = 0; k < 3; ++k)
            {
                if (k != j)
                    delete(tab[k]);
                else
                    finale = tab[k];
                
            }
            delete[](tab);
            return (finale);
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        delete(tab[i]);
    }
    delete[](tab);
    std::cout << "Form unfound" << std::endl;
    return (NULL);
}