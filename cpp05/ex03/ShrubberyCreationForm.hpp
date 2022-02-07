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
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void action();
	private:
		ShrubberyCreationForm();
		int& operator=(ShrubberyCreationForm const & src);
		ShrubberyCreationForm(ShrubberyCreationForm & src);
		std::string _target;
};

#endif
