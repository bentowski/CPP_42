#include "Zombie.hpp"

int main()
{
	std::string buf;
	int N = 5;
	int x;

	x = 0;
	std::cin >> buf;
	Zombie* horde = zombieHorde(N ,buf);
	while (x < N)
	{
		horde[x].announce();
		x++;
	}
	delete [] horde;

}
