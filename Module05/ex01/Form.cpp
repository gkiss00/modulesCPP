#include "Form.hpp"

Form::Form() : name("no_name"), isSigned(false), requireGradeToS(1), requireGradeToE(1)
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
Form &Form::operator=(const Form &form)
{
    (std::string)this->name = form.name;
    this->isSigned = form.isSigned;
    this->requireGradeToS = form.requireGradeToS;
    this->requireGradeToE = form.requireGradeToE;
    return (*this);
}
Form::~Form()
{

}