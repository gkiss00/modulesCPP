#include "Form.hpp"

Form::Form() : name("no_name"), isSigned(false), requireGradeToS(1), requireGradeToE(1)
{

}
Form::Form(int rgs, int rge) : name("no_name"), isSigned(false), requireGradeToS(rgs), requireGradeToE(rge)
{

}
Form::Form(std::string name, int rgs, int rge) : name(name), isSigned(false), requireGradeToS(rgs), requireGradeToE(rge)
{
    if (rgs < 1 || rge < 1)
        throw (GradeTooHighException());
    else if (rgs > 150 || rge > 150)
        throw (GradeTooLowException());
}
Form::Form(const Form &form) : name(form.name), isSigned(form.isSigned), requireGradeToS(form.requireGradeToS), requireGradeToE(form.requireGradeToE)
{
    
}
Form::~Form()
{

}

std::string Form::getName() const
{
    return (this->name);
}
bool Form::getIsSigned() const
{
    return (this->isSigned);
}
int Form::getRequireGradeToS() const
{
    return (this->requireGradeToS);
}
int Form::getRequireGradeToE() const
{
    return (this->requireGradeToE);
}

void Form::setSigned()
{
    this->isSigned = true;
}

void Form::beSigned(Bureaucrat &b)
{
    if (this->isSigned == false)
    {
        if (b.getGrade() <= this->requireGradeToS)
            this->isSigned = true;
        else
            throw (GradeTooLowException());
    }
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "Form : " << form.getName() 
    << " is " << (form.getIsSigned() ? ("signed") : ("unsigned"))
    << " need a grade minimum of " << form.getRequireGradeToS() << " to be signed and a grade minimum of "
    << form.getRequireGradeToE() << " to be executed.";
    return (os);
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("From::GradeTooLowException");
}
const char* Form::GradeTooHighException::what() const throw()
{
    return ("From::GradeTooHighException");
}