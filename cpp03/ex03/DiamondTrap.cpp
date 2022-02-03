/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:33:01 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/03 14:33:01 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ============= Constructor ===============

DiamondTrap::DiamondTrap(std::string name):
ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(name), ScavTrap(name), _name(name)
{
  std::cout << "DiamondTrap custom constructor called" << std::endl;
  return;
}

// ============= Destructor ===============

DiamondTrap::~DiamondTrap()
{
  std::cout << "DiamondTrap default destructor called" << std::endl;
  return ;
}

// ========== Members functions ==========

void DiamondTrap::attack( const std::string& target)
{
	std::cout << this->_name << std::endl;
  ScavTrap::attack(target);
}
