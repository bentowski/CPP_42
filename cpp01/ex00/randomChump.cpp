/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:57:40 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:57:40 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void randomChump( std::string name)
{
	Zombie* randomZombie = newZombie(name);
	randomZombie->announce();
	delete randomZombie;
}
