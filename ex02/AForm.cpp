#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("default"), sign(1), execute(1)
{
    this->indicating = false;
}

AForm& AForm::operator=(const AForm& obj)
{
    if (this == &obj)
        return *this;
    this->indicating = obj.indicating;
    return *this;
}

AForm::AForm(const AForm & obj) : name(obj.name), sign(obj.sign), execute(obj.execute)
{
    *this = obj;
}

AForm::AForm(const std::string& name, const int sign, const int execute) : name(name), sign(sign), execute(execute)
{
    if (sign < 1 || execute < 1)
        throw GradeTooHighException();
    if (sign > 150 || execute > 150)
        throw GradeTooLowException();
    this->indicating = false;
}

std::ostream& operator<<(std::ostream& stream, const AForm& obj)
{
    if (obj.getIndicating() == true)
       stream << "Form " <<  obj.getName() << ", Signed" << ", grade to sign " << obj.getSign() << ", grade to execute " << obj.getExecute();
    else
        stream << "Form " <<  obj.getName() << ", Not Signed" << ", grade to sign " << obj.getSign() << ", grade to execute " << obj.getExecute();
    return stream;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "1 is highest possible grade!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "150 is lowest possible grade!";
}

const std::string& AForm::getName() const
{
    return this->name;
}

bool AForm::getIndicating() const
{
    return this->indicating;
}

int AForm::getSign() const
{
    return this->sign;
}

int AForm::getExecute() const
{
    return this->execute;
}


void AForm::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() > this->sign)
        throw GradeTooLowException();
    indicating = true;
}

void AForm::executee(Bureaucrat const & executor) const
{
    if (this->getIndicating() == false)
        throw GradeTooLowException();
    if (executor.getGrade() > this->getExecute())
        throw GradeTooLowException();
    this->executeFormAction();
}
AForm::~AForm()
{

}
