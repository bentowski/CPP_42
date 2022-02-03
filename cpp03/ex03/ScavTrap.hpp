/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:33:29 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/03 14:33:30 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();
		virtual void attack( const std::string& target);
	private:
		ScavTrap();
		ScavTrap(ScavTrap & src);
		int& operator=(ScavTrap const & src);
};

#endif
