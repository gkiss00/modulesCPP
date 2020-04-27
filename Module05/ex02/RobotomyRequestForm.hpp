#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "Form.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public Form{
    private:
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string name);
        RobotomyRequestForm(const RobotomyRequestForm &tmp);
        ~RobotomyRequestForm();

        void execute(const Bureaucrat &executor) const;
};

#endif