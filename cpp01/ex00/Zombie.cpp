#include "Zombie.hpp"

Zombie::Zombie( std::string newName ) : name(newName){
	std::cout << this->name <<" Zombie created" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " is gone" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getZombieName( void )
{
	return this->name;
}
