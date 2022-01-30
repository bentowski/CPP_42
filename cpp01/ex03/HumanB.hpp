/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:26 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:58:27 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string newName);
		~HumanB( void );
		void attack( void );
		void setWeapon( Weapon& weapon );
	private:
		Weapon* weapon;
		std::string name;
};
#endif
