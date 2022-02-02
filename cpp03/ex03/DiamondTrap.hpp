#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		using FragTrap::getHitPoints;
		void attack( const std::string& target);
	private:
		DiamondTrap();
		DiamondTrap(DiamondTrap & src);
		int& operator=(DiamondTrap const & src);
  	std::string _name;
};

#endif
