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

void PresidentPardonForm::action()
{
	std::cout << this->_target << " is forgiven by Zaphod Beeblebrox" << std::endl;
	return ;
}
