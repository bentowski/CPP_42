#include "ScavTrap.hpp"

// ============= Constructor ===============

ScavTrap::ScavTrap(): ClapTrap()
{
  std::cout << "ScavTrap default constructor called" << std::endl;
  return;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
  std::cout << "ScavTrap custom constructor called" << std::endl;
  return;
}

// ============= Destructor ===============

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap default destructor called" << std::endl;
  return ;
}

// ========== Members functions ==========

void ScavTrap::guardGate()
{
  std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
  return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "Hmmm he doesn't move at all... i think he is too tired ! Or maybe dead..." << std::endl;
	}
	return ;
}
