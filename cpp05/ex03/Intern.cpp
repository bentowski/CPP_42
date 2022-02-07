#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <exception>


Intern::Intern( void ) {

	this->f[SCF] = &Intern::newSCF;
	this->f[RRF] = &Intern::newRRF;
	this->f[PPF] = &Intern::newPPF;
	return;
}

Intern::~Intern( void ) {

	return;
}

AForm *	Intern::newSCF( std::string const & target ) {

	return new ShrubberyCreationForm(target);
}

AForm *	Intern::newRRF( std::string const & target ) {

	return new RobotomyRequestForm(target);
}

AForm *	Intern::newPPF( std::string const & target ) {

	return new PresidentialPardonForm(target);
}

AForm *	Intern::makeForm( std::string const & form, std::string const & target ) {

	std::string	list_forms[NUM_FORM] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (int i = 0; i < NUM_FORM; ++i) {
		if (!list_forms[i].compare(form))
		{
			std::cout << "Intern creates " << form << std::endl;
			return (this->*f[i])(target);
		}
	}
	std::cout << form << " can't be created" << std::endl;
	throw Intern::UnknownFormException();
}

std::ostream&	operator<<(std::ostream& stream, Intern const& Copy)
{
	(void)Copy;
	stream << "I'm an intern, would you like some coffee?" << std::endl;
	return (stream);
}
