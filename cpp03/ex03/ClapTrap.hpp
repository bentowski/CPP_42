#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap{
	public:
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
		const unsigned int _maxHitPoints;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		const unsigned int _attackDamage;
	private:
		ClapTrap();
		int& operator=(ClapTrap const & src);
		ClapTrap(ClapTrap & src);
};

#endif
