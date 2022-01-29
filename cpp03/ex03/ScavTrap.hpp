#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();
	private:
		ScavTrap();
		ScavTrap(ScavTrap & src);
		int& operator=(ScavTrap const & src);
		std::string _name;
		const int _maxHitPoints;
		int _hitPoints;
		int _energyPoints;
		const int _attackDamage;
};

#endif
