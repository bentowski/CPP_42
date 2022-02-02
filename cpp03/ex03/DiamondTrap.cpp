#include "DiamondTrap.hpp"

// ============= Constructor ===============

DiamondTrap::DiamondTrap(std::string name):
ClapTrap(name), FragTrap(name), ScavTrap(name)
{
  std::cout << "DiamondTrap custom constructor called" << std::endl;
  return;
}

// ============= Destructor ===============

DiamondTrap::~DiamondTrap()
{
  std::cout << "DiamondTrap default destructor called" << std::endl;
  return ;
}

void DiamondTrap::attack( const std::string& target)
{
	ScavTrap::attack(target);
}

// ========== Members functions ==========
