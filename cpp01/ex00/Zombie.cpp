/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:57:43 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:57:44 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string newName ) : name(newName){
	std::cout << this->name <<" Zombie created" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " is gone" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getZombieName( void )
{
	return this->name;
}
