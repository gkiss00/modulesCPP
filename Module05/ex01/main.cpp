#include "Bureaucrat.hpp"

#include <string>
#include <iostream>

int main()
{
    try
    {
        std::cout << std::endl << "Creation d un form avec un grade trop haut : " << std::endl << std::endl;
        Form f1("Impossible", 0, 0);
        std::cout << f1 << std::endl;
    }
    catch(Form::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;;
    }

    try
    {
        std::cout << std::endl << "Creation d un form avec un grade trop bas : " << std::endl << std::endl;
        Form f2("Impossible", 151, 150);
        std::cout << f2 << std::endl;
    }
    catch(Form::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;;
    }

    try
    {
        std::cout << std::endl << "Creation d un form avec un grade correct : " << std::endl << std::endl;
        Bureaucrat b7("Patron", 1);
        Bureaucrat b8("Noob", 120);
        Form f3("No_idea", 40, 40);
        std::cout << f3 << std::endl;

        b7.signForm(f3);
        f3.beSigned(b8);
    }
    catch(Form::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;;
    }

    try
    {
        std::cout << std::endl << "Creation d un form avec un grade correct : " << std::endl << std::endl;
        Bureaucrat b6("Noob", 120);
        Form f3("No_idea", 40, 40);
        std::cout << f3 << std::endl;

        b6.signForm(f3);
        f3.beSigned(b6);
    }
    catch(Form::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;;
    }
    return (0);
}