#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <exception>
class Form;
class GradeTooHighExcept: public std::exception
{
	const char* what() const throw()
	{
		return "Grade too high exception";
	};
};

class GradeTooLowExcept: public std::exception
{
	const char* what() const throw()
	{
		return "Grade too low exception";
	};
};
class Bureaucrat
{
	private:
		std::string const	&name;
		int					grade;
		GradeTooHighExcept GradeTooHighException;
		GradeTooLowExcept GradeTooLowException;
	public:

		Bureaucrat(std::string const & name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		int getGrade() const ;
		std::string const &getName(void) const;
		void incrementGrade(void);
		void decrementGrade(void);

		void signForm(Form  &f);
		void executeForm(Form const &f);
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */

