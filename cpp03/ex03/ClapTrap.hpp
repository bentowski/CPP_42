/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:33:07 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/03 14:34:29 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap{
	public:
		ClapTrap(std::string name);
		ClapTrap(std::string newName, int hitPoints, int  energyPoints, int attackDamage );
		~ClapTrap();
		void attack( const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitPoints();
		int getEnergyPoints();
	protected:
		std::string _name;
		unsigned int _maxHitPoints;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	private:
		ClapTrap();
		int& operator=(ClapTrap const & src);
		ClapTrap(ClapTrap & src);
};

#endif
