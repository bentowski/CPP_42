#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
AForm("Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm custom constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm default destructor called" << std::endl;
	return ;
}

void PresidentialPardonForm::action()
{
	std::cout << this->_target << " is forgiven by Zaphod Beeblebrox" << std::endl;
	return ;
}
