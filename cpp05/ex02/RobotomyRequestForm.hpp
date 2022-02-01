#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
#include "Form.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string name);
		~RobotomyRequestForm();
	private:
		RobotomyRequestForm();
		int& operator=(RobotomyRequestForm const & src);
		RobotomyRequestForm(RobotomyRequestForm & src);
};

#endif
