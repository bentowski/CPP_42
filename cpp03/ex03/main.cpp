#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap monk("Bob");
	ScavTrap monkey("Donkey");


	std::cout << std::endl;
	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "attack :" << std::endl;
	monk.attack("Mike");
	std::cout << "takeDamage :" << std::endl;
	monk.takeDamage(1);
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(1);

	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "attack :" << std::endl;
	monk.attack("Mike");
	std::cout << "takeDamage :" << std::endl;
	monk.takeDamage(2);
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(3);

	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "attack :" << std::endl;
	monk.attack("Mike");
	std::cout << "takeDamage :" << std::endl;
	monk.takeDamage(6);
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(4);

	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "attack :" << std::endl;
	monk.attack("Mike");
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(4);
	std::cout << "takeDamage :" << std::endl;
	monk.takeDamage(9);
	std::cout << "Repair :" << std::endl;
	monk.beRepaired(4);

	std::cout << "Health : " << monk.getHitPoints() << std::endl;
	std::cout << "Energy : " << monk.getEnergyPoints() << std::endl;
	std::cout << std::endl;
}
