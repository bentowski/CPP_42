/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:27 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 09:02:28 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	try
	{
		Bureaucrat created("Mike", 148);
		std::cout << created << std::endl;
		std::cout << std::endl;

		try
		{
			Form cantBeSigned("rb12", 20, 35);
			std::cout << cantBeSigned << std::endl;
			std::cout << std::endl;

			Form canBeSigned("rb13", 149, 148);
			std::cout << canBeSigned << std::endl;
			std::cout << std::endl;
			try
			{
				canBeSigned.beSigned(created);
				std::cout << canBeSigned << std::endl;
				std::cout << std::endl;
			}
			catch (std::exception & e)
			{
				std::cout << "The Bureaucrat's grade is too low" << std::endl;
				std::cout << std::endl;
			}
			try
			{
				cantBeSigned.beSigned(created);
				std::cout << cantBeSigned << std::endl;
				std::cout << std::endl;
			}
			catch (std::exception & e)
			{
				std::cout << "The Bureaucrat's grade is too low" << std::endl;
				std::cout << std::endl;
			}
			Form cantBeCreate("rb14", 0, 151);
			std::cout << cantBeCreate << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "The Form's grade must be beetween 1 and 150 only" << std::endl;
			std::cout << std::endl;
		}

		Bureaucrat error("Bob", 0);
		std::cout << error << std::endl;
		std::cout << std::endl;

		Bureaucrat noCreated("Marcel", 12);
		std::cout << noCreated << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "The bureaucrat's grade must be beetween 1 and 150 only" << std::endl;
		std::cout << std::endl;
	}

}
