/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:27 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/05 19:20:09 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "============= First test ==============" << std::endl;
	try
	{
		Bureaucrat created("Mike", 148);
		std::cout << created << std::endl;
		std::cout << std::endl;
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
	std::cout << "============= Second test ==============" << std::endl;
	try
	{
		Bureaucrat created("Mike2", 148);
		std::cout << created << std::endl;
		std::cout << std::endl;
		Bureaucrat error("Bob2", 151);
		std::cout << error << std::endl;
		std::cout << std::endl;
		Bureaucrat noCreated("Marcel2", 12);
		std::cout << noCreated << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "The bureaucrat's grade must be beetween 1 and 150 only" << std::endl;
		std::cout << std::endl;
	}
	std::cout << "============= Third test ==============" << std::endl;
	try
	{
		Bureaucrat created("Mike3", 148);
		std::cout << created << std::endl;
		std::cout << std::endl;
		Bureaucrat createdtoo("Bob3", 11);
		std::cout << createdtoo << std::endl;
		std::cout << std::endl;
		Bureaucrat allCreated("Marcel3", 12);
		std::cout << allCreated << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "The bureaucrat's grade must be beetween 1 and 150 only" << std::endl;
		std::cout << std::endl;
	}
}
