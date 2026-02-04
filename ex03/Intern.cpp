#include "Intern.hpp"

AForm* Intern::makeForm(std::string const nom, std::string const target)
{
    if (nom == "Shrubbery Creation")
        return new ShrubberyCreationForm(target);
    if (nom == "Robotomy Request")
        return new RobotomyRequestForm(target);
    if (nom == "Presidential Pardon")
        return new PresidentialPardonForm(target);
    
    std::cout << "Invalide form" << std:endl;
    return NULL;
}

Intern::~Intern()
{
    
}