#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <fstream>

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int requireGradeToS;
        const int requireGradeToE;
    protected:
        Form();
        Form(int rgs, int rge);
    public:
        Form(std::string name, int rgs, int rge);
        Form(const Form &form);
        ~Form();

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };

        std::string getName() const;
        bool getIsSigned() const;
        int getRequireGradeToS() const;
        int getRequireGradeToE() const;
        void setSigned();
        virtual void execute(const Bureaucrat &executor) const = 0;

        void beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif