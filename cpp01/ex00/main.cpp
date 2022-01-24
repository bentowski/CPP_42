#include "Zombie.hpp"

int main()
{
	std::string buf;

	std::cin >> buf;
	Zombie* first = newZombie(buf);
	first->announce();
	delete first;
	std::cin >> buf;
	randomChump(buf);
}
