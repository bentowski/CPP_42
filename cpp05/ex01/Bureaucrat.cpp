/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:34 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/06 04:12:46 by bbaudry          ###   ########.fr       */
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

void Bureaucrat::signForm(Form const & form) const
{
	if (this->getGrade() <= form.getSignGrade())
	{
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because his grade is too Low : " << form.getSignGrade() << " is required" << std::endl;
	}
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
