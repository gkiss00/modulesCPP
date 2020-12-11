#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <string>
#include <iostream>

int main()
{
    try
    {
        std::cout << std::endl << "Creation d un patron d un bronze et 3 fichier a exectuer : " << std::endl << std::endl;
        ShrubberyCreationForm f1("Creation");
        RobotomyRequestForm f2("Request");
        PresidentialPardonForm f3("Pardon");

        Bureaucrat boss("Patron", 1);
        Bureaucrat noob("Bronze", 150);
        boss.signForm(f1);
        boss.signForm(f2);
        boss.signForm(f3);

        boss.executeForm(f1);
        boss.executeForm(f2);
        boss.executeForm(f3);
        
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl << "Creation d un patron d un bronze et 3 fichier a exectuer : " << std::endl << std::endl;
        ShrubberyCreationForm f1("Creation");
        RobotomyRequestForm f2("Request");
        PresidentialPardonForm f3("Pardon");

        Bureaucrat boss("Patron", 1);
        Bureaucrat noob("Bronze", 150);
        boss.signForm(f1);
        boss.signForm(f2);
        
        noob.executeForm(f1);
        noob.executeForm(f2);
        noob.executeForm(f3);
        
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    return (0);
}