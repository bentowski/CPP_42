#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include "AForm.hpp"

# define TREES "\n\
								# #### ####\n\
						 ### \\/#|### |/####\n\
					 ##\\/#/ \\||/##/_/##/_#\n\
			    ###  \\/###|/ \\/ # ###\n\
				  ##_\\_#\\_\\## | #/###_/_####\n\
				 	## #### # \\ #| /  #### ##/##\n\
					  __#_--###`  |{,###---###-~\n\
				 	  && &\\/&\\|& ()|/ @, &&\n\
					  &\\/(/&/&||/& /_/)_&/_&\n\
				   &() &\\/&|()|/&\\/ '%\" & ()\n\
				  &_\\_&&_\\ |& |&&/&__%_/_& &&\n\
				&&   && & &| &| /& & % ()& /&&\n\
				 ()&_---()&\\&\\|&&-&&--%---()~\n\
					  &&    \\|||\n\
									 	|||\n\
									 	|||\n\
									 	|||\n\
								 	, -=-~  .-^- _\n"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), _target("Everywhere") {};
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();

		void action();

	private:
		std::string _target;

		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & src);
		ShrubberyCreationForm(ShrubberyCreationForm & src);
};

#endif
