#include <iostream>

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
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);