#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
	private:
		std::string formStrings[3];

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		Form *makeForm(std::string formType, std::string target);

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */