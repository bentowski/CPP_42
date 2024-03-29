/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:33:21 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/03 14:33:22 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap monk("Bob");
	ScavTrap monkey("Donkey");
	FragTrap littleMonkey("Diddy");
	DiamondTrap finalKey("Crystal");

	std::cout << std::endl;
	std::cout << "================== Crystal ================" << std::endl;
	std::cout << std::endl;
	std::cout << "Health : " << finalKey.getHitPoints() << std::endl;
	std::cout << "Energy : " << finalKey.getEnergyPoints() << std::endl;
	// std::cout << "Attack Damage : " << finalKey.getAttackDamage() << std::endl;
	finalKey.attack("Lucy");

	std::cout << std::endl;
	std::cout << "================== Diddy ================" << std::endl;
	std::cout << std::endl;
	std::cout << "Health : " << littleMonkey.getHitPoints() << std::endl;
	std::cout << "Energy : " << littleMonkey.getEnergyPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "attack :" << std::endl;
	littleMonkey.attack("Alpha");
	std::cout << "takeDamage :" << std::endl;
	littleMonkey.takeDamage(10);
	std::cout << "Repair :" << std::endl;
	littleMonkey.beRepaired(1);
	std::cout << "Health : " << littleMonkey.getHitPoints() << std::endl;
	std::cout << "Energy : " << littleMonkey.getEnergyPoints() << std::endl;
	std::cout << std::endl;
	littleMonkey.highFiveGuys();

	std::cout << std::endl;
	std::cout << "================== Donkey ================" << std::endl;
	std::cout << std::endl;
	std::cout << "Health : " << monkey.getHitPoints() << std::endl;
	std::cout << "Energy : " << monkey.getEnergyPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "attack :" << std::endl;
	monkey.attack("Alpha");
	std::cout << "takeDamage :" << std::endl;
	monkey.takeDamage(10);
	std::cout << "Repair :" << std::endl;
	monkey.beRepaired(1);
	std::cout << "Health : " << monkey.getHitPoints() << std::endl;
	std::cout << "Energy : " << monkey.getEnergyPoints() << std::endl;
	std::cout << std::endl;
	monkey.guardGate();

	std::cout << std::endl;
	std::cout << "================== Bob ================" << std::endl;
	std::cout << std::endl;
	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "attack :" << std::endl;
	monk.attack("Mike");
	std::cout << "takeDamage :" << std::endl;
	monk.takeDamage(1);
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(1);

	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "attack :" << std::endl;
	monk.attack("Mike");
	std::cout << "takeDamage :" << std::endl;
	monk.takeDamage(2);
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(3);

	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "attack :" << std::endl;
	monk.attack("Mike");
	std::cout << "takeDamage :" << std::endl;
	monk.takeDamage(6);
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(4);

	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "attack :" << std::endl;
	monk.attack("Mike");
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(4);
	std::cout << "takeDamage :" << std::endl;
	monk.takeDamage(9);
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(4);

	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;
}
