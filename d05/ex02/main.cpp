#include "Form.hpp"

int main(void)
{
    int g = 50;

    try
    {
        Bureaucrat b("TEST", g);
        std::cout << b ;
        Form f("Formulaire", 49, 20);
        std::cout << f ;
        b.signForm(f);
        b.signForm(f);
        std::cout << f ;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}