#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int initialGrade) : name(name)
{
	if (initialGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (initialGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = initialGrade;
	std::cout << "Bureaucrat custom constructor" << std::endl;
	return ;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::gradeUp()
{
	if (this->grade == 1)
	{
		std::cout << "Bureaucrat" << this->getName() << "can't grade up more" << std::endl;
	}
	else
	{
		this->grade--;
	}
}

void Bureaucrat::gradeDown()
{
	if (this->grade == 150)
	{
		std::cout << "Bureaucrat" << this->getName() << "can't grade down more" << std::endl;
	}
	else
	{
		this->grade--;
	}
}
