#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name):
Form(name, 72, 45)
{
	std::cout << "Robotomy request form custom constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy request form default destructor called" << std::endl;
	return ;
}
