/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:59:27 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/05 23:35:58 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
			Bureaucrat bob("Bob", 148);
			Bureaucrat antonio("Antonio", 146);
			Bureaucrat mike("Mike", 71);
			Bureaucrat denis("Denis", 25);
			Bureaucrat sully("Sully", 1);

			// =============== Shrubbery Form =============
			try
			{
				std::cout << std::endl;
				std::cout << "===== Shrubbery Form =======" << std::endl;
				std::cout << std::endl;
				ShrubberyCreationForm FirstForm("garden");
				std::cout << std::endl;
				// ============= Can't be signed ===============
				std::cout << bob << std::endl;
				std::cout << std::endl;
				try
				{
					FirstForm.beSigned(bob);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be signed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
				try
				{
					FirstForm.execute(bob);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be executed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
				std::cout << std::endl;

				// ============= Can't be executed but can be signed ============
				std::cout << antonio << std::endl;
				std::cout << std::endl;
				try
				{
					FirstForm.beSigned(antonio);
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be signed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
				antonio.gradeUp();
				std::cout << antonio << std::endl;
				std::cout << std::endl;
				try
				{
					FirstForm.beSigned(antonio);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be signed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
				try
				{
					FirstForm.execute(antonio);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be executed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
				std::cout << std::endl;

				// =============== Can be executed ===============
				std::cout << mike << std::endl;
				std::cout << std::endl;
				try
				{
					FirstForm.execute(mike);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be executed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}


				// =========================== End of Shrubbery ========================


			}
			catch (std::exception & e)
			{
				std::cout << "The Form's grade must be beetween 1 and 150 only" << std::endl;
			}
			try
			{
				std::cout << std::endl;
				std::cout << "===== Robotomy Form =======" << std::endl;
				std::cout << std::endl;
				// =========================== Robotomy Form ===========================
				RobotomyRequestForm SecondForm("Lucas");
				std::cout << std::endl;

				// ============= Can't be signed ===============
				std::cout << antonio << std::endl;
				std::cout << std::endl;
				try
				{
					SecondForm.beSigned(antonio);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be signed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
				try
				{
					SecondForm.execute(antonio);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be executed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}

				// ============= Can't be executed but can be signed ============
				std::cout << mike << std::endl;
				std::cout << std::endl;
				try
				{
					SecondForm.beSigned(mike);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be signed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
				try
				{
					SecondForm.execute(mike);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be executed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}

				// =============== Can be executed ===============
				std::cout << denis << std::endl;
				std::cout << std::endl;
				try
				{
					SecondForm.execute(denis);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be executed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
			}
			catch (std::exception & e)
			{
				std::cout << "The Form's grade must be beetween 1 and 150 only" << std::endl;
			}
			std::cout << std::endl;
			try
			{
				std::cout << std::endl;
				std::cout << "===== President Pardon Form =======" << std::endl;
				std::cout << std::endl;
				// =========================== Robotomy Form ===========================
				PresidentPardonForm SecondForm("Lucia");
				std::cout << std::endl;

				// ============= Can't be signed ===============
				std::cout << antonio << std::endl;
				std::cout << std::endl;
				try
				{
					SecondForm.beSigned(antonio);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be signed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
				try
				{
					SecondForm.execute(antonio);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be executed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}

				// ============= Can't be executed but can be signed ============
				std::cout << denis << std::endl;
				std::cout << std::endl;
				try
				{
					SecondForm.beSigned(denis);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be signed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
				try
				{
					SecondForm.execute(denis);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be executed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}

				// =============== Can be executed ===============
				std::cout << sully << std::endl;
				std::cout << std::endl;
				try
				{
					SecondForm.execute(sully);
					std::cout << std::endl;
				}
				catch (std::exception & e)
				{
					std::cout << "The Form can't be executed by a low graded bureaucrat" << std::endl;
					std::cout << std::endl;
				}
			}
			catch (std::exception & e)
			{
				std::cout << "The Form's grade must be beetween 1 and 150 only" << std::endl;
			}
			std::cout << std::endl;
	}

	catch (std::exception & e)
	{
		std::cout << "The bureaucrat's grade must be beetween 1 and 150 only" << std::endl;
	}

}
