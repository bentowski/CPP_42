#include "ClapTrap.hpp"

// ================ Constructors ===============

ClapTrap::ClapTrap() : _maxHitPoints(10), _attackDamage(10)
{
	std::cout << "Default constructor call" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string newName ) : _name(newName), _maxHitPoints(10), _attackDamage(10)
{
	std::cout << "Only string constructor call" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string newName, int hitPoints, int  energyPoints, int attackDamage ) : _name(newName), _maxHitPoints(hitPoints), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "Custom constructor call" << std::endl;
	return ;
}

// ================ Destructors ===============

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor call" << std::endl;
	return ;
}

// ================ Members functions ===========

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > amount)
	{
		std::cout << "ClapTrap " << this->_name << " has been attack and loose " << amount << "PV ...!" << std::endl;
		this->_hitPoints -= amount;
	}
	else if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " has been attack and loose " << this->_hitPoints << "PV ...!" << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		std::cout << "STOP TO HIT HIM, HE IS ALREADY DEAD !!!!!" << std::endl;
	}
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->_hitPoints + amount) > this->_maxHitPoints)
	{
		amount = this->_maxHitPoints - this->_hitPoints;
	}
	if (this->_hitPoints > 0 && (this->_hitPoints + amount) <= this->_maxHitPoints && this->_energyPoints >= amount)
	{
		std::cout << "ClapTrap " << this->_name << " be repaired of " << amount << "PV but loose " << amount << " energy !" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= amount;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "Is too late..." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap is too tired for repair himself" << std::endl;
	}
	return;
}

// ================ Accessors ===============

int ClapTrap::getHitPoints()
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints()
{
	return (this->_energyPoints);
}
