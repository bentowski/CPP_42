#include "DiamondTrap.hpp"

// ============= Constructor ===============

DiamondTrap::DiamondTrap(std::string name):
ClapTrap(name + "_clap_trap", 100, 50, 30), FragTrap(name), ScavTrap(name), _name(name)
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

// ========== Members functions ==========

void DiamondTrap::attack( const std::string& target)
{
  ScavTrap::attack(target);
}
