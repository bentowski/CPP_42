/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:39 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:58:40 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon {
	public:
		Weapon( std::string newType);
		~Weapon( void );
		const std::string& getType( void ) const;
		void setType( std::string newType);
	private:
		std::string type;
};
#endif
