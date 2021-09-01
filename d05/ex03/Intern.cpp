#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	this->formStrings[0] = "shrubbery creation";
	this->formStrings[1] = "robotomy request";
	this->formStrings[2] = "presidential pardon";
}

Intern::Intern( const Intern & src )
{
	(void)src;
	this->formStrings[0] = "shrubbery creation";
	this->formStrings[1] = "robotomy request";
	this->formStrings[2] = "presidential pardon";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

Intern &				Intern::operator=( Intern const & rhs )
{
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	(void)i;
	o << "Some Random Intern" << std::endl;
	return o;
}


Form *Intern::makeForm(std::string formType, std::string target)
{
	int index = 3;
	Form *res;
	for (int i = 0; i < 3; i++)
	{
		if (formStrings[i] == formType)
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
		case 0:
			res = new ShrubberyCreationForm(target);		
			break;
		case 1:
			res = new RobotomyRequestForm(target);
			break;
		case 2:
			res = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Unknown form type <" << formType << ">" << std::endl;
			res = 0;
	}
	return res;
}

