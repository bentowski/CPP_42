#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor);
	private:
		RobotomyRequestForm();
		int& operator=(RobotomyRequestForm const & src);
		RobotomyRequestForm(RobotomyRequestForm & src);
		std::string _target;
};

#endif
