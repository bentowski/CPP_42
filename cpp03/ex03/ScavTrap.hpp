#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();
		void attack( const std::string& target);
	private:
		ScavTrap();
		ScavTrap(ScavTrap & src);
		int& operator=(ScavTrap const & src);
};

#endif
