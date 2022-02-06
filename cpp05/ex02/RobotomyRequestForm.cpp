#include "RobotomyRequestForm.hpp"
#include <ctime>

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

void RobotomyRequestForm::action()
{
	time_t now = time(0);

	tm *ltm = localtime(&now);
	if (ltm->tm_sec % 2)
	{
		std::cout << "BZZZZZZ !!!! " << this->_target << " has been success robotomized" << std::endl;
	}
	else
	{
		std::cout << "BZZZZZZ !!!! " << this->_target << " is dead, robotomization failed" << std::endl;
	}
	return ;
}
