#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		// AMateria* saveUnequip(int idx) const;
		void use(int idx, ICharacter& target);
		Character&	operator=(const Character & src);
	private:
		std::string     _name;
		AMateria*      _inventory[4];
		Character(Character const & src);
};
#endif
