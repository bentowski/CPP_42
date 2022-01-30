/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:24 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:58:24 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string newName) : name(newName)
{
		return ;
}

HumanB::~HumanB( void )
{
		return ;
}

void HumanB::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon& weapon)
{
	this->weapon = &weapon;
}
