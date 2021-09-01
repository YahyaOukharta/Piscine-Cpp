#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    int g = 137;

    try
    {
        Bureaucrat b("TEST", g);
        std::cout << b ;
        ShrubberyCreationForm f("Hello");
        std::cout << f ;
        b.signForm(f);
        b.executeForm(f);

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}