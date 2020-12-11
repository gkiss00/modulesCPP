#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form(25, 5)
{

}
PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &tmp) : Form(tmp.getName(), tmp.getRequireGradeToS(), tmp.getRequireGradeToE())
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (this->getIsSigned() == false)
    {
        std::cout << "Form is not signed" << std::endl;
        return ;
    }
    if (executor.getGrade() <= this->getRequireGradeToE())
    {
        std::cout << executor.getName() << " a ete pardonne par  Zafod Beeblebrox." << std::endl;
    }
    else
        throw (Form::GradeTooLowException());
}