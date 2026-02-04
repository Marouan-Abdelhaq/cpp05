#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::string target = "home";
    Bureaucrat b("Marouan", 140);
    ShrubberyCreationForm f(target);
    std::cout << f << std::endl;
    b.signForm(f);
    std::cout << f << std::endl;
    b.executeForm(f);
    return 0;
}
