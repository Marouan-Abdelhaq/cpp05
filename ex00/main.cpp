
#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat b("marouan", 1);
        Bureaucrat c(b);
        c.increment();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

