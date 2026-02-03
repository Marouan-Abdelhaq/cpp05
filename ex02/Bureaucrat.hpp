#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat (const std::string& name, int grade);
        void decrement();
        void increment();
        Bureaucrat& operator=(const Bureaucrat& obj);
        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        };
        const std::string& getName() const;
        int getGrade() const;
        void    signForm(AForm& obj);
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);

#endif