#ifndef PRESIDENTPARDONFORM_H
# define PRESIDENTPARDONFORM_H
#include "AForm.hpp"

class PresidentPardonForm : public AForm
{
	public:
		PresidentPardonForm(std::string target);
		~PresidentPardonForm();
		void execute(Bureaucrat const & executor);
	private:
		PresidentPardonForm();
		int& operator=(PresidentPardonForm const & src);
		PresidentPardonForm(PresidentPardonForm & src);
		std::string _target;
};

#endif
