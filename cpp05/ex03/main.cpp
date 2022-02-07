#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "============ Classic tests =============" << std::endl;
	try {
		Bureaucrat  bob("bob", 50);
		std::cout << bob << std::endl;
		std::cout << std::endl;

		Bureaucrat  sully("sully", 1);
		std::cout << sully << std::endl;
		std::cout << std::endl;

		ShrubberyCreationForm 	sc("sc");
		std::cout << std::endl;
		RobotomyRequestForm 	rr("rr");
		std::cout << std::endl;
		PresidentialPardonForm 	pp("pp");
		std::cout << std::endl;

		try {
			sc.beSigned(sully);
			std::cout << std::endl;
			sc.execute(sully);
			std::cout << std::endl;
		}
		catch (AForm::GradeTooLowException & e ) {
			std::cout << "Grade too low" << std::endl;
			std::cout << std::endl;
		}
		try {
			rr.beSigned(sully);
			std::cout << std::endl;
			rr.execute(sully);
			std::cout << std::endl;
		}
		catch (AForm::GradeTooLowException & e ) {
			std::cout << "Grade too low" << std::endl;
			std::cout << std::endl;
		}
		try {
			pp.beSigned(sully);
			std::cout << std::endl;
			pp.execute(sully);
			std::cout << std::endl;
		}
		catch (AForm::GradeTooLowException & e ) {
			std::cout << "Grade too low" << std::endl;
			std::cout << std::endl;
		}
	}
	catch (AForm::GradeTooHighException & e) {
		std::cout << "Grade too high" << std::endl;
		std::cout << std::endl;
	}
	catch (AForm::GradeTooLowException & e) {
		std::cout << "Grade too low" << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "========== creation form by intern ===========" << std::endl;
	try
	{
		Intern	someRandomIntern;
		Bureaucrat  mike("mike", 1);
		AForm*	rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Cyberman");
		std::cout << std::endl;
		rrf->beSigned(mike);
		std::cout << std::endl;
		delete rrf;
	}
	catch (Intern::UnknownFormException & e) {
		std::cout << "Unknown form type" << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "========== bad creation form by intern ===========" << std::endl;
	try
	{
		Intern	someRandomIntern;
		AForm*	rrf;

		rrf = someRandomIntern.makeForm("blablabla", "Cybermen");
		delete rrf;
		std::cout << std::endl;
	}
	catch (Intern::UnknownFormException & e) {
		std::cout << "Unknown form type" << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
