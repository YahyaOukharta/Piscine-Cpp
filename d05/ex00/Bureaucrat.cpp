#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & _name, int _grade) : name(_name)
{
	if (_grade < 1)
		throw(GradeTooHighException);
	if (_grade > 150)
		throw(GradeTooLowException);
	grade = _grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : name(src.getName()), grade(src.getGrade())
{
	
}


Bureaucrat::~Bureaucrat()
{
}


Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		grade = rhs.getGrade();
	}
	return *this;
}

int Bureaucrat::getGrade() const
{
	return (grade);
}
std::string const &Bureaucrat::getName(void) const
{
	return (name);
}

void Bureaucrat::incrementGrade(void)
{
	if (grade == 1)
		throw(GradeTooHighException);
	grade--;
}
void Bureaucrat::decrementGrade(void)
{
	if (grade == 150)
		throw(GradeTooLowException);
	grade++;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << "<" << i.getName() << ">, bureaucrat grade <"<< i.getGrade() << ">" << std::endl;
	return o;
}

