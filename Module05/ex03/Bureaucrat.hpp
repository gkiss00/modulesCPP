#ifndef BUREAUCRAT
#define BUREAUCRAT

#include "Form.hpp"
#include <exception>
#include <iostream>
#include <fstream>
#include <string>

class Form;

class Bureaucrat {
    private:
        const std::string name;
        int grade;

        Bureaucrat();
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &tmp);
        Bureaucrat &operator=(const Bureaucrat &tmp);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade()const ;

        void getPromoted();
        void getDismiss();

        void signForm(Form &form);
        void executeForm(Form &form);

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif