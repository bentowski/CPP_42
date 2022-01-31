/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:27 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/31 17:06:28 by bbaudry          ###   ########.fr       */
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
		Bureaucrat error("Bob", 0);
		std::cout << error << std::endl;
		Bureaucrat noCreated("Marcel", 12);
		std::cout << noCreated << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << "The bureaucrat's grade must be beetween 1 and 150 only" << std::endl;
	}
}
