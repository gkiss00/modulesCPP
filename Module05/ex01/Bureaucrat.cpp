#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("no_name")
{
    this->grade = 150;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade >= 1 && grade <= 150)
        this->grade = grade;
    else if (grade < 1)
        throw (GradeTooHighException());
    else
        throw (GradeTooLowException());
    
}
Bureaucrat::Bureaucrat(const Bureaucrat &tmp) : name(tmp.name)
{
    this->grade= tmp.grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &tmp)
{
    (std::string)this->name = tmp.name;
    this->grade= tmp.grade;
    return (*this);
}
Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
    return (this->name);
}
int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::getPromoted()
{
    if (this->grade > 1)
        this->grade -= 1;
    else
        throw (GradeTooHighException());
}
void Bureaucrat::getDismiss()
{
    if (this->grade < 150)
        this->grade += 1;
    else
        throw (GradeTooLowException());
}

void Bureaucrat::signForm(Form &form)
{
    if (this->grade <= form.getRequireGradeToS())
    {
        form.setSigned();
        std::cout << this->name << " signed Form : " << form.getName() 
        << std::endl;
    }
    else
    {
        std::cout << this->name << " can t sign Form  : " 
        << form.getName() << " because he don t det the permission for" 
        << std::endl;
    }
    
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &tmp)
{
    os << tmp.getName() << ", bureaucrat grade : " << tmp.getGrade();
    return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw ()
{
    return ("Bureaucrat::GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw ()
{
    return ("Bureaucrat::GradeTooLowException");
}