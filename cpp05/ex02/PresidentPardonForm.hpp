#ifndef PRESIDENTPARDONFORM_H
# define PRESIDENTPARDONFORM_H
#include "Form.hpp"

class PresidentPardonForm : public AForm
{
	public:
		PresidentPardonForm(std::string name);
		~PresidentPardonForm();
	private:
		PresidentPardonForm();
		int& operator=(PresidentPardonForm const & src);
		PresidentPardonForm(PresidentPardonForm & src);
};

#endif
