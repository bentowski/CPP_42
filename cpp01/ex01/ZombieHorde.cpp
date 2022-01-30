/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:06 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:58:06 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	int x;

	x = 0;
	while (x < N)
	{
		horde[x].setZombieName(name);
		x++;
	}
	return (&horde[0]);
}
