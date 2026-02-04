#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    std::string target;
    public:
            PresidentialPardonForm();
            PresidentialPardonForm(const PresidentialPardonForm& obj);
            PresidentialPardonForm(std::string& target);
            PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

            std::string getTarget() const;
            void executeFormAction() const;
            ~PresidentialPardonForm();
};

#endif