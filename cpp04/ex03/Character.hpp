#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include "Materia.hpp"

class Character
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
		// AMateria inventory;
};
#endif