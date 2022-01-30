/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:56:36 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:56:37 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>
#include <iostream>
#include "./Phonebook.hpp"

int main()
{
	int		x;

	Phonebook	phonebook;
	std::cout << "Welcome !" << std::endl;
	while (1)
	{
		if (phonebook.listen())
			break;
	}
	std::cout << "Bye !" << std::endl;
	return (0);
}
