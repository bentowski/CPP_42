#include "DiamondTrap.hpp"

// ============= Constructor ===============

DiamondTrap::DiamondTrap():
ScavTrap(), FragTrap()
{
  std::cout << "DiamondTrap default constructor called" << std::endl;
  return;
}

DiamondTrap::DiamondTrap(std::string name):
FragTrap(name), ScavTrap(name)
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

void DiamondTrap::attack(const std::string& target)
{
  this->ScavTrap::attack(target);
  return ;
}

int DiamondTrap::getAttackDamage()
{
  return (FragTrap::_attackDamage);
}
