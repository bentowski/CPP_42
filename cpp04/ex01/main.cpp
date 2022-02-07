/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:13:44 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/07 22:43:28 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "=============== Deep Copy ==============" << std::endl;
	Dog basic;
	std::cout << std::endl;
	{
		basic.setBrain();
		basic.setBrain(4, "ok");
		basic.setBrain(31, "lalal");
		Dog tmp = basic;
		std::cout << std::endl;
		basic.getBrain(0);
		tmp.getBrain(0);
		std::cout << std::endl;
		basic.getBrain(4);
		tmp.getBrain(4);
		std::cout << std::endl;
		basic.getBrain(31);
		tmp.getBrain(31);
		std::cout << std::endl;
		tmp.setBrain(31, "louloul");
		basic.getBrain(31);
		tmp.getBrain(31);
		std::cout << std::endl;
		std::cout << basic.getBrainAdress() << std::endl;
		std::cout << tmp.getBrainAdress() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=============== Classics tests ==============" << std::endl;
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
