#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool    indicating;
        const int    sign;
        const int    execute;
    protected:
        virtual void executeFormAction() const = 0;
    public:
        AForm();
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        AForm(const std::string& name, const int sign, const int execute);
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
        void executee(Bureaucrat const & executor) const;
        virtual ~AForm();
};

std::ostream& operator<<(std::ostream& stream, const AForm& obj);

#endif