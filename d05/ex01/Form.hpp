#ifndef FORM_HPP
# define FORM_HPP


# include <iostream>
# include <string>
#include "Bureaucrat.hpp"
class FormAlreadySignedExcept: public std::exception
{
	const char* what() const throw()
	{
		return "Form already signed";
	};
};
class Form
{
	private:
		std::string const & name;
		bool isSigned;
		int signGrade;
		int execGrade;
		GradeTooHighExcept GradeTooHighException;
		GradeTooLowExcept GradeTooLowException;
		FormAlreadySignedExcept FormAlreadySignedException;
	public:

		Form(std::string const &name, int signGrade, int execGrade);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		std::string const &getName() const;
		bool getIsSigned() const;

		void beSigned(Bureaucrat const &b);
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */