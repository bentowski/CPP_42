#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string newName, int hitPoints, int  energyPoints, int attackDamage );
		~ClapTrap();
		void attack( const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitPoints();
		int getEnergyPoints();
	protected:
		std::string _name;
		const int _maxHitPoints = 10;
		int _hitPoints = 10;
		int _energyPoints = 10;
		const int _attackDamage = 10;
	private:
		int& operator=(ClapTrap const & src);
		ClapTrap(ClapTrap & src);
};

#endif
