#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):
Form(name, 25, 5)
{
	std::cout << "Shruberry creation form custom constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shruberry creation form default destructor called" << std::endl;
	return ;
}
