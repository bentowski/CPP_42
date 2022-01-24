#include "Zombie.hpp"

Zombie::Zombie( void ){
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " is gone" << std::endl;
	return ;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName( std::string name)
{
	this->name = name;
}

std::string Zombie::getZombieName( void )
{
	return this->name;
}
