#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>

class Character
{
	public:
		Character();
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
	private:
		AMateria inventory[4];
}
#endif
