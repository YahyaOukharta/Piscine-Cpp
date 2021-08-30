#include "Bureaucrat.hpp"

int main(void)
{
    int g = 120;

    try
    {
        Bureaucrat b("TEST", g);
        std::cout << b ;
        b.incrementGrade();
        std::cout << b ;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    g = 150;
    try
    {
        Bureaucrat b("TEST", g);
        std::cout << b ;
        b.decrementGrade();
        std::cout << b ;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    g = 1;
    try
    {
        Bureaucrat b("TEST", g);
        std::cout << b ;
        b.incrementGrade();
        std::cout << b ;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}