#include "PresidentPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm(std::string name):
Form(name, 145, 137)
{
	std::cout << "President pardon form custom constructor called" << std::endl;
	return ;
}

PresidentPardonForm::~PresidentPardonForm()
{
	std::cout << "President pardon form default destructor called" << std::endl;
	return ;
}
