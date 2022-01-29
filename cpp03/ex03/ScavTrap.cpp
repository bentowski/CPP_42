#include "ScavTrap.hpp"

// ============= Constructor ===============

// ScavTrap::ScavTrap(): ClapTrap()
// {
//   std::cout << "Child default constructor called" << std::endl;
//   return;
// }

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
  std::cout << "Child custom constructor called" << std::endl;
  return;
}

// ============= Destructor ===============

ScavTrap::~ScavTrap()
{
  std::cout << "Child default destructor called" << std::endl;
  return ;
}

// ========== Members functions ==========

void ScavTrap::guardGate()
{
  std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
  return ;
}
