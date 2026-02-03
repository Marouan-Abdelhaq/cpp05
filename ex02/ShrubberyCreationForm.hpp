#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    std::string target;
    public:
            ShrubberyCreationForm();
            ShrubberyCreationForm(const ShrubberyCreationForm& obj);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

            std::string getTarget();
            void execute(Bureaucrat const & executor) const;
            ~ShrubberyCreationForm();
};

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
    target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm()
{
    *this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
(
    if (this == &obj)
        return *this;
    this->target = obj.target;
    return *this;
)

std:string ShrubberyCreationForm::getTarget()
{
    return this->target;
}

void 

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}