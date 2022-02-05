#ifndef MATERIA_H
# define MATERIA_H
# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(std::string const & type);
		~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string const _type;
};
#endif
