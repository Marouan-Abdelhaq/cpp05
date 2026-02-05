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
    return *this;
}

AForm* Intern::CreationShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::CreationRobotomy(std::string  target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::CreationPresidential(std::string  target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string const nom, std::string const target)
{
    std::string forms[3] = {
            "shrubbery creation",
            "robotomy request",
            "presidential pardon"
    };
    AForm* (Intern::*ptr[3]) (std::string  target) = {
            &Intern::CreationShrubbery,
            &Intern::CreationRobotomy,
            &Intern::CreationPresidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (nom == forms[i])
            return (this->*ptr[i])(target);
    }

    std::cout << "Invalide form" << std::endl;
    return NULL;
}

Intern::~Intern()
{
    
}