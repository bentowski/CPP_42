#include "PresidentPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm(std::string target):
AForm("President Pardon Form", 25, 5), _target(target)
{
	std::cout << "PresidentPardonForm custom constructor called" << std::endl;
	return ;
}

PresidentPardonForm::~PresidentPardonForm()
{
	std::cout << "PresidentPardonForm default destructor called" << std::endl;
	return ;
}

void PresidentPardonForm::execute(Bureaucrat const & executor)
{
	if (this->isSigned() == "yes")
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
				std::cout << this->_target << " is forgiven by Zaphod Beeblebrox" << std::endl;
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
