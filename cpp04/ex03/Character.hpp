#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : virtual public ICharacter
{
	public:
		Character();
		Character(std::string name);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
	private:
		std::string     _name;
		AMateria *      _inventory[4];
		Character&	operator=(const Character & src);
		Character(Character const & src);
};
#endif
