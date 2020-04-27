#ifndef INTERN
#define INTERN

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <locale>

class Intern {
    private:
        std::string getConcatenedString(std::string target);
        std::string getUpperString(std::string target);
    public:
        Intern();
        Intern(const Intern &target);
        Intern &operator=(const Intern &target);
        ~Intern();

        Form *makeForm(std::string type, std::string target);
};

#endif