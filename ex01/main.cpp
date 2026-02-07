#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Alice", 10);
        Form f1("Contract", 20, 50);

        std::cout << b1 << std::endl;
        std::cout << f1 << std::endl;

        b1.signForm(f1);
        b1.signForm(f1);
        // std::cout << f1 << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
