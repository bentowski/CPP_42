#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
	std::cout << "ShruberryCreationForm custom constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShruberryCreationForm default destructor called" << std::endl;
	return ;
}

void ShrubberyCreationForm::action()
{
	std::ofstream file_out;
	std::string filename = this->_target;
	filename.append("_shrubberry");
	file_out.open(filename.c_str(), std::ofstream::app);
	if (file_out.is_open())
	{
		file_out << TREES << std::endl;
		file_out.close();
	}
	else
	{
		std::cout << "File " << filename << " creation failed" << std::endl;
		return ;
	}
	return ;
}
