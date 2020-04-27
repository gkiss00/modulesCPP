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
        std::cout << "Creation d un ereaucrat d un grade trop haut : " << std::endl << std::endl;
        Bureaucrat b1("Jeff", 0);
        std::cout << b1 << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;;
    }

    try
    {
        std::cout << std::endl << "Creation d un bureaucrat d un grade trop bas : " << std::endl << std::endl;
        Bureaucrat b2("Carl", 151);
        std::cout << b2 << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;;
    }

    try
    {
        std::cout << std::endl << "Creation d un bureaucrat d un bon grade : " << std::endl << std::endl;
        Bureaucrat b3("Bob", 2);
        std::cout << b3 << std::endl;
        b3.getPromoted();
        b3.getPromoted();
        b3.getPromoted();
        b3.getPromoted();
        std::cout << b3 << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;;
    }

    try
    {
        std::cout << std::endl << "Creation d un bureaucrat d un tres mauvais grade : " << std::endl << std::endl;
        Bureaucrat b4("Eric", 148);
        std::cout << b4 << std::endl;
        b4.getDismiss();
        b4.getDismiss();
        b4.getDismiss();
        b4.getDismiss();
        std::cout << b4 << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;;
    }

    try
    {
        std::cout << std::endl << "Creation d un patron un bronze et 3 fichier a exectuer : " << std::endl << std::endl;
        ShrubberyCreationForm f1("Creation");
        RobotomyRequestForm f2("Request");
        PresidentialPardonForm f3("Pardon");

        Bureaucrat boss("Patron", 1);
        Bureaucrat noob("Bronze", 150);
        noob.executeForm(f1);
        noob.executeForm(f2);
        noob.executeForm(f3);
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
        std::cerr << e.what() << std::endl;;
    }
    

    return (0);
}