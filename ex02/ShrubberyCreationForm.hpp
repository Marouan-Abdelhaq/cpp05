#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    std::string target;
    public:
            ShrubberyCreationForm();
            ShrubberyCreationForm(const ShrubberyCreationForm& obj);
            ShrubberyCreationForm(std::string& target);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

            std::string getTarget() const;
            void executeFormAction() const;
            ~ShrubberyCreationForm();
};



#endif