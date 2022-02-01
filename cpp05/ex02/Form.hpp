#ifndef FORM_H
# define FORM_H
# include "Bureaucrat.hpp"

class AForm
{
	public:
		Form(std::string name, int signGrade, int execGrade);
		~Form();
		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		std::string isSigned() const;
		void beSigned(Bureaucrat const & src);
		virtual void execute(Bureaucrat const & executor);
		class GradeTooLowException : public std::exception {};
		class GradeTooHighException : public std::exception {};
	private:
		std::string const _name;
		bool _signed = 0;
		int const _signGrade;
		int const _execGrade;
		Form();
		int& operator=(Form const & src);
		Form(Form & src);
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);


#endif