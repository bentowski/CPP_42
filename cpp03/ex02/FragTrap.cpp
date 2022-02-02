#include "FragTrap.hpp"

// ============= Constructor ===============

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
  std::cout << "FragTrap custom constructor called" << std::endl;
  return;
}

// ============= Destructor ===============

FragTrap::~FragTrap()
{
  std::cout << "FragTrap default destructor called" << std::endl;
  return ;
}

// ========== Members functions ==========

void FragTrap::highFiveGuys()
{
  std::cout << this->_name << " put his arm up and says : Good Jobe, high five guys !" << std::endl;
  return ;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target;
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
