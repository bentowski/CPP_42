#ifndef MATERIA_H
# define MATERIA_H
# include <iostream>

class AMateria
{
	public:
		AMateria(std::string const & type);
		// [...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		// [...]
};
#endif
