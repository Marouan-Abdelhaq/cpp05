
#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat b1("marouan", 1);
        Bureaucrat c(b1);
        Bureaucrat d;
        d = b1;
        std::cout << b1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b2("abdelhaq", 1);
        b2.increment();
        std::cout << b2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b3("mabdelha", 150);
        std::cout << b3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b4("mabdelha", 151);
        b4.decrement();
        std::cout << b4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

