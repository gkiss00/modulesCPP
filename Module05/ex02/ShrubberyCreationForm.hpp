#ifndef SHRUBBERYCREATIONFROM
#define SHRUBBERYCREATIONFROM

#include "Form.hpp"
#include <fstream>
#include <iostream>
#include <string>

class ShrubberyCreationForm : public Form{
    private:
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm(const ShrubberyCreationForm &tmp);
        ~ShrubberyCreationForm();

        void execute(const Bureaucrat &executor) const;
};

std::string printArbre();

#endif