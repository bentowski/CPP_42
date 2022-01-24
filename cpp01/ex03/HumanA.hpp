#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string newName, Weapon newWeapon );
		~HumanA( void );
		void attack( void );
		void setWeapon( Weapon weapon );
	private:
		Weapon weapon;
		std::string name;
};
#endif
