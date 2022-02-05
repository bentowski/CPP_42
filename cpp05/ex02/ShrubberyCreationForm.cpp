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

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	std::ofstream file_out;
	std::string filename = this->_target;
	filename.append("_shrubberry");
	if (this->isSigned() == "yes")
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
			file_out.open(filename.c_str());
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
