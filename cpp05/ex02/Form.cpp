#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade):
_name(name), _signed(0), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else
		std::cout << "Form custom constructor called" << std::endl;
	return ;
}

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
	return ;
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExecGrade() const
{
	return (this->_execGrade);
}

std::string Form::isSigned() const
{
	if (this->_signed == 0)
		return ("no");
	else
		return ("yes");
}

void Form::beSigned(Bureaucrat const & src)
{
	src.signForm(this->getName(), this->getSignGrade());
	if (src.getGrade() <= this->getSignGrade())
		this->_signed = 1;
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream & operator<<( std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName() << "; Grade required for signature : " << rhs.getSignGrade() << "; Grade required for execution : " << rhs.getExecGrade() << "; Signed : " << rhs.isSigned();
	return o;
}
