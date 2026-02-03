#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm(obj)
{
    *this = obj;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string& target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if (this == &obj)
        return *this;
    this->target = obj.target;
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream file((target+"__shrubbery").c_str());
    file << "  **  \n"
            " **** \n"
            "******\n";
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
