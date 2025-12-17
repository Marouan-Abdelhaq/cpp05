#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "===== TEST 1 : Création valide =====" << std::endl;
    try
    {
        Bureaucrat b1("Alice", 10);
        Form f1("Contract", 20, 50);

        std::cout << b1 << std::endl;
        std::cout << f1 << std::endl;

        b1.signForm(f1);   // doit réussir
        std::cout << f1 << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 2 : Grade trop bas =====" << std::endl;
    try
    {
        Bureaucrat b2("Bob", 100);
        Form f2("SecretForm", 50, 80);

        b2.signForm(f2);   // doit échouer
    }
    catch (std::exception& e)
    {
        std::cout << "Exception capturée dans main: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 3 : Grade limite =====" << std::endl;
    try
    {
        Bureaucrat b3("Charlie", 50);
        Form f3("BorderForm", 50, 120);

        b3.signForm(f3);   // doit réussir (égalité autorisée)
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 4 : Form déjà signée =====" << std::endl;
    try
    {
        Bureaucrat b4("Diana", 1);
        Form f4("TopSecret", 1, 1);

        b4.signForm(f4);   // OK
        b4.signForm(f4);   // OK (pas interdit par le sujet)
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 5 : Création invalide du Form =====" << std::endl;
    try
    {
        Form f5("InvalidForm", 0, 200); // ❌ invalide
    }
    catch (std::exception& e)
    {
        std::cout << "Exception attendue: " << e.what() << std::endl;
    }

    std::cout << "\n===== FIN DES TESTS =====" << std::endl;
    return 0;
}
