#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), _target("Everybody") {};
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

		void action();

	private:
		std::string _target;

		PresidentialPardonForm& operator=(PresidentialPardonForm const & src);
		PresidentialPardonForm(PresidentialPardonForm & src);
};

#endif
