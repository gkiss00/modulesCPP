#ifndef FORM
#define FORM

#include <string>
#include <iostream>

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int requireGradeToS;
        const int requireGradeToE;

        Form();
    public:
        Form(std::string name, int rgs, int rge);
        Form(const Form &form);
        Form &operator=(const Form &form);
        ~Form();

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
};

#endif