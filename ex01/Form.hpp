#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;

class Form
{
        const std::string name;
        bool    indicating;
        const int    sign;
        const int    execute;
    public:
        Form();
        Form(const Form& obj);
        Form& operator=(const Form& obj);
        Form(const std::string& name, const int sign, const int execute);
        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        };
        const std::string& getName() const;
        int getSign() const;
        int getExecute() const;
        bool getIndicating() const;
        void beSigned(const Bureaucrat& obj);
        ~Form();
};

std::ostream& operator<<(std::ostream& stream, const Form& obj);

#endif