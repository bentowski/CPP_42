/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:10 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:58:10 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPtr = &string;
	std::string& stringRef = string;

	std::cout << &string << std::endl;
	std::cout << stringPtr << std::endl;
	std::cout << &stringRef << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPtr << std::endl;
	std::cout << stringRef << std::endl;
}
