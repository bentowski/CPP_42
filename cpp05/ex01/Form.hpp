#ifndef FORM_H
# define FORM_H
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, int signGrade, int execGrade);
		Form(Form & src);
		~Form();

		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		std::string isSigned() const;
		void beSigned(Bureaucrat const & src);

		class GradeTooLowException : public std::exception {};
		class GradeTooHighException : public std::exception {};
	private:
		std::string const _name;
		bool _signed;
		int const _signGrade;
		int const _execGrade;

		Form();
		Form& operator=(Form const & src);
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);


#endif
