#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		void guardGate();
		// Operateur d'assignations a faire dans les autres exos !!!!
	private:
		ScavTrap(ScavTrap & src);
};

#endif
