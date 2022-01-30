/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:02 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:58:02 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <cctype>
# include <cstring>
# include <iostream>

class Zombie {
	public :
		Zombie( void );
		~Zombie( void );
		std::string getZombieName( void );
		void announce( void );
		void setZombieName(std::string name);
	private :
		std::string name;
};

Zombie* zombieHorde( int N, std::string name);

#endif
