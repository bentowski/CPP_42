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
