#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
    this->grade = 1;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if (this == &obj)
        return *this;
    this->grade = obj.grade;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) : name(obj.name)
{
    *this = obj;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

void Bureaucrat::increment()
{
    if (grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}
void Bureaucrat::decrement()
{
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
    return "1 is highest possible grade!";
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj)
{
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return stream;
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
    return "150 is lowest possible grade!";
}

const std::string& Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat::~Bureaucrat()
{

}
