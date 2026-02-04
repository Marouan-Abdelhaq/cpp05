#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
    private:
        /* data */
    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator= (const Intern& obj);
        ~Intern();

        AForm* makeForm(std::string const nom, std::string const target);
};

Intern::Intern(/* args */)
{
}

Intern::~Intern()
{
}


#endif