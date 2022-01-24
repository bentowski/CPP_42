#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* newestZombie = new Zombie(name);

	return (newestZombie);
}
