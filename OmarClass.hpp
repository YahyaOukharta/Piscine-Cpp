#ifndef OMARCLASS_HPP
# define OMARCLASS_HPP

# include <iostream>
# include <string>

class OmarClass
{

	public:

		OmarClass();
		OmarClass( OmarClass const & src );
		~OmarClass();

		OmarClass &		operator=( OmarClass const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, OmarClass const & i );

#endif /* ******************************************************* OMARCLASS_H */