/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:37 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:58:37 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string newType) : type(newType)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

const std::string& Weapon::getType( void ) const
{
	const std::string& typeRef = this->type;
	return typeRef;
}

void Weapon::setType( std::string newType )
{
	this->type = newType;
	std::cout << "ok" << std::endl;
}
