#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		void guardGate();
    // int getHitPoints();
    // int getEnergyPoints();
    int getAttackDamage();
    void attack(const std::string& target);
	private:
		DiamondTrap();
		DiamondTrap(DiamondTrap & src);
		int& operator=(DiamondTrap const & src);
    std::string _name;
};

#endif
