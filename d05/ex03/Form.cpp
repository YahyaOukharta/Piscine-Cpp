#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string const &_name, int _signGrade, int _execGrade) 
	: name(_name), isSigned(0)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw(GradeTooHighException);
	signGrade = _signGrade;
	if (_signGrade > 150 || _execGrade > 150)
		throw(GradeTooLowException);
	execGrade = _execGrade;
}

Form::Form( const Form & src ) 
	: name(src.getName()), isSigned(0),
		signGrade(src.getSignGrade()), execGrade(src.getExecGrade())
{

}



Form::~Form()
{

}

int Form::getSignGrade(void) const
{
	return (signGrade);
}

int Form::getExecGrade(void) const
{
	return (execGrade);
}

bool Form::getIsSigned(void) const
{
	return (isSigned);
}

std::string const &Form::getName() const
{
	return (name);
}

void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->signGrade)
		throw GradeTooLowException;
	if (this->isSigned)
		throw FormAlreadySignedException;
	this->isSigned = 1;
}

int Form::canExecute(Bureaucrat const & executor) const
{
	if (!this->isSigned)
		throw FormNotSignedForExecutionException;
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException;
	return (1);
}


Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		signGrade = rhs.getSignGrade();
		execGrade = rhs.getExecGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form <" << i.getName() << ">, Signing grade : "<< 
	i.getSignGrade() <<", Execution grade : "<< i.getExecGrade()<<", isSigned : "<< (i.getIsSigned() ? "true" : "false") << std::endl;
	return o;
}
