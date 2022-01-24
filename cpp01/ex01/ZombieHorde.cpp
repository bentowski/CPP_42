#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	int x;

	x = 0;
	while (x < N)
	{
		horde[x].setZombieName(name);
		horde[x].announce();
		x++;
	}
	delete [] horde;
	return (horde);
}
