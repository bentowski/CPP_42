#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
AForm("Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm custom constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default destructor called" << std::endl;
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (this->isSigned() == "yes")
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
			int random_var = std::rand() % 2;
			if (random_var)
			{
				std::cout << "BZZZZZZ !!!! " << this->_target << " has been success robotomized" << std::endl;
			}
			else
			{
				std::cout << "BZZZZZZ !!!! " << this->_target << " is dead, robotomization failed" << std::endl;
			}
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
