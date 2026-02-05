#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
class Intern
{
    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator= (const Intern& obj);
        ~Intern();

        AForm* makeForm(std::string const nom, std::string const target);
    private:
        AForm* CreationShrubbery(std::string  target);
        AForm* CreationRobotomy(std::string  target);
        AForm* CreationPresidential(std::string  target);
};


#endif