#include "HumanB.hpp"

HumanB::HumanB( std::string newName) : name(newName)
{
		return ;
}

HumanB::~HumanB( void )
{
		return ;
}

void HumanB::attack( void )
{
	std::string to_print = this->weapon->getType();
	std::cout << this->name << " attacks with their " << &to_print << std::endl;
}

void HumanB::setWeapon( Weapon weapon)
{
	this->weapon = weapon;
}
