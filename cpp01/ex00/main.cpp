/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:57:31 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 16:12:32 by bbaudry          ###   ########.fr       */
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
	std::cin >> buf;
	randomChump(buf);
}
