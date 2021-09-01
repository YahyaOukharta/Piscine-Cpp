#include "PresidentialPardonForm.hpp"


std::string presidentstr = "PresidentialPardonForm";
PresidentialPardonForm::PresidentialPardonForm(std::string const &_target): 
	Form(presidentstr,25,5), target(_target)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):
	Form(presidentstr,25,5), target(src.getTarget())
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (target);
}

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << "Form <" << i.getName() << ">, Signing grade : "<< 
	i.getSignGrade() <<", Execution grade : "<< i.getExecGrade()<<", isSigned : "<< (i.getIsSigned() ? "true" : "false") << ", Target <"<<i.getTarget()<<">"<< std::endl;
	return o;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->canExecute(executor))
	{
		std::cout << "<" << target << ">" << " has been pardoned by Zafod Beeblebrox"<< std::endl;
	}
}