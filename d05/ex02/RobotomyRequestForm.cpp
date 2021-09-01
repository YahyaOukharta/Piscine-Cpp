#include "RobotomyRequestForm.hpp"


std::string robotomystr = "RobotomyRequestForm";
RobotomyRequestForm::RobotomyRequestForm(std::string const &_target): 
	Form(robotomystr,72,45), target(_target)
{
		srand((unsigned)time(NULL));

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) :
	Form(robotomystr,72,45), target(src.getTarget())
{
		srand((unsigned)time(NULL));

}


RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (target);
}

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "Form <" << i.getName() << ">, Signing grade : "<< 
	i.getSignGrade() <<", Execution grade : "<< i.getExecGrade()<<", isSigned : "<< (i.getIsSigned() ? "true" : "false") << ", Target <"<<i.getTarget()<<">"<< std::endl;
	return o;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->canExecute(executor))
	{
		if(rand()%100>50)
			std::cout << "*Drilling noises* <" << target << ">" << " has been robotomized successfully" << std::endl;
		else
			std::cout << "*Drilling noises* <" << target << ">" << "'s robotomy has failed" << std::endl;
	}
}