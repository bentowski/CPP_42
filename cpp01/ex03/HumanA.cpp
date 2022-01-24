#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon& newWeapon ) : name(newName), weapon(newWeapon)
{
		return ;
}

HumanA::~HumanA( void )
{
		return ;
}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
