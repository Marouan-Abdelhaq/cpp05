#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
    std::string target;
    public:
            RobotomyRequestForm();
            RobotomyRequestForm(const RobotomyRequestForm& obj);
            RobotomyRequestForm(std::string& target);
            RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);

            std::string getTarget() const;
            void execute(Bureaucrat const & executor) const;
            ~RobotomyRequestForm();
};



#endif