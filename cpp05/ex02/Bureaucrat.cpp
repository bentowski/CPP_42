/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:34 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/06 04:03:43 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int initialGrade) : _name(name)
{
	if (initialGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (initialGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = initialGrade;
	std::cout << "Bureaucrat custom constructor" << std::endl;
	return ;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::gradeUp()
{
	if (this->_grade == 1)
	{
		std::cout << "Bureaucrat " << this->getName() << " can't grade up more" << std::endl;
	}
	else
	{
		std::cout << "Bureaucrat " << this->getName() << " has been grade up" << std::endl;
		this->_grade--;
	}
}

void Bureaucrat::gradeDown()
{
	if (this->_grade == 150)
	{
		std::cout << "Bureaucrat " << this->getName() << " can't grade down more" << std::endl;
	}
	else
	{
		std::cout << "Bureaucrat " << this->getName() << " has been grade down" << std::endl;
		this->_grade++;
	}
}

void Bureaucrat::signForm(std::string const formName, int const requiredGrade) const
{
	if (this->getGrade() <= requiredGrade)
	{
		std::cout << this->getName() << " signs " << formName << std::endl;
	}
	else
	{
		std::cout << this->getName() << " cannot sign because his grade is too Low : " << requiredGrade << " is required" << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) const
{
	if (form.isSigned() == "yes")
	{
		if (this->getGrade() <= form.getExecGrade())
		{
				std::cout << this->_name << " execute " << form.getName() << std::endl;
				return ;
		}
		std::cout << this->_name << " can't execute " << form.getName() << " because the required grqde is too high for him" << std::endl;
		return ;
	}
	std::cout << this->_name << " can't execute " << form.getName() << " because is not signed" << std::endl;
	return ;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
