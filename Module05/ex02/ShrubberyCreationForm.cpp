#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form(147, 135)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 147, 135)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &tmp) : Form(tmp.getName(), tmp.getRequireGradeToS(), tmp.getRequireGradeToE())
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (this->getIsSigned() == false)
    {
        std::cout << "Form is not signed" << std::endl;
        return ;
    }
    if (executor.getGrade() <= this->getRequireGradeToE())
    {
        std::string fileName = executor.getName() + "_shrubbery";
        std::ofstream file;
        file.open(fileName);
        if (file.bad())
            std::cout << "Erreur lors de l ouverture du fichier" << std::endl;
        else
        {
            file << printArbre() << std::endl << printArbre() << std::endl;
            file.close();
        }
        
    }
    else
        throw (Form::GradeTooHighException());
}

std::string printArbre()
{
    int r=174;
    int i,j,x=10,p,q,e;
    std::string arbre;
    for(i = 0 ; i < x ;i++){
        for(j=0;j<x-i;j++){
            arbre += " ";
        }
        for(j=0;j<1+2*i;j++){
            arbre += r;
        }
 
    arbre += '\n';
    }
    for(p=0;p<4;p++){
    for(e=0; e<j-i;e++){
        arbre += " ";
    }
    for(q=0;q<4;q++){
 
        arbre += r;
    }
    arbre += "\n";
    }
    return (arbre);
}