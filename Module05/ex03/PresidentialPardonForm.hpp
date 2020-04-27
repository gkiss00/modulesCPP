#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public Form{
    private:
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string name);
        PresidentialPardonForm(const PresidentialPardonForm &tmp);
        ~PresidentialPardonForm();

        void execute(const Bureaucrat &executor) const;
};

#endif