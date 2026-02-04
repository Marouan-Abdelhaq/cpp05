#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj)
{
    *this = obj;
}

PresidentialPardonForm::PresidentialPardonForm(std::string& target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this == &obj)
        return *this;
    this->target = obj.target;
    return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->target;
}

void PresidentialPardonForm::executeFormAction() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}