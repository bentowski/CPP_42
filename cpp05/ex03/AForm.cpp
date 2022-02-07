#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int execGrade):
_name(name), _signed(0), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else
		std::cout << "AForm custom constructor called" << std::endl;
	return ;
}

AForm::AForm(AForm & src):
_name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	this->_signed = 0;
	return ;
}

AForm::~AForm()
{
	std::cout << "AForm default destructor called" << std::endl;
	return ;
}

std::string AForm::getName() const
{
	return (this->_name);
}

int AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int AForm::getExecGrade() const
{
	return (this->_execGrade);
}

std::string AForm::isSigned() const
{
	if (this->_signed == 0)
		return ("no");
	else
		return ("yes");
}

void AForm::beSigned(Bureaucrat const & src)
{
	src.signForm(this->getName(), this->getSignGrade());
	if (src.getGrade() <= this->getSignGrade())
		this->_signed = 1;
	else
		throw AForm::GradeTooLowException();
	return;
}

void AForm::execute(Bureaucrat const & executor)
{
	executor.executeForm(*this);
	if (this->isSigned() == "yes")
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
			this->action();
		}
		else
		{
			throw AForm::GradeTooLowException();
		}
	}
	else
	{
		std::cout << "Can't be executed because " << this->getName() << " is not signed" << std::endl;
	}
	return ;
}

std::ostream & operator<<( std::ostream & o, AForm const & rhs)
{
	o << "AForm " << rhs.getName() << "; Grade required for signature : " << rhs.getSignGrade() << "; Grade required for execution : " << rhs.getExecGrade() << "; Signed : " << rhs.isSigned();
	return o;
}
