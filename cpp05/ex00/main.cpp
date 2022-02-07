/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:27 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 23:30:52 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat test;
		std::cout << test << std::endl << std::endl;
		
		Bureaucrat mike("Mike", 148);
		std::cout << mike << std::endl;
		std::cout << std::endl;

		Bureaucrat hello(mike);
		std::cout << hello << std::endl;
		std::cout << std::endl;
		try
		{
			mike.gradeDown();
			std::cout << mike << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Bureaucrat Mike can't grade down more" << std::endl;
			std::cout << std::endl;
		}
		try
		{
			mike.gradeDown();
			std::cout << mike << std::endl;
			std::cout << std::endl;
			mike.gradeDown();
			std::cout << mike << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Bureaucrat Mike can't grade down more" << std::endl;
			std::cout << std::endl;
		}
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		std::cout << std::endl;
		try
		{
			bob.gradeUp();
			std::cout << bob << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Bureaucrat Bob can't grade up more" << std::endl;
			std::cout << std::endl;
		}
		try
		{
			bob.gradeUp();
			std::cout << bob << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Bureaucrat Bob can't grade up more" << std::endl;
			std::cout << std::endl;
		}
		Bureaucrat sully("Sully", 151);
		std::cout << sully << std::endl;
		std::cout << std::endl;
		std::cout << "Ohohh, if that is print i have a problem" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "The bureaucrat's grade must be beetween 1 and 150 only" << std::endl;
		std::cout << std::endl;
	}
}
