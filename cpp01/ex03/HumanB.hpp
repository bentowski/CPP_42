#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string newName);
		~HumanB( void );
		void attack( void );
		void setWeapon( Weapon weapon );
	private:
		Weapon* weapon;
		std::string name;
};
#endif
