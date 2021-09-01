#include "Intern.hpp"

int main(void)
{
    int g = 1;

    try
    {
        Bureaucrat b("TEST", g);
        std::cout << b ;
        
        Intern someRandomIntern;
        Form* f;
        f = someRandomIntern.makeForm("shrubbery creation", "Bender");
        std::cout << *f ;
        b.signForm(*f);
        b.executeForm(*f);

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}