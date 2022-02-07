#ifndef AFORM_H
# define AFORM_H
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(std::string name, int signGrade, int execGrade);
		AForm(AForm & src);
		virtual ~AForm();

		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		std::string isSigned() const;
		void beSigned(Bureaucrat const & src);
		void execute(Bureaucrat const & executor);

		virtual void action() = 0;
		class GradeTooLowException : public std::exception {};
		class GradeTooHighException : public std::exception {};
	private:
		std::string const _name;
		bool _signed;
		int const _signGrade;
		int const _execGrade;

		AForm();
		AForm& operator=(AForm const & src);
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);


#endif
