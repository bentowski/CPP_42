#ifndef INTERN_H
# define INTERN_H
# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"
# define NUM_FORM 3

enum FORMS { SCF, RRF, PPF };

class AForm;

class Intern {

	public:
		Intern();
		~Intern();

		AForm *			makeForm( std::string const & form, std::string const & target ) ;
		AForm *			newSCF( std::string const & target ) ;
		AForm *			newRRF( std::string const & target ) ;
		AForm *			newPPF( std::string const & target ) ;

		class 			UnknownFormException : public std::exception {};

	private:
		AForm *			(Intern::*f[NUM_FORM])( std::string const & target );

		Intern&		operator=(Intern & toCopy);
		Intern( Intern const &Copy );
};

std::ostream&	operator<<(std::ostream& stream, Intern const& Intern);

#endif
