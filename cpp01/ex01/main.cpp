/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:57:51 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:57:52 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string buf;
	int N = 5;
	int x;

	x = 0;
	std::cin >> buf;
	Zombie* horde = zombieHorde(N ,buf);
	while (x < N)
	{
		horde[x].announce();
		x++;
	}
	delete [] horde;

}
