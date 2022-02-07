/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:31 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/06 03:33:15 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int initialGrade);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void gradeUp();
		void gradeDown();
		void signForm(std::string const formName, int const requiredGrade) const;
		void executeForm(AForm const & form) const;
		class GradeTooLowException : public std::exception {};
		class GradeTooHighException : public std::exception {};
	private:
		std::string const _name;
		int _grade;
		Bureaucrat();
		int& operator=(Bureaucrat const & src);
		Bureaucrat(Bureaucrat & src);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif