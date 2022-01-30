/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:57:46 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:57:46 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <cctype>
# include <cstring>
# include <iostream>

class Zombie {
	public :
		Zombie( std::string newName );
		~Zombie( void );
		std::string getZombieName( void );
		void announce( void );
	private :
		std::string name;
};

Zombie* newZombie( std::string name);
void randomChump( std::string name);
#endif
