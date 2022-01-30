/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:59:19 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:59:20 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	if (argc == 2)
		karen.complain(argv[1]);
	else
		std::cout << "please enter one argument" << std::endl;
	return (0);
}
