#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), sign(1), execute(1)
{
    this->indicating = false;
}

Form& Form::operator=(const Form& obj)
{
    if (this == &obj)
        return *this;
    this->indicating = obj.indicating;
    return *this;
}

Form::Form(const Form & obj) : name(obj.name), sign(obj.sign), execute(obj.execute)
{
    *this = obj;
}

Form::Form(const std::string& name, const int sign, const int execute) : name(name), sign(sign), execute(execute)
{
    if (sign < 1 || execute < 1)
        throw GradeTooHighException();
    if (sign > 150 || execute > 150)
        throw GradeTooLowException();
    this->indicating = false;
}

std::ostream& operator<<(std::ostream& stream, const Form& obj)
{
    if (obj.getIndicating() == true)
       stream << "Form " <<  obj.getName() << ", Signed" << ", grade to sign " << obj.getSign() << ", grade to execute " << obj.getExecute();
    else
        stream << "Form " <<  obj.getName() << ", Not Signed" << ", grade to sign " << obj.getSign() << ", grade to execute " << obj.getExecute();
    return stream;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

const std::string& Form::getName() const
{
    return this->name;
}

bool Form::getIndicating() const
{
    return this->indicating;
}

int Form::getSign() const
{
    return this->sign;
}

int Form::getExecute() const
{
    return this->execute;
}


void Form::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() > this->sign)
        throw GradeTooLowException();
    if (indicating == false)
    {
        indicating = true;
        std::cout << obj.getName() << " signed " << this->name << std::endl;
    }
    else
        std::cout << obj.getName() << " Already signed." << std::endl;
}
Form::~Form()
{

}
