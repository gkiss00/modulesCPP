#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form(72, 45)
{

}
RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &tmp) : Form(tmp.getName(), tmp.getRequireGradeToS(), tmp.getRequireGradeToE())
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (this->getIsSigned() == false)
    {
        std::cout << "Form is not signed" << std::endl;
        return ;
    }
    if (executor.getGrade() <= this->getRequireGradeToE())
    {
        std::cout << "Bzzz bzzz... " << executor.getName() << " a ete robotomize." << std::endl;
    }
    else
        throw (Form::GradeTooHighException());
}