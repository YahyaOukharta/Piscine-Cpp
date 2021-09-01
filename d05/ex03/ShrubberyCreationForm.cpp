#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
std::string shrubberystr = "ShrubberyCreationForm";

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &_target): 
	Form(shrubberystr,145,137), target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) :
	Form(shrubberystr,145,137), target(src.getTarget())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
std::string ShrubberyCreationForm::getTarget(void) const
{
	return (target);
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << "Form <" << i.getName() << ">, Signing grade : "<< 
	i.getSignGrade() <<", Execution grade : "<< i.getExecGrade()<<", isSigned : "<< (i.getIsSigned() ? "true" : "false") << ", Target <"<<i.getTarget()<<">"<< std::endl;
	return o;
}

std::string getAsciiTree(void)
{
	return "         .     .  .      +     .      .          .\n\
     .       .      .     #       .           .\n\
        .      .         ###            .      .      .\n\
      .      .   \"#:. .:##\"##:. .:#\"  .      .\n\
          .      . \"####\"###\"####\"  .\n\
       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n\
  .             \"#########\"#########\"        .        .\n\
        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n\
     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n\
                .\"##\"#####\"#####\"##\"           .      .\n\
    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n\
      .     \"#######\"##\"#####\"##\"#######\"      .     .\n\
    .    .     \"#####\"\"#######\"\"#####\"    .      .\n\
            .     \"      000      \"    .     .\n\
       .         .   .   000     .        .       .\n\
.. .. ..................O000O........................ ......\n" ;

}
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->canExecute(executor))
	{
		std::ofstream file(target + "_shrubbery");
		file << getAsciiTree() <<std::endl;
		std::cout << "Shrubbery for target <" << target << ">" << " has been created successfully" << std::endl;
	}
}