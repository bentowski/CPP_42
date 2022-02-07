/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:31 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 23:39:51 by bbaudry          ###   ########.fr       */
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
		Bureaucrat() : _name("Anonymous"), _grade(150) {};
		Bureaucrat(std::string name, int initialGrade);
		Bureaucrat(Bureaucrat & src);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void gradeUp();
		void gradeDown();
		void signForm(std::string const formName, int const requiredGrade) const;
		void executeForm(AForm const & form) const;
		Bureaucrat& operator=(Bureaucrat const & src);

		class GradeTooLowException : public std::exception {};
		class GradeTooHighException : public std::exception {};
	private:
		std::string const _name;
		int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
