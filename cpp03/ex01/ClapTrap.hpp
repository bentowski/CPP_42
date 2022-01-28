#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		~ClapTrap();
		void attack( const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitPoints();
		int getEnergyPoints();
	protected:
	private:
		ClapTrap(ClapTrap & src);
		std::string _name;
		const int _maxHitPoints = 10;
		int _hitPoints = 10;
		int _energyPoints = 10;
		const int _attackDamage = 0;
};

#endif
