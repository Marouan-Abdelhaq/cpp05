#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& obj)
{
    (void)obj;
}

Intern& Intern::operator= (const Intern& obj)
{
    (void)obj;
}

AForm* Intern::makeForm(std::string const nom, std::string const target)
{
    std::string forms[3] = {
            "Shrubbery Creation",
            "Robotomy Request",
            "Presidential Pardon"
    };
    AForm* (AForm::*ptr[3])(std::string const nom, std::string const target) = {
        &Intern::ShrubberyCreationForm,
        &Intern::RobotomyRequestForm,
        &Intern::PresidentialPardonForm
    };

    for (int i = 0; i < 3; i++)
    {
        if (nom == forms[i])
            return new ptr[i](target);
    }

    std::cout << "Invalide form" << std::endl;
    return NULL;
}

Intern::~Intern()
{
    
}