/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:44 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 10:41:57 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog basic;
	{
		Dog tmp = basic;
	}
	int x = 4;
	int y = 0;
	Animal* meta[x];
	while (y < x / 2)
	{
		meta[y] = new Dog();
		std::cout << std::endl;
		y++;
	}
	while (y < x)
	{
		meta[y] = new Cat();
		std::cout << std::endl;
		y++;
	}

	y = 0;
	while (y < x)
	{
		std::cout << meta[y]->getType() << " " << std::endl;
		meta[y]->makeSound();
		std::cout << std::endl;
		y++;
	}

	y = 0;
	while (y < x)
	{
		delete meta[y];
		std::cout << std::endl;
		y++;
	}
	return 0;
}
