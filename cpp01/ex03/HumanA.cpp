/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:19 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:58:20 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon& newWeapon ) : name(newName), weapon(newWeapon)
{
		return ;
}

HumanA::~HumanA( void )
{
		return ;
}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
