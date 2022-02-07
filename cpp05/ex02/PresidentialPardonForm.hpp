#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		void action();
	private:
		PresidentialPardonForm();
		int& operator=(PresidentialPardonForm const & src);
		PresidentialPardonForm(PresidentialPardonForm & src);
		std::string _target;
};

#endif
