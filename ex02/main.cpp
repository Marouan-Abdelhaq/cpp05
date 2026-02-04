#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctime>
#include "RobotomyRequestForm.hpp"

int main()
{
    srand(time(0));
    std::string target = "home";
    Bureaucrat b("Marouan", 160);
    ShrubberyCreationForm f(target);
    std::cout << f << std::endl;
    b.signForm(f);
    std::cout << f << std::endl;
    b.executeForm(f);
    return 0;
}
