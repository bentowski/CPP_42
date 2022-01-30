/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:21 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:58:22 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string newName, Weapon& newWeapon );
		~HumanA( void );
		void attack( void );
	private:
		Weapon& weapon;
		std::string name;
};
#endif
