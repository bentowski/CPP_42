#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), _target("Everybody") {};
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();

		void action();

	private:
		std::string _target;

		RobotomyRequestForm& operator=(RobotomyRequestForm const & src);
		RobotomyRequestForm(RobotomyRequestForm & src);
};

#endif
