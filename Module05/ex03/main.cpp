#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <string>
#include <iostream>

int main()
{
    try
    {
        std::cout << std::endl << "Creation d un patron : " << std::endl << std::endl;

        Bureaucrat boss("Patron", 1);

        std::cout << std::endl << "Arrivee d un Intern et creation d un fichier execute par le boss : " << std::endl << std::endl;
        Intern intern;
        Form *f = intern.makeForm("robotomy-request", "bob");
        boss.signForm(*f);
        boss.executeForm(*f);
        delete (f);
        f = intern.makeForm("sHRubberY   8 cre ation", "bob");
        boss.signForm(*f);
        boss.executeForm(*f);
        delete(f);
        f = intern.makeForm("PresidentialPardon", "bob");
        boss.signForm(*f);
        boss.executeForm(*f);
        delete(f);
        f = intern.makeForm("Unfound", "bob");
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