#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap{
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void attack( const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitPoints();
		int getEnergyPoints();
	protected:
	private:
		ClapTrap();
		int& operator=(ClapTrap const & src);
		ClapTrap(ClapTrap & src);
		std::string _name;
		const unsigned int _maxHitPoints;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		const unsigned int _attackDamage;
};

#endif
