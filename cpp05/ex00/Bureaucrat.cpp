/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:34 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 08:58:06 by bbaudry          ###   ########.fr       */
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
		throw Bureaucrat::GradeTooHighException();
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
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		std::cout << "Bureaucrat " << this->getName() << " has been grade down" << std::endl;
		this->_grade++;
	}
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
