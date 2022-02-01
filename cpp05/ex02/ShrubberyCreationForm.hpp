#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include "Form.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string name);
		~ShrubberyCreationForm();
	private:
		ShrubberyCreationForm();
		int& operator=(ShrubberyCreationForm const & src);
		ShrubberyCreationForm(ShrubberyCreationForm & src);
};

#endif
