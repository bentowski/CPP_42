/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:57:31 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/01 13:31:53 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string buf;

	std::cin >> buf;
	Zombie* first = newZombie(buf);
	first->announce();
	delete first;
	Zombie* first2 = newZombie(NULL);
	first2->announce();
	delete first2;
	std::cin >> buf;
	randomChump(buf);
}
