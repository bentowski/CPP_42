
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
