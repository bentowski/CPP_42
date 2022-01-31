#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int initialGrade);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void gradeUp();
		void gradeDown();
		std::exception GradeTooLowException();
		std::exception GradeTooHighException();
	private:
		Bureaucrat();
		int& operator=(Bureaucrat const & src);
		Bureaucrat(Bureaucrat & src);
		std::string const name;
		int grade;
};

#endif
